#include <iostream>

using namespace std;
int arr[109];
int main()
{
    int n ;
    cin>>n ;
    int sumx = 0;
    int sumy = 0;
    int sumz = 0;
    for(int i =0;i<n;i++)
        {
                int x , y , z  ;
                cin >>x>>y>>z ;
                sumx+=x;
                sumy+=y;
                sumz+=z;

        }
    (sumx==0&&sumy==0&&sumz==0)?cout<<"YES":cout<<"NO"<<endl;
    return 0;
}
