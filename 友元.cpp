#include<bits/stdc++.h>
using namespace std;
class Ccar;
class Cdriver{
	public:
		void modeifyCar(Ccar*pCar);//一个类   
};
class Ccar{
	private:
		int price;
		friend int 	mostExpensiveCar(Ccar cars[],int total);
		friend void Cdriver::modeifyCar(Ccar*pCar);
};
void Cdriver::modeifyCar(Ccar*pCar){
	pCar->price+=1000;//通过友元访问了别人私有的价钱 
}//						和遍历 
int mostExpensiveCar(Ccar cars[],int total){
	int tempMax=-1;
	for(int i=0;i<total;++i){
		if(cars[i].price>tempMax)
			tempMax=cars[i].price;
	}
	return tempMax;
}
int main()
{
	Cdriver a;
	a.modeifyCar();
	return 0;
 } 
