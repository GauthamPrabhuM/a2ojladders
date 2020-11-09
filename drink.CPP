#include <iostream>
using namespace std;
double a, b, j, p;
int main()
{
    cin >> a;
    for (int i = 0; i < a; i++) 
    {
        cin >> b;
        j += b;
    }
    p = j / a;
    cout << p;
}
