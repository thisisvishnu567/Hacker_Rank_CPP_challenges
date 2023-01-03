#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string x[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    int a=sizeof(x)/sizeof(x[0]);
    sort(x,x+n);
    for(int i=0;i<n;i++)
    {
        cout<<i+1<<" "<<x[i]<<endl;
    }
}
