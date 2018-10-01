#include <iostream>

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int a , b , sum , even=0 ,odd=0 ;
   cin>>a>>b;
   sum = a+b;
   if ((a!=0&&b!=0)&&abs(a-b)<=1)
    cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;
    return 0;
}
