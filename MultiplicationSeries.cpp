///1*2 + 2*3 + 3*4 +.....+n1*n2;
#include<iostream>
using namespace std;
int main()
{
    int n1,n2,a=1,b=2,sum=0;
    cin>>n1>>n2;
    while(a<=n1 && b<=n2)
    {
        sum += a*b;
        a++;
        b++;
    }
    cout<<sum;
}
