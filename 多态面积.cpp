#include<bits/stdc++.h>
using namespace std;
class Cshap {
	public://输入以后的几何图形都需要面积和输出 
		virtual double Area()=0;//纯虚函数
		virtual void printinfo()=0;
};

class Crectangle:public Cshap {
	public:
		int w,h;//构造函数、析构函数、由于是浅拷贝无需写复制构造 
		virtual double Area();
		virtual void printinfo();
};

class CCircle:public Cshap {
	public:
		int r;
		virtual double Area();
		virtual void printinfo();
};

class CTriangle:public Cshap {
	public:
		int a,b,c;
		virtual double Area();
		virtual void printinfo();
};

double Crectangle::Area() {
	return w*h;
}

double CCircle::Area() {
	return 3.14*r*r;
}

double CTriangle::Area() {
	double p=(a+b+c)/2.0;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}

void Crectangle::printinfo() {
	cout<<"rectangle:"<<Area()<<endl;
}

void CCircle::printinfo() {
	cout<<"CCircle"<<Area()<<endl;
}

void CTriangle::printinfo() {
	cout<<"CTriangle"<<Area()<<endl;
}

Cshap*pshapes[100];//基类指针   指向派生类，对派生类进行操作    //这一步很重要的说 
int MyCompare(const void *s1,const void *s2) {//排序规则 
	double a1,a2;//*s1是void型的指针   但是void*s1是Cshap型的 所以采用指针的指针   尽头是面积故使用double 
	Cshap**p1;//我们需要的是地址 
	Cshap**p2;
	p1=(Cshap**)s1;//再强制转换   s1、s2是pShapes数组中的元素，数组的类型是Cshap*的 
	p2=(Cshap**)s2;
	a1=(*p1)->Area();//调用对象 
	a2=(*p2)->Area();
	if(a1<a2) {
		return -1;
	} else if(a1>a2)
		return 1;
	else
		return 0;
}

int main() {
	int i,n;
	Crectangle*pr;//指针准备好 
	CCircle*pc;
	CTriangle*pt;
	cin>>n;
	for(i=0; i<n; ++i) {
		char c;
		cin>>c;
		switch(c) {
			case'R':
				pr=new Crectangle(); //有一个就分配一个 
				cin>>pr->w>>pr->h;
				pshapes[i]=pr;
				cout<<"enter next"<<endl;//然后把之前的面积赋值给Cshpe 
				break;
			case'C':
				pc=new CCircle();
				cin>>pc->r;
				pshapes[i]=pc;
				cout<<"enter next"<<endl;
				break;
			case'T':
				pt=new CTriangle();
				cin>>pt->a>>pt->b>>pt->c;
				pshapes[i]=pt;
				cout<<"enter next"<<endl;
				break;
		}
	}
	qsort(pshapes,n,sizeof(Cshap*),MyCompare);//对基类中的数据排序， 
	for(i=0; i<n; ++i)//前面按照顺序排好了，就剩下输出了 
		pshapes[i]->printinfo();
	return 0;
}
