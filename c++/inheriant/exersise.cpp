#include<iostream>
using namespace std;
class employe{
    int eid;
    string name;
    public:
    employe (int e,string n){
        eid = e;
        name =n;
    }
    int getemployeID(){return eid;}
    string getName(){return name;}
};
class FulltimeEmploye:public employe{
    int salary;
    public:
    FulltimeEmploye(int e,string n,int sal):employe(e,n){
        salary=sal;
    }
    int getsalary(){return salary;}
};
class parttimeEmploye:public employe{
    int wage;
    public:
    parttimeEmploye(int e,string n,int w):employe(e,n){
        wage=w;
    }
    int getwage( ){return wage;}
};
int main(){
    parttimeEmploye p1(1,"sumit",300);
    FulltimeEmploye p2(2,"psis",5000);
    cout<<"salary of "<<p1.getName()<<" is "<<p1.getwage()<<endl;
    cout<<"salary of "<<p2.getName()<<" is "<<p2.getsalary()<<endl;

}