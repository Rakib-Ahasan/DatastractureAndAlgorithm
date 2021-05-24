#include<iostream>
using namespace std;
int main()
{
    int num,temp,rev=0;
    cin>>num;
    temp = num;
    while(temp != 0)
    {
        int remain = temp % 10;
        rev = rev*10+remain;
        temp = temp/10;
    }
    cout<<rev;
}

