#include<iostream>
using namespace std;
int main()
{
    int n = 4,i,j,temp;
    int data[4]={5,8,1,6};

    for(i=0;i<n;i++)
    {
        j=i;
        ///Asc: data[j] < data[j-1]
        ///Desc: data[j] > data[j-1]
        while(j>0 && data[j] < data[j-1])
        {
            temp = data[j];
            data[j]= data[j-1];
            data[j-1] = temp;
            j--;
        }
    }
    cout<<"In Ascending order: ";
    for(i =0;i<n;i++)
    {
        cout<<data[i]<<" ";
    }

}
