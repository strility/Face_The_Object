#include<bits/stdc++.h>
using namespace std;
class base{
	public://���� 
		virtual void somefunction(){//��̬ʹ�õ��麯��  
			cout<<"are you "<<endl; 
		} 
		virtual void add(){
			cout<<"add"<<endl;
		}
};

class derived:public base{//���� 
	public:
		virtual void somefunction(){
			cout<<"ok"<<endl;
		}
};

int main()
{
	derived k;//���� 
	base*p=&k;
	p->somefunction();
	base:k. somefunction();
	k.add();//���Ե��û���       //��������⣬��������ε�����ͬ�Ļ��ຯ�� 
	base z;
	z.somefunction();
	return 0;
 } 
