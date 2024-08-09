#include <iostream>
#include <vector>
#include <string>
using namespace std;

string delvowel(string str)
{
    string ans = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'|| str[i] == 'y')
        {
            continue;
        }
        ans += str[i];
    }
    return ans;
}
string lowerstring(string str)
{
    string ans = "";
    for (int i = 0; i < str.length(); i++)
    {
        ans+=tolower(str[i]);
    }
    return ans;
}
string add_dot(string str){
    string ans="";
    for(int i=0;i<str.length();i++){
        ans+='.';
        ans+=str[i];
    }
    return ans;
}

int main(){
    string str;
    cin>>str;
    str=lowerstring(str);
    str=delvowel(str);
    str=add_dot(str);
    cout<<str<<endl;
    
    return 0;
}