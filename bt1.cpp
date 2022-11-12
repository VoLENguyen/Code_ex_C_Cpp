
// khong su dung thuat toan kiem tra so nguyen to
#include <stdio.h>
#include <math.h>

int prime(int n){
    int cnt = 0;
    for (int i = 1 ; i <= n; i++)
    {
        if(n%i==0) ++cnt;
    }
    if(cnt==2)
        return 1;
    else 
        return 0;
}
// thuat toan kiem tra so nguyen to
// do phuc tap O(log(n))
int prime2(int n){
    for (int i = 2; i < sqrt(n); i++)
    {
        if(n % i == 0 ) return 0;
    }
        return n >1;
}
int main (){
    int n;
    scanf("%d",&n);
    if(prime2(n)) printf("YES");
    else printf("No");
}
