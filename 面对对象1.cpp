#include<bits/stdc++.h>//���Ա�ķ�Χ  private ��˽�г�Ա    public�����е�   protected�������� 
using namespace std;//����Լ���ʼ����Ҳ�����Լ�������  crectangle����init��int a��int b){ w=a;h=b};
class crectangle//һ��ϵͳ������ʼ�������� ����Լ���ʼ�� 
	{
		public:
			int w,h;//�������� 
			int area(){//����Ҫ������   Ҳ���Ǻ��� 
				return w*h;//Ҳ���԰�Ҫ�����·��������棬Ȼ���Ҫд�ĺ����ų�ȥд 
			} //��ʽΪ  int crectangle����area����{   return w*h��} 
			int perimeter(){//Ҳ����ǰ�����һ������ 
				return 2*(w+h);
			}
		void init(int a,int b){ 
			w=a;h=b;// ���캯�� 
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
