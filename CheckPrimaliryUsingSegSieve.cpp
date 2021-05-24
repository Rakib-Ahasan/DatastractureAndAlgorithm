#include<bits/stdc++.h>
using namespace std;
#define M 100001

vector<int>* sieve()
{
    bool isPrime[M];
    for(int i =0;i<M;i++)
        isPrime[i]=true;

    for(int i = 2; i*i<M;i++)
    {
        if(isPrime[i])
        {
            for(int j = i*i; j<M; j+=i)
            {
                isPrime[j]=false;
            }
        }
    }

    vector<int>*primes = new vector<int>();
    primes->push_back(2);
    for(int i = 3; i<M; i+=2)
    {
        if(isPrime[i])
        {
            primes->push_back(i);
        }
    }

   return primes;
}

void segSieve(long long l,long long r, vector<int>* &primes)
{
    bool isPrime[r-l+1];

    for(int i =0; i<=r-l; i++)
        isPrime[i]=true;

    for(int i =0; primes->at(i)* primes->at(i)<=r; i++)
    {
        int currentPrime = primes->at(i);
        long long base = (l/(currentPrime)) * (currentPrime);
        if(base<l)
            base += currentPrime;
        for(long long j = base; j<=r; j+=currentPrime)
        {
            isPrime[j-l]=false;
        }
        if(base == currentPrime)
        {
            isPrime[base-l] = true;
        }
    }

    for(int i = 0; i<=r-l; i++)
    {
        if(isPrime[i]==true)
        {
            cout<< i+l<<endl;
        }
    }
}

int main()
{
    vector<int>* primes = sieve();
    long long l,r;
    cin>> l>>r;
    segSieve(l,r,primes);

}
