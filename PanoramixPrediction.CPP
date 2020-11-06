#include <iostream>
using namespace std;
int a, b,flag=0;
int A[16] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
int main()
{
    cin >> a >> b;
    for (int i = 0; i < 15; i++) 
    {
        if (a == A[i] && b == A[i + 1]) 
        {
            flag++;
            break;
        }
    }
    if (flag == 0) 
        cout << "NO";
     else 
        cout << "YES";
    
