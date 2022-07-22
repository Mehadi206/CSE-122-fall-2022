#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int a,i,n,l;
    cin>>n;
    char c[500];
    for(i=0;i<n;i++)
    {
        cin>>c;
        l=strlen(c);
        if(l>10)
        {
            cout<<c[0]<<l-2<<c[l-1];
        }
        else
        {

            cout<<c<<endl;
        }
    }
    return 0;
}
