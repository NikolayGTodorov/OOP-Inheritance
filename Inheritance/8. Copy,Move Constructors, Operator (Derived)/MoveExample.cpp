#include <iostream>

class MyString {
private:
	char* str;
public:
	//... constructors
	MyString(MyString&& rhs) : str{ rhs.str } {
		rhs.str = nullptr;
	}
	MyString& operator=(MyString&& rhs)
	{
		if (this == &rhs) {  //check for self assignment
			return *this;    //return current object
		}
		delete[] this->str;  //deallocate storage for this->str since we are overwriting it
		str = rhs.str;		 //steal the pointer from the rhs object and assign it to this->str
		rhs.str = nullptr;   //null out the rhs pointer

		return *this;		 //return the current object by reference to allow chain assignment
	}
};

class Text : public MyString {
private:
	char* biggerStr;
public:
	//consturctors
	Text(Text&& rhs) : MyString(std::move(rhs)), biggerStr(rhs.biggerStr) {
		rhs.biggerStr = nullptr;
	}
	
	Text& operator=(Text&& rhs) {
		if (this != &rhs) {
			MyString::operator=(std::move(rhs));
			delete[] biggerStr;
			biggerStr = rhs.biggerStr;
			rhs.biggerStr = nullptr;
		}
	}
};