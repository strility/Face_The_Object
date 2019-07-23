#include<bits/stdc++.h>
using namespace std;
class A{
	public:
		int i;
		A():i(10){};
		virtual void f(){
			cout<<"A ::f() "<<i<<endl;
		}
};
class B:public A{
	public:
		int j;
		B():j(20){};
		virtual void f(){
			cout<<"B::f() "<<j<<endl;
		}
};
int main()
{
	A a;
	B b;
	A*p=&b;//取地址 
	p->f();
	a=b;//子类给父类   值传递  但是由于用的虚函数表，动态绑定点是不改变的，只有->才改变 
	a.f();cout<<endl;
	p->f();
	p=&a;
	p->f(); 
	cout<<endl<<endl;
	
	A*q=&a;
	int *r=(int*)&a;
	int *t=(int*)&b;//得到b的地址，就是于是输出了“B：：f（）”但是虚表里面没有j所以赎出来是乱码 
	*r=*t;
	q->f();
	
	return 0;
 } 
