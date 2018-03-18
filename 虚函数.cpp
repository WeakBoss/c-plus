
#include <iostream>
#include <string>
using namespace std;
class A {
public:
	A(int x, int y, int z) :x(x), y(y), z(z) {}
	 virtual void show() const {
		cout << x << " " << y << " " << z <<" AµÄ"<< endl;
	}
protected:
	int x, y, z;
};
class B :public A {
public:
	B(int x, int y, int z, int i) :A(x, y, z) {
		this->i = i;
	}
	void show() const {
		cout << x << " " << y << " " << z << " " << i << " BµÄ"<<endl;
	}
private:
	int i;
};
void reference(const A& obj) {
	obj.show();
}
int main()
{
	A *pa;
	A a(1,2,3);
	B b(4,5,6,7);
	pa=&a;
	pa->show();
	pa=&b;
	pa->show();	
	b.show();
	b.A::show();
	string s2;
	return 0;
}

