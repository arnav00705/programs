#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
int n, temp, sum=0,r;
cin>>n;
temp=n;
while(n!=0)
{
    r=n%10;
    sum=sum+r*r*r;
    n=n/10;
}
if(temp==sum)
cout<<"palindrome";
else
cout<<"not palindrome";
return 0;
}
