#include<bits/stdc++.h>
using namespace std;
class c{
	public:
		double	real,imag;
	c(const c&p){
		real=p.real;//���ƹ��캯�� 
		imag=p.imag;
	} 
	c(double r=0.0,double i=0.0):real(r),imag(i){} //���캯�� 
	c operator-(const c&d);//�������غ��� 
};

c operator+(const c&a,const c &b){//�������ã��ٶȼӿ�  �������� 
	return 	c(a.real+b.real,a.imag+b.imag);
	//����һ������ 
}
//���ֻ�����������ʱ�����������ǲ���ģ�������ݶ��˻����ܾͲ�̫�ʺ���  
c c::operator-(const c&d){//    �����real��a��real��ֵd.real��ֵ��b��ֵ     
	return c(real-d.real,imag-d.imag);//ֱ�Ӷ�d�е�a b�������в�����ÿ�δ��붼����һ����һ��������� 
}
int main()
{
	c k;
	c a(4,4),b(3,3),d;
	d=a-b;
	cout<<d.real<<" "<<d.imag<<endl;
	cout<<(a+b).real<<" "<<(a+b).imag<<endl;
	return 0;
 } 
