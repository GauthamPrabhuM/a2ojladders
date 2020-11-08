#include <iostream>
using namespace std;
 
int main()
{
    int a[10][10];
    int number;
    for (int i = 0; i <4; i++)
        for (int j = 0; j <4; j++)
            a[i][j] = 0;
 
    for (int i = 0; i <4; i++)
        for (int j = 0; j <4; j++)
        {
            cin >> l;
            a[i][j] += l;
            a[i + 1][j] += l;
            a[i - 1][j] += l;
            a[i][j + 1] += l;
            a[i][j - 1] += l;
        }
 
    for (int i = 0; i <4; i++)
    {
        for (int j = 0; j <4; j++)
            cout << (a[i][j] % 2 == 1 ? "0" : "1");
        cout << endl;
    }
    return 0;
}
