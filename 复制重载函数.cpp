#include<bits/stdc++.h>
using namespace std;
class c{
	public:
		double	real,imag;
	c(const c&p){
		real=p.real;//复制构造函数 
		imag=p.imag;
	} 
	c(double r=0.0,double i=0.0):real(r),imag(i){} //构造函数 
	c operator-(const c&d);//复制重载函数 
};

c operator+(const c&a,const c &b){//传入引用，速度加快  属于重载 
	return 	c(a.real+b.real,a.imag+b.imag);
	//返回一个对象 
}
//如果只有两个运算的时候，这样做还是不错的，如果数据多了话可能就不太适合了  
c c::operator-(const c&d){//    这里的real是a的real的值d.real的值是b的值     
	return c(real-d.real,imag-d.imag);//直接对d中的a b函数进行操作，每次传入都比上一个少一个传入的类 
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
