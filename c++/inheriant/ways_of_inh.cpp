#include<iostream>
using namespace std;
class parent{
    int a;
    protected: int b;
    public: int c;
    void funparent(){
    a=10;
    b=5;
    c=15;
    }
};
class child:protected parent{
    public:
    void funchild(){
       // a=10;
        b=5;
        c=15;
    }
};
class grandchild:public child{
    public:
    void fungrandchild(){
       // a=10;
        b=5;
        c=15;
    }
};
int main(){
    child c;
   // c.a=10;
    //c.b=5;
    //c.c=20;
}