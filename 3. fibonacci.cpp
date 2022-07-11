#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, a=0, b=1, c;
    cout<<"enter nubers of terms ";
    cin>>n;
    cout<<" "<<endl;
    for (i=a; i<=n; i++)
    {
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}
