#include<bits/stdc++.h>
using namespace std;/* 
int main()
{
	int n=4,a=1;
	int &r=n;//初始化以后，无法引用其他变量 且只能引用变量不能引用常量表达式 
	cout<<r<<endl;
	int &r2=r;
	cout<<r2<<endl;
	r2=a;//r2没有引用a   只是单纯赋值了而已 
	cout<<r<<endl;
	return 0;
 } */    
int swap_(int &i,int &j){//使用两个参数进行引用   引用是没办法改变的 类似const 
  	int t;//进入以后，由于是无法改变，所以可以进行交换 
  	t=i;i=j;j=t;
  }
 int main()
 {
 	int i,j;
 	cin>>i>>j;
 	swap_(i,j);
 	cout<<i<<" "<<j<<endl; 
 	return 0;
  }  
  
/*
int n=4;
int &setvalue(){ 
	return n;//引用一个函数的返回值 
}
int main()
{
	setvalue()=40;//对一个函数的返回值进行赋值 
	setvalue()=42;
	cout<<n<<endl;;//对一个函数的返回值赋值以后无论其他怎么改变都不会改变 
	return 0;
} */
