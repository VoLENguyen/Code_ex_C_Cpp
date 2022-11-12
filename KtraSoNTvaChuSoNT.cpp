#include <stdio.h>
#include <math.h>

/*
ham con
 */
int prime[1000001];
void sieve(){
	for (int i = 0; i <= 1000000; ++i)
	{
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for (int i = 2; i < 1000; ++i)
	{
		if (prime[i])
		{
			/* code */
			for (int j = i*i; j <= 1000000; ++j)
			{
				/* code */
				prime[j] = 0;
			}
		}
	}

}

// int prime(int n){
// 	for (int i = 2; i < sqrt(n); ++i)
// 	{
// 		if(n % i == 0)
// 			return 0;		
// 	}
// 	return n > 1;
// }

int digit(int n){
	while(n){
		int r = n % 10;
		//if(r!=2 && r!=3 && r!=5 && r!=7) 
		if(!(r==2 || r == 3 || r ==7)) return 0;
		n/=10;

	}
	return 1;
}



/*main*/
int main()
{
	int t;
	sieve();
	scanf("%d",&t);
	// if(prime(n)) printf("YES");
	// else printf("NO");
	while(t--){
		int a,b;
		scanf("%d%d",&a,&b);
		int count;
		for (int i = a; i <= b; i++)
		{
			if(prime[i] && digit(i))
				++count;
		}
		printf("%d\n", count);
	}
}