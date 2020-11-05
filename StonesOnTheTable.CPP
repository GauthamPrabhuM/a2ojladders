#include<iostream>
using namespace std;
int main()
{
	int n,i,j,sum=0;
	char s[100];
	cin >> n >> s;
	for (j=0,i = 1;i < n;i++,j++)
	{
		if (s[i] == s[j])/ / Check if the two adjacent characters are the same
		{
			sum++;
		}
	}
	cout<<sum;
}
