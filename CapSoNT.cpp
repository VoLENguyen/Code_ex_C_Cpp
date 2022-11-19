#include <stdio.h>
#include <math.h>
bool prime[10001];
void sieve(){
    for(int i = 0; i <= 10000; i++){
        prime[i] = 1; 
    }
    prime[0] = prime[1] = 0;
    for(int i = 2; i < sqrt(10000); i++){
        if(prime[i]){
            for (int j = i * i ; j <= 10000; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}

int main(){
    int t;
    scanf("%d",&t);
    sieve();
    while(t--){
        int n;
        for (int i = 2; i <= n/2; i++)
        {
            if(prime[i]&&prime[n-i]){
                printf("%d %d\n",i,n-i);
            }
        }
    }
}