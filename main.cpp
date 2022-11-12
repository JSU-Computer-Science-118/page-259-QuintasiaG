// Quintasia Gordon J00967930 10-11-2022 DONE

#include<iostream>
#include<cmath>
using namespace std;

int main(){
	float a,b,c;
	cout<<"Enter coefficient of x*x: ";
	cin>>a;
	cout<<"Enter coefficient of x: ";
	cin>>b;
	cout<<"Enter the constant term: ";
	cin>>c;
	float dis;
	dis=(b*b-4*a*c);//calculating the discriminant 
	if(dis<0){
		cout<<"The equation has two complex roots"<<endl;
	}else if(dis==0){
		cout<<"The equation has a single (repeated) root"<<endl;
		float x1,x2;
		x1=(-b + sqrt(dis))/(2*a);//calculating the repeated root
		x2=x1;
		cout<<"Root is "<<x1<<endl;
	}else{
		cout<<"The equation has two real roots"<<endl;
		float x1,x2;
		x1=(-b + sqrt(dis))/(2*a);//calculating the two real roots
		x2=(-b - sqrt(dis))/(2*a);
		cout<<"Roots are "<<x1<<" and "<<x2<<endl;
	}
	return 0;
}
