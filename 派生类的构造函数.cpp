#include<bits/stdc++.h>
using namespace std;
class bug{//���� 
	private:
		//���������޷����ʵ�˽�г�Ա�� 
	protected:
		int nlegs,ncolor;
	public:
		int type;
		bug(int legs,int color):nlegs(legs),ncolor(color){};
		void printf(){
			cout<<nlegs<<" "<<ncolor<<" "<<endl;
		}
};

class flybug:public bug{//�̳� 
	int nwings;
	public:
		flybug(int legs,int color,int wings):bug(legs,color){
			nwings=wings;//�������� �����е�ֱ��������������û�е�����һ�� 
		};
		void printf(){
			cout<<nlegs<<" "<<ncolor<<" "<<nwings<<" "<<endl;
		}
}; 

int main()
{
	flybug f(2,3,4);
	f.printf();
	bug c(1,50);
	c.printf();
	//f.type=1;
	return 0;
}
