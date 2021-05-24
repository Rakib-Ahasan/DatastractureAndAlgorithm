#include<iostream>
using namespace std;
///Merge two sub arrays L[] and R[] into arr[]
void merge(int arr[],int low,int mid, int high)
{
    ///Create L[] <- arr[low....mid] and R[] <- arr[mid+1....high]
    int n1 = mid-low+1;
    int n2 = high - mid;
    int L[n1],R[n2];
    for(int i=0; i<n1; i++)
    {
        L[i] = arr[low+i];
    }
    for(int j=0; j<n2; j++)
    {
        R[j] = arr[mid+1+j];
    }
    ///Maintain current index of sub arrays and main array.
    int i=0,j=0,k=low;

    ///Until we reach either end of either L or R, pick large among.
    ///Elements L and R and place them int the correct position at arr[low....high].
    while(i<n1 && j<n2)
    {
        if(L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    ///When we run out of elements in either L or R.
    ///Pick up the remaining elements and put in arr[low...high].
    while(i<n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

///Divide two sub arrays, sort them and merge them.
void mergeSort(int arr[],int low,int high)
{
    if(low<high)
    {
        ///mid is the point where the array is divided int two sub arrays.
        int mid = low + (high - low)/2;

        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);

        ///Merge the stored sub arrays.
        merge(arr,low,mid,high);
    }
}
int main()
{
    int arr[] = {6,5,4,10,9,1};
    int  size = sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr,0,size-1);

    for(int i =0; i<size; i++)
        cout<< arr[i]<<" ";
}
