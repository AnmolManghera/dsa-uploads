#include<iostream>
using namespace std;
void primeprint(long long prime[])
{
	prime[2] = 1;

	prime[0] = prime[1] = 0; 
		
		//marking all long odds as prime
	for(long long i = 3 ; i < 1000000 ; i+=2)
	{
		prime[i] = 1;	
	}
	

	for(long long i = 3 ; i <= 1000000 ; i+=2)
	{	
		if(prime[i])
		{
			for(long long j = i*i ; j <=1000000 ; j += 2*i)
			{
				prime[j] = 0;
			}
		}
	}
}
int main(){	
	long long prime[1000000] = {0};

	primeprint(prime);

	int csum[1000000]={0};
    //precompute primes upto an index i
    for(int i=1;i<=1000000;i++){
        csum[i]=csum[i-1]+prime[i];
    }
    int tl;
    cin>>tl;
    while(tl--){
        int a,b;
        cin>>a>>b;
        cout<<csum[b]-csum[a-1] ;
        cout<<endl;
    }


	return 0;
}