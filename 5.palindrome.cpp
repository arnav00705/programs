#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
int i, o, rev=0;
cin>>i;
o=i;

while(i>0)
{
    rev=(rev*10)+(i%10);
    i=i/10;
}
if(rev==o)
cout<<"palindrome";
else
cout<<"np";

return 0;
}
