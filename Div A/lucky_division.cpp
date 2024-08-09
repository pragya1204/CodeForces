#include<bits/stdc++.h>
using namespace std;

void lucky_num(int num, vector<int> &arr){
    if(num>1000) return;
    if(num<1000 && num!=0){
        arr.push_back(num);
    }
    lucky_num(num*10 +4, arr);
    lucky_num(num*10+7, arr);
}

string lucky_or_not(int n){
    if(n%4==0 || n%7==0) return "YES";
    else {
        vector<int> arr;
        lucky_num(0, arr);
        for(int i=0;i<arr.size();i++){
            if(n%arr[i]==0){
                return "YES";
            }
        }
    }
    return "NO";
}

int main(){
    int n;
    cin>>n;
    cout<<lucky_or_not(n)<<endl;



    return 0;
}
