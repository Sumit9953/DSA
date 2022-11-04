#include<iostream>
#include<vector>
using namespace std;

int main(){
    char temp = cin.get();
    vector<char> st;
    
    while (temp != '\n')
    {
        st.push_back(temp);
        temp = cin.get();
    }
    for(auto x: st){
    cout<<x<<" ";
    }
}