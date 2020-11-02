#include<iostream>
using namespace std;
 
int main()
{
    int n;
    std::cin>>n;
  
    int sumx=0;
    int sumy=0;
    int sumz=0;
    for(int i=0; i<n; i++)
    {
        int x1;
        int y1;
        int z1;
        std::cin>>x1>>y1>>z1;
        sumx+=x1;
        sumy+=y1;
        sumz+=z1;
        
    }
    
    if(sumx==0 && sumy==0 && sumz==0)
    std::cout<<"YES";
    else
    std::cout<<"NO";
    
}