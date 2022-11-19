#include <stdio.h>
#include <math.h>


int nt(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return 0;
        }
        return n > 1;
    }
}
int csntvatong(int n){
    int sum = 0;
    while (n)
    {
        int r = n % 10;
        sum += r;
        if(!nt(r)) return 0;
        n /= 10;
    }
    return nt(sum);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int a,b;
        scanf("%d%d",&a,&b);
        int cnt = 0;
        for(int i = a; i <=b; i++){
            if(csntvatong(i) && nt(i))
                cnt++;
        }
        printf("%d\n",cnt);
    }
}
