#include<iostream>
using namespace std;
int main()
{
    int num,temp,sum=0;
    cin>>num;
    temp = num;
    while(temp != 0)
    {
        int remain = temp % 10;
        sum += remain;
        temp = temp/10;
    }
    cout<<sum;
}
