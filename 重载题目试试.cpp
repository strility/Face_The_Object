#include<bits/stdc++.h>
using namespace std;
class Calculation{
	private:
		double a,b,c,d;
	public:
		double ans(double a,double b,double c,double d);//���� 
		~Calculation();//����  
		Calculation(double ad,double bd,double cd,double dd):a(ad),b(bd),c(cd),d(dd){};//���� 
		Calculation(const Calculation&p){//���ƹ��� 
			a=p.a;b=p.b;c=p.c;d=p.d;
		}
};

Calculation::~Calculation(){
	cout<<"delete"<<endl;
}

double Calculation::ans(double a,double b,double c,double d){
	return (b*c+d*c)/(a*c);
}

int main()
{
	Calculation z(2,1,2,1);
	cout<<z.ans(0.5,1,2,1)<<endl;
	return 0;
 } 
