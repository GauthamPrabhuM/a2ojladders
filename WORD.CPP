 
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e2 +10;
string s;
int main()
{
    cin >> s;
    int num1 = 0, num2 = 0;
    for(int i = 0; i < s.size(); ++i)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
            num1++;
        else if(s[i] <= 'Z' && s[i] >= 'A')
            num2++;
    }
    if(num1 >= num2)
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    else
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s << endl;
    return 0;
}
