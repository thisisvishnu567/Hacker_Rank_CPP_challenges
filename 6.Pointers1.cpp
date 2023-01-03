#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    cin>>x;
    for(int i=0 ; x[i]!='\0'; i++)
    {
        if(x[i]=='a')
        {
            x[i]='*';
        }
    }
    cout<<x;
}
