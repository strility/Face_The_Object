#include<bits/stdc++.h>
using namespace std;
template <class T1,class T2>//��ģ�� 
class Pair
{
	public: 
	T1 key;T2 value;
	Pair(T1 k,T2 v):key(k),value(v){};
	bool operator <(const Pair<T1,T2>&p)const; //���� 
};
template<class T1,class T2>
bool Pair<T1,T2>::operator<(const Pair<T1,T2>&p)const{
	return key<p.key;
}
int main()
{
	Pair<string,int>stu("tom",100);//����� 
	cout<<stu.key<<" "<<stu.value<<endl;
	return 0;
}
