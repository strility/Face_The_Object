#include<bits/stdc++.h>
using namespace std;
class String{
	private:
		char*str;int i=0;
	public:
		String():str(new char[1]){str[0]=0;}//构造函数 
		const char *st_r(){ return str;};// 
		String&operator=(const char *s); //重载函数 
		~String(){delete []str;}//数组的delete加【】 
};
String&String::operator=(const char*s){
/*	if(this==&s)
		return *this; */  //如果一边是char  那就一起char  保持一致 
	delete []str;
	str=new char [strlen(s)+1]; 
	strcpy(str,s);
	return *this;//this 指的是str 
} 
int main()
{
	String s;
	s="opp  you ";
	cout<<s.st_r()<<endl;
/*	String s2="uuu";
	cout<<s2.st_r()<<endl;  */  //输出的时候会出错的，因为s2是直接定义  而我们没做直接定义的重载函数 
 } 
