#include <iostream>
#include<string.h>
#include <cmath>
using namespace std;
static char arr[10000];
int main()
{   int num_text ;
    cin>>num_text;
    for(int i =0 ; i <num_text ;i++)
    {
    int n, y;
    float x ;
    gets(arr);
    for(int j=0;j<10000;j++)
    {
        if(arr[j]=='\0'&&arr[j]!=' ')
           break;
        else
            n++;
    }
    cout << n;
    x = sqrt((double)n);
    y=x;
    if(y!=x)
       cout<<"INVALID";
  /*  else
        {
         char matrix[y][y] ;
         int  counter=0;
         for(int r =0 ; r<y ; r++)
         {
             for(int c =0 ;c<y ; c++)
             {
                 matrix[r][c]=arr[counter];
                 counter++;
             }
         }
          for(int r =0 ; r<y ; r++)
         {
             for(int c =0 ;c<y ; c++)
             {
                cout<<matrix[c][r];
             }
          }
        }
*/
    }

    return 0;
}
