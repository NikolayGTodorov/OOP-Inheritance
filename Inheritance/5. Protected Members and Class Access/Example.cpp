class Base {
	//Note freind of Base have access to all
public:
	int a{ 0 };
protected:
	int b{ 0 };
private:
	int c{ 0 };
};

class Derived : public Base {
public:
	void accessBaseMemebers() {
		a = 100; // OK
		b = 200; // OK
		//c = 300; // not accessible
	}
};

int main() {
	Base base;
	base.a = 100; // OK
	//base.b = 200; // ERROR
	//base.c = 300; // ERROR

	Derived der;
	der.a = 100; //OK
	//der.b = 200; //ERROR
	//der.c = 300; //ERROR
}