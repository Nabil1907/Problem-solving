#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int L ;

    while(cin>>L,L!=0)
    {
     string str ;
     int min_pos=L ,pos_R =-L,pos_D=-L;
     cin>>str;
     for(int i=0;i<L;i++)
     {
         if(str[i]=='Z')
         {
          min_pos = 0;
                break;
         }
       else   if(str[i]=='R')
         {

             min_pos=min(min_pos,i-pos_D);
             pos_R= i ;
         }
       else    if(str[i]=='D')
         {

             min_pos=min(min_pos,i-pos_R);
             pos_D= i ;

         }

     }
     cout<<min_pos<<endl;


    }
    return 0;
}
