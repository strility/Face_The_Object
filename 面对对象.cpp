#include<bits/stdc++.h>//类成员的范围  private ：私有成员    public：共有的   protect：保护的 
using namespace std;
class crectangle
	{
		public:
			int w,h;//公共数据 
			int area(){//对象要做的事   也就是函数 
				return w*h;//也可以把要做的事放在类里面，然后把要写的函数放出去写 
			} //格式为  int crectangle：：area（）{   return w*h；} 
			int perimeter(){//也就是前面多了一个：： 
				return 2*(w+h);
			}
		void init(int a,int b){//调用成员函数 
			w=a;h=b;
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
