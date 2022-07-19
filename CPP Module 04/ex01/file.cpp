#include <iostream>
using namespace std;


class Base
{
	public:
		Base(){ cout << " Base constructor is called \n" ;}
		virtual ~Base(){ cout << " Base destructor is called \n" ;}
};

class Child : public Base
{
		public:
		Child(){ cout << " child constructor is called \n" ;}
		~Child(){ cout << " child destructor is called \n" ;}
};

class GRANDSONE : public Child
{
	public:
		GRANDSONE(){ cout << " GRANDSONE constructor is called \n" ;}
		~GRANDSONE(){ cout << " GRANDSONE destructor is called \n" ;}
};

int main ()
{
	Base* b = new Base();
	delete b;
	cout << "\n";
	Child* c = new Child();
	delete c;
	cout << "\n";
	Child* g = new GRANDSONE();
	delete g;
	cout << "\n";
	Base* poly = new Child();
	delete poly;

	return 0;
}
