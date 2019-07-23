#include<bits/stdc++.h>
using namespace std;
class A{//基类 
	public:
		virtual void print(){
			cout<<"A::print"<<endl;
		}
};

class B:public A{//B是A的派生类 
	public:
		virtual void print(){
			cout<<"B::print"<<endl;
		}
};

class C:public A{
	public:
		virtual void print(){
			cout<<"C::print"<<endl;
		}
};

class D:public A{
	public:
		virtual void print(){
			cout<<"D::print"<<endl;
		}
};

int main()
{
	A a;B b;
	C c;D d;
	A*pa=&a;B*pb=&b;//由于是A的派生类 
	C*pc=&c;D*pd=&d;//这样做表明派生类可以赋值给基类然后输出。 
	pa->print();
	pa=pb;//所以可以赋值    派生类可以赋值给基类 
	pa->print();
	pa=pc; 
	pa->print();
	pa=pd;
	pa->print();
	cout<<endl<<endl;
	a=b;//派生类赋值给了基类怎么没办法赋值过来???
	a.print(); 
	b.print();
	c.print();
	d.print();
	return 0;
}
