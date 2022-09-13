#include<iostream>
using namespace std;
class base{
    public:
    void fun1(){
        cout<<"fun1  of base";
    }
};
class dravied:public base{
    public:
    void fun2(){
        cout<<"fun2 of dravied";
    }
};
int main(){
    dravied d;
    d.fun1();
    d.fun2();
}