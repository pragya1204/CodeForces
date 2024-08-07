#include <iostream>
#include <vector>
#include <string>

using namespace std;
string helper(string temp)
{
    if (temp.length() <= 10)
        return temp;
    else
    {
        int n = temp.length();
        string newtemp = "";
        newtemp += temp[0];
        newtemp += to_string(n - 2);
        newtemp += temp[n - 1];
        return newtemp;
    }
}

int main()
{
    int i;
    cin >> i;
    string arr[i];
    for (int a = 0; a < i; a++)
    {
        cin >> arr[a];
    }
    for (int a = 0; a < i; a++)
    {
        cout << helper(arr[a]) << endl;
    }
    return 0;
}