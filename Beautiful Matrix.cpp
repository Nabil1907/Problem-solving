#include <iostream>

using namespace std;

int main()
{
    int matrix[5][5] , r , c;
    for(int i =0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>matrix[i][j];
            if(matrix[i][j]==1)
            {
                r = i;
                c = j ;
            }
        }
    }
    int ans = r - c ;
    if(ans<0)
        ans = ans * -1;
    if(ans==0&&r==5&&c==5)
        ans=4 ;
   cout<<ans;
    return 0;
}
