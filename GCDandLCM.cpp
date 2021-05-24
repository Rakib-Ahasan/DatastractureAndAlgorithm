#include<iostream>
using namespace std;
int main()
{
    int n1,n2,remain,gcd,lcm;
    cin>>n1>>n2;
    int m= n1 * n2;
    ///For gcd..
    while(n2!=0)
    {
        remain = n1 % n2;
        n1 = n2;
        n2 = remain;
    }
     gcd = n1;

     lcm = m/gcd;

    cout<<gcd<<endl<<lcm;
}
