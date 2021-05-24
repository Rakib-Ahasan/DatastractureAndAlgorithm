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
        int fact = 1;
        for(int i =1; i<=remain; i++)
            fact *= i;
        sum += fact;
        temp /= 10;
    }
    if(num == sum)
        cout<<"Strong Number";
    else
        cout<<"Not strong number";
}
