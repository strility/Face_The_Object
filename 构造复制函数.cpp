#include<bits/stdc++.h>
using namespace std;//有待探讨，   理论上 
class Complex{//复制构造函数是在使用类的时候才用的 //理论上会生成浅拷贝函数 不过建议自己写一个深拷贝函数，这样出现错误的概率就降低了 
	public:										//一般来说浅拷贝已经能很好工作了，一旦出现动态的成员，最好写深拷贝函数，不然析构的时候会出问题 
		double real,image;
		Complex(int i){
			cout<<"intconstruct call "<<endl;
			real=i;image=0;
		}
		Complex(double r,double i):real(r),image(i){
		//	real=r;image=i; //构造函数 
		};
};
int main()
{
	Complex c1(12);
	Complex a(1,3);
	//这里的会直接调用到complex然后构建一个类 
	//cin>>c1.image>>c1.real;
	cout<<a.real<<" "<<c1.real<<endl;
	return 0;
}//
