#include<bits/stdc++.h>
using namespace std;
class base{
	public://基类 
		virtual void somefunction(){//多态使用的虚函数  
			cout<<"are you "<<endl; 
		} 
		virtual void add(){
			cout<<"add"<<endl;
		}
};

class derived:public base{//子类 
	public:
		virtual void somefunction(){
			cout<<"ok"<<endl;
		}
};

int main()
{
	derived k;//子类 
	base*p=&k;
	p->somefunction();
	base:k. somefunction();
	k.add();//可以调用基类       //待解决问题，派生类如何调用相同的基类函数 
	base z;
	z.somefunction();
	return 0;
 } 
