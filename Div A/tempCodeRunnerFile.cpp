#include<iostream>
using namespace std;
void check(int w){
    if(w%2==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return;
}

int main(){
    int w;
    cin>>w;
    cout<<check(w);
    return 0;
}