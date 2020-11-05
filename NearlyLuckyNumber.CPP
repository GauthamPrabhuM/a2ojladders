#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
 
int main()
{
    
    long long int number;
    cin>>number;
    int flag=0;
    long long int temp;
    long long int count=0;
    //4 and 7
    temp=number;
   while(number!=0)
   {
   //    477
       temp=number%10;
       if(temp==4||temp==7)
       count++;
       else
       {flag=1;      
        break;
       }
      number/=10; 
       
   }
   if(count==4||count==7||count==47||count==74 && flag==0)
   cout<<"YES";
   else
   cout<<"NO"; 
    
    return 0;
    
}
    
    
    
    
