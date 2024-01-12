#include<iostream>
using namespace std;
class TestClass{
	private:
		int real,over;
	public:
		TestClass(int r1=0,int ov=0){
				real=r1;
				over=ov;
				}
				TestClass operator+(TestClass const &obj){
				TestClass result;
				result.real=real+obj.real;
				result.over=over+obj.over;
				return result;
				}
				void print(){
				cout<<real<<"+i"<<over<<endl;
				}
				};
				int main()
				{
				 TestClass c1(9,5),c2(4,6);
				 TestClass c3=c1+c2;
				 c3.print();
				 }
