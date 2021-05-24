#include<bits/stdc++.h>
using namespace std;
/*bool isPrime(int n)
{
    if(n<=1)
        return false;
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
            return false ;
    }
    return true;
}*/
string isPrime(int n)
{
    if(n<=1)
        return "Not prime";
    for(int i=2;i*i<=n;i++)
    {
        if(n%i == 0)
        return "Not prime" ;
    }
     return "Prime";
}
int prime [300000],nPrime;
//1 if not prime,0 if prime.
int mark[1000002];

void sieve(int n)
{
    int i,j,limit = sqrt(n*1)+2;
    //1 is not prime,you can also mark 0.
    mark[1]=1;

    //Almost all the evens are not prime.
    for(i=4; i<=n; i+=2)
        mark[i] =1;

    //2 is prime.
    prime[nPrime++] =2;

    //Run loop only odds.
    for(i=2; i<=n; i+=2)
    {
        //if not prime no need to "multiple cutting".
        if(!mark[i])
        {
            //i is prime
            prime[nPrime++]=i;

            if(i<=limit)
            {
                //loop through all odd multiples of i.
                // greater than i*i
                for(j=i*i; j<=n; j+=i*2)
                {
                    //mark j not prime
                    mark[j] =1;
                }
            }
        }
    }
}

int main()
{
    int n;
    cout<<"Enter a number to check primality :";
    cin>>n;
    cout<<isPrime(n);
     //isPrime(n) ? cout << " true\n" : cout << " false\n";
}
