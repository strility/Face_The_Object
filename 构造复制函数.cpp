#include<bits/stdc++.h>
using namespace std;//�д�̽�֣�   ������ 
class Complex{//���ƹ��캯������ʹ�����ʱ����õ� //�����ϻ�����ǳ�������� ���������Լ�дһ������������������ִ���ĸ��ʾͽ����� 
	public:										//һ����˵ǳ�����Ѿ��ܺܺù����ˣ�һ�����ֶ�̬�ĳ�Ա�����д�����������Ȼ������ʱ�������� 
		double real,image;
		Complex(int i){
			cout<<"intconstruct call "<<endl;
			real=i;image=0;
		}
		Complex(double r,double i):real(r),image(i){
		//	real=r;image=i; //���캯�� 
		};
};
int main()
{
	Complex c1(12);
	Complex a(1,3);
	//����Ļ�ֱ�ӵ��õ�complexȻ�󹹽�һ���� 
	//cin>>c1.image>>c1.real;
	cout<<a.real<<" "<<c1.real<<endl;
	return 0;
}//
