#include<bits/stdc++.h>
using namespace std;
#define M 1000000
bool marked[M];
void sieve(int n)
{
    //"true" if Not Prime and "false" if Prime.
    // 0 and 1 are not prime.
    marked[0]=marked[1]= true;

    //Almost all the evens are not prime.
    for(int i = 4; i<n; i+=2)
        marked[i]== true;

    //Run loop for only odds.
    for ( int i = 3; i * i <= n; i += 2)
    {
        if (marked[i] == false)   // i is a prime
        {
            for (int j = i * i; j <= n; j += i + i)
            {
                marked[j] = true; // j is not prime.
            }
        }
    }

    if (n < 2 )
        cout<<"Not Prime";

    else if (n == 2)
        cout<<"Prime";

    else if (marked[n]== false)
        cout<<"Prime";

    else
        cout<<"Not Prime";

}
int main()
{
    int n;
    cin>>n;
    sieve(n);
}

