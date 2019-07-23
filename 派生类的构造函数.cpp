#include<bits/stdc++.h>
using namespace std;
class bug{//昆虫 
	private:
		//派生类是无法访问的私有成员的 
	protected:
		int nlegs,ncolor;
	public:
		int type;
		bug(int legs,int color):nlegs(legs),ncolor(color){};
		void printf(){
			cout<<nlegs<<" "<<ncolor<<" "<<endl;
		}
};

class flybug:public bug{//继承 
	int nwings;
	public:
		flybug(int legs,int color,int wings):bug(legs,color){
			nwings=wings;//派生构造 把已有的直接用上面的替代，没有的声明一下 
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
