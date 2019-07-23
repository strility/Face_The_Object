#include<iostream>
#include<stdexcept> 
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	try{
		cout<<"emter "<<endl;
			if(n==0)
			throw runtime_error("yes"); 
	}
	catch(...){
		cout<<"error"<<endl;
	} 
	return 0;
}
