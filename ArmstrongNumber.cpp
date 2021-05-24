#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,temp,result=0;
    cin>>num;
    temp = num;
    while(temp != 0)
    {
        int remain = temp % 10;
        result += remain * remain * remain;
        temp /= 10;
    }
    if(num == result)
        cout<<"Armstrong Number";
    else
        cout<<"Not Armstrong Number";
}

