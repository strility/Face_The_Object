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
	A*p=&b;//ȡ��ַ 
	p->f();
	a=b;//���������   ֵ����  ���������õ��麯������̬�󶨵��ǲ��ı�ģ�ֻ��->�Ÿı� 
	a.f();cout<<endl;
	p->f();
	p=&a;
	p->f(); 
	cout<<endl<<endl;
	
	A*q=&a;
	int *r=(int*)&a;
	int *t=(int*)&b;//�õ�b�ĵ�ַ��������������ˡ�B����f�����������������û��j��������������� 
	*r=*t;
	q->f();
	
	return 0;
 } 
