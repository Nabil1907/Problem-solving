#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{  string str;
   cin>>str;
   char c;

   int len = str.length() , sum = 0;
   for(int i =0 ; i <str.length() ; ++i)
   {
       if(isupper(str[i]))
        sum++;
   }
   if(sum==len)
   {
    for(int i =0; i <str.length() ; ++i)
      {  c = str[i];
         cout<<char(tolower(c));
      }
   }
 else

    if(sum==(len-1)&&islower(str[0]))
 {    c = str[0];
           cout<<char(toupper(c));
         for(int i =1; i <str.length() ; ++i)
      {  c = str[i];
         cout<<char(tolower(c));
      }
 }
   else
    cout<<str;

    return 0;
}
