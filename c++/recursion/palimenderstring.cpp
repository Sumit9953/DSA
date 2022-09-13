#include<iostream>
using namespace std;

bool palimender(string str,int s,int e){
     if(s==e){
        return true;
     }
     if(s>e){
      return true;
     }
     if(str[0]!=str[e]){
        return false;
     }

     return palimender(str,s+1,e-1);
}

int main(){
    string str = "aaba";
    int s =0,e=4;
    cout<<palimender(str,s,e)<<endl;
}