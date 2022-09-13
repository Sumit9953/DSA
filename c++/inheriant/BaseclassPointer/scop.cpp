#include<iostream>
using namespace std;
class rectangular{
    int lenght;
    int breadth;
    public:
    rectangular area(int l,int b){
        return lenght*breadth;
    }
    int perimeter();
};
int rectangular::perimeter(){
    return 2*(lenght+breadth);
}
int main(){
    rectangular r(10,5);
    cout<<r.area();
    cout<<r.perimeter();
}