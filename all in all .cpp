#include <iostream>

using namespace std;

int main()
{
    string str1 , str2 ;
    while(cin>>str1>>str2)
    {
    int res = 0;
    for(int i=0;i<str2.length();i++)
        if(str2[i]==str1[res]) res++;

   if(res>=str1.length())
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

}
    return 0;
}
