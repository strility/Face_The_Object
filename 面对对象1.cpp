#include<bits/stdc++.h>//类成员的范围  private ：私有成员    public：共有的   protected：保护的 
using namespace std;//最好自己初始化，也就是自己在外面  crectangle：：init（int a，int b){ w=a;h=b};
class crectangle//一般系统会帮你初始化，但是 最好自己初始化 
	{
		public:
			int w,h;//公共数据 
			int area(){//对象要做的事   也就是函数 
				return w*h;//也可以把要做的事放在类里面，然后把要写的函数放出去写 
			} //格式为  int crectangle：：area（）{   return w*h；} 
			int perimeter(){//也就是前面多了一个：： 
				return 2*(w+h);
			}
		void init(int a,int b){ 
			w=a;h=b;// 构造函数 
		}	
	};
int main()
{
	int w,h;
	crectangle r;//类似typedef struct 
	cin>>w>>h;
	r.init(w,h);
	cout<<r.area()<<endl<<r.perimeter()<<endl;
	return 0;
 } 
