
/*
    NẾU BẠN MUỐN SÀNG CÁC SỐ NGUYÊN TỐ KHÔNG VƯỢT QUÁ N 
    THÌ PPHAIR TẠO ĐƯỢC 1 MẢNG CÓ N+1 PHẦN TỬ
*/
#include<stdio.h>
#include<math.h>
int prime[1000001];
void sive(){
    //cho tat ca cac so tu 0 cho toi n la cac so nguyen to
    /*
    prime[i] = 1
    primt[i] =  0
    */
   for(int i =0; i < 1000000;i++) prime[i] = 1;
    prime[0] = prime[1] = 0;
    for (int i = 2; i < sqrt(1000000); i++)
    {
        // neu i la so nguyen to
        if(prime[i]){
            // duyet tat ca cac boi so cua i va cho no khong la so nguyen to
            for(int j = i*i;j<= 1000000;j+=i){
                prime[j]=0; // j khong la so nguyen to
            }
        }
    } 
}
int main (){
    sive();
    int n;
    scanf("%d",&n);
    for(int i =0;i <n; i++){
        if(prime[i]) printf("%d ",i);
    }
    return 0;
}