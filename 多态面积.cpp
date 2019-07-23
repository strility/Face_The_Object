#include<bits/stdc++.h>
using namespace std;
class Cshap {
	public://�����Ժ�ļ���ͼ�ζ���Ҫ�������� 
		virtual double Area()=0;//���麯��
		virtual void printinfo()=0;
};

class Crectangle:public Cshap {
	public:
		int w,h;//���캯��������������������ǳ��������д���ƹ��� 
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

Cshap*pshapes[100];//����ָ��   ָ�������࣬����������в���    //��һ������Ҫ��˵ 
int MyCompare(const void *s1,const void *s2) {//������� 
	double a1,a2;//*s1��void�͵�ָ��   ����void*s1��Cshap�͵� ���Բ���ָ���ָ��   ��ͷ�������ʹ��double 
	Cshap**p1;//������Ҫ���ǵ�ַ 
	Cshap**p2;
	p1=(Cshap**)s1;//��ǿ��ת��   s1��s2��pShapes�����е�Ԫ�أ������������Cshap*�� 
	p2=(Cshap**)s2;
	a1=(*p1)->Area();//���ö��� 
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
	Crectangle*pr;//ָ��׼���� 
	CCircle*pc;
	CTriangle*pt;
	cin>>n;
	for(i=0; i<n; ++i) {
		char c;
		cin>>c;
		switch(c) {
			case'R':
				pr=new Crectangle(); //��һ���ͷ���һ�� 
				cin>>pr->w>>pr->h;
				pshapes[i]=pr;
				cout<<"enter next"<<endl;//Ȼ���֮ǰ�������ֵ��Cshpe 
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
	qsort(pshapes,n,sizeof(Cshap*),MyCompare);//�Ի����е��������� 
	for(i=0; i<n; ++i)//ǰ�水��˳���ź��ˣ���ʣ������� 
		pshapes[i]->printinfo();
	return 0;
}
