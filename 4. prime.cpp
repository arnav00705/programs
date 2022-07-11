#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
int i , count=0, j ;
cin>>i;
j=i;
while(j<=i)
{
    if(i%j==0)
        count++;
    j++;    
}
if(count==2)
    cout<<"prime";
else
    cout<<"not prime";
return 0;
}
