#include <iostream>
#include <vector>
#include <string>
using namespace std;

string lowerstring(string str)
{
    string ans = "";
    for (int i = 0; i < str.length(); i++)
    {
        ans+=tolower(str[i]);
    }
    return ans;
}
int main(){
    string str1;
    string str2;
    cin>>str1;
    cin>>str2;
    str1=lowerstring(str1);
    str2=lowerstring(str2);
    for(int i=0;i<str1.length();i++){
        if(str1[i]!=str2[i]){
            if(str1[i]-'a' < str2[i]-'a'){
                cout<<-1<<endl;
                break;
            }
            else{
                cout<<1<<endl;
                break;
            }
        }
    }
    if(str1==str2) cout<<0<<endl;



    return 0;
}