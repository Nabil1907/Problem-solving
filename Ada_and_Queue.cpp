#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*

back - Print number from back and then erase it

front - Print number from front and then erase it

reverse - Reverses all elements in queue

push_back N - Add element N to back

toFront N - Put element N to front


*/
int main()
{
    list<int> mylist ;

    int  tc ;
    string str;
    cin>>tc;
    while(tc--)
    {


    cin>>str;
    if(str=="toFront")
       {
        int val ;
        cin>>val;
        mylist.push_front(val);
       }
    else
     if(str=="push_back")

        {
        int val ;
        cin>>val;
        mylist.push_back(val);
        }
    else
     if(str=="reverse")
          mylist.reverse();
    else
     if(str=="front")
    {
        if(mylist.size()==0)
            cout<<"No job for Ada?"<<endl;
        else
        {
        list<int> :: iterator x = mylist.begin();
        cout<<*x<<endl;
        mylist.pop_front();
        }
    }
    else
        if(str=="back")
    {
         if(mylist.size()==0)
            cout<<"No job for Ada?"<<endl;
        else
        {
        list<int> :: iterator x = mylist.end();
        cout<<*x<<endl;
        mylist.pop_back();
        }
    }
    }

    return 0;
}
