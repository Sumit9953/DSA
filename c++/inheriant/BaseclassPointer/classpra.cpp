#include<iostream>
using namespace std;
class Employe{
    int age;
    string name;
    public:
    void setdata(int a,string n){
        age=a;
        name=n;
    }
    int display( ){
        cout<<"Employe age is "<<age<<endl;
        cout<<"Employe name is "<<name;
    }

};
int main(){
    Employe e1;
    e1.setdata(20,"sumit");
    e1.display();
}