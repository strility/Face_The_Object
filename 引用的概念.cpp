#include<bits/stdc++.h>
using namespace std;/* 
int main()
{
	int n=4,a=1;
	int &r=n;//��ʼ���Ժ��޷������������� ��ֻ�����ñ����������ó������ʽ 
	cout<<r<<endl;
	int &r2=r;
	cout<<r2<<endl;
	r2=a;//r2û������a   ֻ�ǵ�����ֵ�˶��� 
	cout<<r<<endl;
	return 0;
 } */    
int swap_(int &i,int &j){//ʹ������������������   ������û�취�ı�� ����const 
  	int t;//�����Ժ��������޷��ı䣬���Կ��Խ��н��� 
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
	return n;//����һ�������ķ���ֵ 
}
int main()
{
	setvalue()=40;//��һ�������ķ���ֵ���и�ֵ 
	setvalue()=42;
	cout<<n<<endl;;//��һ�������ķ���ֵ��ֵ�Ժ�����������ô�ı䶼����ı� 
	return 0;
} */
