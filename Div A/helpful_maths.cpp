#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    vector<int> arr;
    for(int i=0;i<str.length();i++){
        if(str[i]=='+') continue;
        arr.push_back(str[i]);
    }
    sort(arr.begin(),arr.end());
    string ans="";
    for(int i=0;i<arr.size();i++){
        if(i==arr.size()-1){
            ans+=arr[i];
            break;
        }
        ans+=arr[i];
        ans+='+';
    }
    cout<<ans<<endl;


    return 0;

}