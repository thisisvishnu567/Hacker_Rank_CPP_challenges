#include<iostream>
using namespace std;
int main()
{
    int d,m,y;
    int day;
    int array[12] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    cin>>d>>m>>y;
    if(m<3)
    {
        y=y-1;
    }
    day = (y= y+ y/4 - y/100 + y/400 + array[m-1] + d)%7;
    switch(day)
    {
        case 0: cout<< "Sunday";break;
        case 1: cout<< "Monday";break;
        case 2: cout<< "Tuesday"; break;
        case 3: cout<< "Wednesday";break;
        case 4: cout<< "Thursday";break;
        case 5: cout<< "Friday"; break;
        case 6: cout<< "Saturday";break;
    }
}
