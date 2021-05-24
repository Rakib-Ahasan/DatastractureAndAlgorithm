#include<iostream>
using namespace std;
void selectionSort(int a[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        int minValue = i;
        for(int j = i+1; j<n; j++)
        {
            if(a[j] < a[minValue])
            {
                minValue = j;
            }
        }
        int temp = a[i];
        a[i] = a[minValue];
        a[minValue] = temp;
    }
}
int main()
{
    int a[]={5,3,4,1,2};
    int n = sizeof(a)/sizeof(a[0]);
    selectionSort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

