#include<bits/stdc++.h>
using namespace std;
class String{
	private:
		char*str;int i=0;
	public:
		String():str(new char[1]){str[0]=0;}//���캯�� 
		const char *st_r(){ return str;};// 
		String&operator=(const char *s); //���غ��� 
		~String(){delete []str;}//�����delete�ӡ��� 
};
String&String::operator=(const char*s){
/*	if(this==&s)
		return *this; */  //���һ����char  �Ǿ�һ��char  ����һ�� 
	delete []str;
	str=new char [strlen(s)+1]; 
	strcpy(str,s);
	return *this;//this ָ����str 
} 
int main()
{
	String s;
	s="opp  you ";
	cout<<s.st_r()<<endl;
/*	String s2="uuu";
	cout<<s2.st_r()<<endl;  */  //�����ʱ������ģ���Ϊs2��ֱ�Ӷ���  ������û��ֱ�Ӷ�������غ��� 
 } 
