#include<bits/stdc++.h>
using namespace std;
class A{
	public:
		int i;
		A():i(10){
		};
};

class B:public A{
	private:
		int c;
	public:
		B():c(2){
		};
	/*	B(int c_){
			c=c_;
		}*/
	public:
		void f(){
			cout<<c<<endl; 
		}
};
int main()
{
	A a;
	B b;
	cout<<a.i<<endl;
	cout<<b.i<<endl;//֤��b����ֱ��ʹ��   ���Ǹ���a��b��ǰ�벿������ͬ�ģ�b�����Ǽ���ȥ�� 
	cout<<endl;
	cout<<sizeof(A)<<" "<<sizeof(B)<<" "<<endl<<endl;;
	int *p=(int*)&a;
	*p=20;
	cout<<p<<" "<<*p<<endl<<endl;
	p=(int*)&b;
	cout<<p<<" "<<*p<<endl<<endl;
	p++;
	*p=50;
	b.f();
	return 0;
}
