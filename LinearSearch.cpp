#include<iostream>
using namespace std;
int main()
{
    int value,position=-1;
    int num[]={34,2,5,6,7,23,25,50,19,100};
    cout<<"Enter a number for searching :";
    cin>>value;
    for(int i =0;i<9;i++)
    {
        if(value == num[i])
        {
            position = i+1;
            break;
        }
    }
    if(position == -1) cout<< "Value not found!";
    else cout<<"Item "<<value<< " position is :"<<position;

}
