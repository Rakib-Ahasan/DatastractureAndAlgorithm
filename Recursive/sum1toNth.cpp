#include<bits/stdc++.h>
using namespace std;
///for print 1 to nth number.
/*void printNumbers(int n)
{
    if(n==0)
        return;
    printNumbers(n-1);
    cout<<n<<endl;
}*/
///for sum 1 to nth number with recursion
int sum(int n)
{
    if(n==0)
        return 0;
    return n +sum(n-1);
}
///for sum m to nth number with recursion.
int sum2(int m, int n)
{
    if(m>n)
        return 0;
    return m + sum2(m+1, n);
}
//Factorial
int fact(int n)
{
    if(n==1)
        return 1;
    return n *fact(n-1);
}
///Get GCD
///divide a with b
///if a%b == o then b is the gcd
///a= b; b= a%b;
///this process will happen until a%b produce 0.
int gcd(int a, int b)
{
    cout<<"A : "<<a<<" B : "<<b<<" A%B : "<<a%b<<endl;
    if(a % b == 0)
        return b;
    return gcd(b,a%b);

}
///find power number
int power(int x,int n)
{
    if(n==0)
        return 1;
    int result= x * power(x,n-1);
    cout<<"X = "<<x<<" N = "<<n<<" Result = "<<result<<endl;
    return result;
}
///123 1+2+3 = 6
///123 /10 = 12 remainder = 3
/// 12/10 = 1 remainder = 2
/// 1/10 = 0 remainder = 1
int sumOfDigit(int n)
{
    if(n == 0)
        return 0;
    cout<<"Number = "<<n<<endl;
    int rem =n % 10;
    int m = sumOfDigit(n/10);
    int result = rem + m;
    cout<<"Number = "<<n<<" Remainder = "<<rem<<" Result = " <<result<<endl;
    return result;
    //return n%10 + sumOfDigit(n/10);
}
///Traverse array with recursion
void traverse(int arr[],int lastIndex)
{
    if(lastIndex < 0)
        return;
    cout<<"LastIndex = "<<lastIndex<<endl;
    traverse(arr, lastIndex - 1);
    cout<<arr[lastIndex]<<endl;
}
///Reverse array with recursion
void reverse(int arr[], int firstIndex,int lastIndex)
{
    if(firstIndex > lastIndex)
        return;
    int temp = arr[firstIndex];
    arr[firstIndex] = arr[lastIndex];
    arr[lastIndex] = temp;

    reverse(arr, firstIndex+1, lastIndex - 1);

}
int main()
{
    //printNumbers(5);
    cout<<sum(5)<<endl;
    cout<<sum2(10,20)<<endl;
    cout<<fact(4)<<endl;
    cout<<gcd(468,30)<<endl;
    cout<<power(10,3)<<endl;
    cout<<sumOfDigit(123)<<endl;
    int arr[] = {1,2,3,4,5};
    int length = sizeof(arr)/sizeof(arr[0]);
    traverse(arr, length-1);
    reverse(arr,0,length-1);
    cout<<array(arr)<<endl;
}
