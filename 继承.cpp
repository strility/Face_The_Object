#include<bits/stdc++.h>
using namespace std;
class Cstudent{
	private:
		string sname;//���� 
		string id;
		char gender;
		int age;
	public:
		void printf(){
			cout<<sname<<" "<<id<<"      "<<gender<<"        "<<age<<endl;
		};
		void steinfo(const string&name_,const string &id_,const char gender_,const int age_){//���캯�� 
			sname=name_;id=id_;gender=gender_;age=age_;
		}
		string gtename(){
			return sname;
		}		
};

class Cundergradualstudent:public Cstudent{//���� 
	private:
		string department;//����һ��˽�г�Ա 
	public:
		void qualitfieforbaoyan(){
			cout<<"canbaoyan"<<endl;//���˽�к��� 
		}
		void setinfo(const string&name_,const string&id_, char gender_,int age_,const string&department_){
			Cstudent::steinfo(name_,id_,gender_,age_);//ͬ�Ϻ��� 
			cout<<endl; 
			department=department_;
		}	
		void printf(){
			Cstudent::printf();//�̳л���ĺ��� 
			cout<<"department:"<<department<<endl;//ͬʱ����Լ��ĺ��� 
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
