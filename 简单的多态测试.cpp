#include<bits/stdc++.h>
using namespace std;
class A{//���� 
	public:
		virtual void print(){
			cout<<"A::print"<<endl;
		}
};

class B:public A{//B��A�������� 
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
	A*pa=&a;B*pb=&b;//������A�������� 
	C*pc=&c;D*pd=&d;//������������������Ը�ֵ������Ȼ������� 
	pa->print();
	pa=pb;//���Կ��Ը�ֵ    ��������Ը�ֵ������ 
	pa->print();
	pa=pc; 
	pa->print();
	pa=pd;
	pa->print();
	cout<<endl<<endl;
	a=b;//�����ำֵ���˻�����ôû�취��ֵ����???
	a.print(); 
	b.print();
	c.print();
	d.print();
	return 0;
}
