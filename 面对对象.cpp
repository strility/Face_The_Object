#include<bits/stdc++.h>//���Ա�ķ�Χ  private ��˽�г�Ա    public�����е�   protect�������� 
using namespace std;
class crectangle
	{
		public:
			int w,h;//�������� 
			int area(){//����Ҫ������   Ҳ���Ǻ��� 
				return w*h;//Ҳ���԰�Ҫ�����·��������棬Ȼ���Ҫд�ĺ����ų�ȥд 
			} //��ʽΪ  int crectangle����area����{   return w*h��} 
			int perimeter(){//Ҳ����ǰ�����һ������ 
				return 2*(w+h);
			}
		void init(int a,int b){//���ó�Ա���� 
			w=a;h=b;
		}	
	};
int main()
{
	int w,h;
	crectangle r;//����typedef struct 
	cin>>w>>h;
	r.init(w,h);
	cout<<r.area()<<endl<<r.perimeter()<<endl;
	return 0;
 } 
