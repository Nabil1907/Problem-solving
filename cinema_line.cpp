#include <iostream>
const int N =1000000;
int arr[N];
using namespace std;

int main()
{   int pepole_num , twenty_five = 0 , fivteen = 0 , sum = 0 , money = 0;
     cin>>pepole_num ;
     for(int i =0 ; i< pepole_num ; i++)
     {
         cin>>arr[i];
     }
     for(int i =0 ; i< pepole_num ; ++i)
     {
         if(arr[i]==25)
         {
             twenty_five++;
             money = money + 25;
             sum++;
         }
         else
          if(arr[i]==50)
          {
              if(twenty_five>=1)
              {
                  money = money + 25;
                  twenty_five--;
                  fivteen++;
                  sum++;
              }
              else
              {
                  cout<<"NO";
                  break;
              }
          }
         else
           if(arr[i]==100)
           {
               if(twenty_five>=1&&fivteen>=1)
               {
                   money = money +25;
                   twenty_five--;
                   fivteen--;
                   sum++;
               }
               else
               {
                   cout<<"NO";
                   break;
               }
           }
     }
     if(sum==pepole_num)
        cout<<"YES";
    return 0;
} /*#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,cnt=0,cnt_25=0,cnt_50=0,a[100005],x=1;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        if(a[i]==25)
        {
            cnt_25++;
        }
        else if(a[i]==50)
        {
            if(cnt_25<1)
            {
                x=0;
                break;
            }
            else
            {
                cnt_25--;
                cnt_50++;
            }
        }
        else
        {
            if(cnt_25>0&&cnt_50>0)
            {
                cnt_25--;
                cnt_50--;
            }
            else if(cnt_25>=3)
            {
                cnt_25-=3;
            }
            else
            {
                x=0;
                break;
            }
        }

    }
    if(x==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}*/
