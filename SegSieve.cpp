#include<bits/stdc++.h>
using namespace std;
#define MAX 100001
vector <int> primes;
bool isPrime[MAX];

void sieve()
{
    /// as n = 1000000000 so, we store square root of n
    /// into len to find primes up to len and store into p array
    //int len = sqrt(1000000000);
    for(int i = 0; i<MAX; i++)
        isPrime[i]=true;

    primes.push_back(2);

    for (int i = 3; i*i < MAX; i += 2)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
            for (int j = i*i; j <MAX; j += i+i)
            {
                isPrime[j] = false;
            }
        }
    }
}

void segSieve(int l, int r)
{
    int len = (r-l)+1; /// length of the segment
    for (int i = 0; i < len; i++)
    {
        isPrime[i] = true;
    }

    /// primes[i]*primes[i] make sure that primes[i] is less then or equal
    /// to square root of r
    for (int i = 0; i < primes.size() && primes[i]*primes[i] <= r; i++)
    {
        int currentPrime = primes[i];
        long long base = (l+currentPrime-1)/currentPrime * currentPrime; /// base will l <= base

        if (base==currentPrime)
            base += currentPrime; /// if base is remain prime
        for ( int j =base; j <= r; j += currentPrime)
        {
            isPrime[j-l] = false;
        }
    }

    for (int i = 0; i < len; i++)
    {
        /// if isPrime[i] is true then, l+i is prime
        if (isPrime[i] && i+l > 1)
        {
            cout << i+l<< '\n';
        }
    }
}

int main()
{
    sieve();
    int l,r;
    cin>>l>>r;

    segSieve(l,r);
}
