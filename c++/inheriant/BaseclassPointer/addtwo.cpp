#include<iostream>
using namespace std;
class Addition{
    int x,y;
    public:
    void input(){
        cout<<"Enter two input:";
        cin>>x>>y;
    }
void  Add(){
    cout<<"Result "<<x+y;
}
};
int main(){
    Addition A;
    A.input();
    A.Add();
}
