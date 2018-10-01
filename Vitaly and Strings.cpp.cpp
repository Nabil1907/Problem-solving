#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin>>n;
    int arr[92];
    bool ans ;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }

  if(arr[n-1]==15)
       {
         cout<<"DOWN"<<endl;
         return 0;
       }
    else if(arr[n-1]==0)
       {
         cout<<"UP"<<endl;
         return 0;
       }
         if(n==1)
       {
         cout<<"-1"<<endl;
         return 0;
       }
       else

       if(arr[n-1]>arr[n-2])
        cout<<"UP"<<endl;
       else
        if(arr[n-1]<arr[n-2])
        cout<<"DOWN"<<endl;
    return 0;
}
