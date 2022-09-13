#include<iostream>
using namespace std;
class Rectangle{
    int lenght,breadth;
    public:
    Rectangle(int l,int b);
    
    int area( ){
        
        return lenght*breadth;
    }
    int perimeter();
};
int Rectangle::perimeter(){
    return 2*(lenght+breadth);
}
int main(){
    Rectangle r(10,5);
    cout<<r.area()<<endl;
    cout<<r.perimeter();
}