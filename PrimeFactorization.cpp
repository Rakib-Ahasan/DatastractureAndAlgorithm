#include<bits/stdc++.h>
using namespace std;
#define MAX 32000
int List[128]; ///saves the List
int listSize;
vector<int>primes;
void sieve(int n)
{
    bool isPrime[MAX];
    for(int i =0; i<MAX; i++)
        isPrime[i]=true;
    for(int i=3; i*i<=MAX; i+=2)
    {
        if(isPrime)
        {
            for(int j = i*i; j<=MAX; j+=i+i)
            {
                isPrime[j]=false;
            }
        }
    }
    primes.push_back(2);
    for(int i= 3; i<=MAX; i+=2 )
    {
        if(isPrime[i])
            primes.push_back(i);
    }
}

void primeFactorize(int n)
{
    //sieve(sqrt(n)+1);
    listSize =0; ///Initially List is empty, we donate that size=0.
    for(int i =0; primes[i]* primes[i]<=n; i++)
    {
        if(n%primes[i]==0) ///So,n is a multiple i th prime.
        {
            ///So, we continue divided n by primes[i].
            while(n%primes[i]==0)
            {
                n/=primes[i]; ///We divided n by primes[i].

                List[listSize] = primes[i];/// We added the i th prime in the List.
                listSize++; ///Added a prime.So, listSize should be increased.
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    primeFactorize(n);
    for(int i =0; i< listSize; i++) ///Traverse the List array.
    {
        cout<<List[i]<< endl;
    }
}
