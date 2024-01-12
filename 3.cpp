#include<iostream>
#include<stdio.h>
#include<conio.h>
#define pi 3.14
class fn{
	public:
		void area(int);
		void area(int,int);
		void area(float,int,int);
};
void fn::area(int a,int b){
	cout<<"arear of circle:"<<pi*a*a;
}
void fn::area(int a,int b){
	cout<<"area of rectangle:"<<t*a*b;
	}
void main(){
	int ch;
	int a,b,r;
	clrscr();
	fn obl;
	cout<<"\n\t\tfunction overloading:;
	cout<<"\n1.area of circle\n2.area of rectangle\n3.exit\n";
	cout<<"enter your choice
