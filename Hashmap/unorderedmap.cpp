#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main(){
unordered_map <string,int> ourmap;
//insert
pair<string,int> p("abc",1);
ourmap.insert(p);
ourmap["def"] = 2;
//FIND
cout<<ourmap["def"]<<endl;
cout<<ourmap.at("abc")<<endl;
cout<<"size "<<ourmap.size()<<endl;
// cout<<ourmap.at("ghi")<<endl;
cout<<ourmap["ghi"]<<endl;
cout<<"size "<<ourmap.size()<<endl;
//erase
ourmap.erase("ghi");
cout<<"size "<<ourmap.size()<<endl;
}
