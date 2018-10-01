    #include <iostream>
    #include<bits/stdc++.h>
    using namespace std;

    int main()
    {   int n , q,Case=0;
        while(cin>>n>>q)
       {   if(n==0&&q==0)break;
           int arr[10009];
           for(int i=0;i<n;i++)
            cin>>arr[i];
           sort(arr,arr+n);
           cout<<"CASE# "<<++Case<<":"<<endl;
           while(q)
           {
               int queriy;
               cin>>queriy;
               bool result=false;
               for(int i=0;i<n;i++)
               {
                   if(arr[i]==queriy) //5 found at 4
                   {
                       cout<<queriy<<" found at " <<i+1<<endl;
                       result = true;
                       break;
                   }
                   if(arr[i]>queriy) break;
               }
               if(result != true) //2 not found
                cout<<queriy<<" not found"<<endl;
               q--;
           }

       }
        return 0;
    }
