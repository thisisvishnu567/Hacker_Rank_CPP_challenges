#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    string set[] = {"","one","two","three","four","five","six","seven","eight","nine"};
    int a,b,i,j;
    cin>>a>>b;
    for(i=a;i<=b;i++)
    {
        if(i<=9)
        cout<<set[i]<<endl;
        else if(i>9)
        {
            if(i%2==0)
            cout<<"even"<<endl;
            else
            cout<<"odd"<<endl;
        }
    }
    return 0;
}
