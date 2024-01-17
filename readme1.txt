//operator overinging using c++

#include<iostream>
using namespace std;
class operatorOverload{
        private:
                int x;
        public:
                operatorOverload():x(10){}
                void operator ++(){
                        x=x+2;
                }
                void print(){
                        cout<<"the count is:"<<x;
                }

};
int main(){
        operatorOverload ov;
        ++ov;
        ov.print();
        return 0;
}

