#include <stdio.h>
#include <math.h>
int prime[1000000];
void sang(){
	for (int i = 0; i <= 1000000; ++i)
	{
		prime[i] = 1;	
	}
	prime[0] = prime[1] = 0;
	for (int i = 2; i < sqrt(1000000); ++i)
		{
			if (prime[i])
			{
				/* code */
				for (int j = i*i; i < 1000000; j+=i)
				{
					/* code */
					prime[j] = 0;
				}
			}
		}
}
int main(){
	sang();
	int t;
	scanf("%d",&t);
	while(t--) {
	    int n;
	    scanf("%d",&n);
	    if(prime[n]) printf("Yes\n");
	    else printf("No\n");
	}
}