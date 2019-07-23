#include<bits/stdc++.h>
using namespace std;
class Cstudent{
	private:
		string sname;//基类 
		string id;
		char gender;
		int age;
	public:
		void printf(){
			cout<<sname<<" "<<id<<"      "<<gender<<"        "<<age<<endl;
		};
		void steinfo(const string&name_,const string &id_,const char gender_,const int age_){//构造函数 
			sname=name_;id=id_;gender=gender_;age=age_;
		}
		string gtename(){
			return sname;
		}		
};

class Cundergradualstudent:public Cstudent{//子类 
	private:
		string department;//多了一个私有成员 
	public:
		void qualitfieforbaoyan(){
			cout<<"canbaoyan"<<endl;//多的私有函数 
		}
		void setinfo(const string&name_,const string&id_, char gender_,int age_,const string&department_){
			Cstudent::steinfo(name_,id_,gender_,age_);//同上函数 
			cout<<endl; 
			department=department_;
		}	
		void printf(){
			Cstudent::printf();//继承基类的函数 
			cout<<"department:"<<department<<endl;//同时输出自己的函数 
		}
		
};

int main()
{
	Cundergradualstudent s2;
	s2.setinfo("harry potter","118215360",'m',1,"compute science");
	s2.gtename();
	s2.qualitfieforbaoyan();
	s2.printf();
	return 0;
 } 
