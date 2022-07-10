# include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
 int a1,b1;
 int a2,b2;
 cin>>a1>>b1;
 cin>>a2>>b2;
 int dis=0;
 dis=pow(pow(a2-a1,2)+pow(b2-b1,2),0.5);
 cout<<a2-a1<<" "<<b2-b1;
 cout<<endl;
 cout<<dis;
return 0;}
