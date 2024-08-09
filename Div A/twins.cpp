#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
    }


    return 0;
}