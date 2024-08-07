#include<iostream>
using namespace std;
void check(int w){
    if(w==1 || w==2){
        cout<<"NO"<<endl;
    }
    else if(w%2==0){
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
    check(w);
    return 0;
}