#include<bits/stdc++.h>
using namespace std;/*
string operator^(const string& s1,const string& s){
	string a("efg");
	return (s+a);
}
int main()
{
	string s("abc"),b("k");

	cout<<(s^b)<<endl;
} */
class C {
	private:
		
	public:
		/*	void get_real(const double&real);
			void get_image(const double&image);*/
		double	real,image;
		C(double r_=0.0,double i_=0.0):real(r_),image(i_) {};
		C(const C&p) {
			real=p.real;
			image=p.image;
		}
		~C() {
		};
		void set(double &r_,double &i_){
			real=r_;image=i_;
		}
		C operator-(const C&c1);
		C add(const  C &c1,const C &c2);
		void print_f(){
			cout<<"real:"<<real<<"  image:"<<image<<endl;
		}
};

C C::operator-(const C&c1) {
	return C(real-c1.real,image-c1.image);
}

C operator+(const C&c1,const C&c2) {
	return C(c1.real+c2.real,c2.image+c1.image);
}



C C::add(const C&c1, const C&c2) {
	cout<<(c1.real+c2.real)<<" "<<c1.image+c2.image<<endl;
	return C((c1.real+c2.real),(c1.image+c2.image));
}

class D:public C{
	private:
		double real_image;
	public:
		void set(double r_,double i_,double real_image_){//不加&？？？ 
			C::set(r_,i_);
			real_image=real_image_;
		}
		void print_f(){
			C::print_f();
			cout<<"real_image:"<<real_image<<endl;
		}
};

int main() {
	C a(1,1),b(2,2);
	C d,n;
	d=a-b;
	cout<<d.real<<" "<<d.image<<endl;
	cout<<(a+b).real<<" "<<(b+a).image<<endl;
	cout<<endl;
	n=n.add(a,b);//返回值需要赋值不然不会像指针一样 
	cout<<n.real<<" "<<n.image<<endl;
	cout<<endl;
	D k;
	k.set(1.0,2.0,3.0);
	k.print_f();
	return 0;
}
