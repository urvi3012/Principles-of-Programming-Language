#include <iostream>
using namespace std;
int main()
{
    float x,y;
    cout<<"Enter numbers to calculate value of  (x + y)(x - y) expression ";
    cout<<"\nEnter x,y in order";
    cin>>x>>y;
    float result = (x*x) - (y*y);
    cout<<"\nResult of expression is: "<<result;
    return 0;
}


