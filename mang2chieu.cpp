#include<stdio.h>
#include<math.h>
int nguyen_to(int n){
    for (int i = 2; i < sqrt(n); i++) {
        if (n % i == 0)
        {
            return 0;
        }
        return n >1;
        
    }
    
}
void nhap(int a[][100],int n, int m){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    
}
void in (int a[][100],int n,int m){
    for (int i = 0; i < n; i++)
    {
            for (int j = 0; j < m; j++)
            {
                printf("%d",&a[i][j]);
            }
            
    }
    
}

int main() 
{
    // int n , m;
    // scanf("%d%d",&n,&m);
    // int a[n][m];
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++) scanf("%d",&a[i][j]); 
    // }
    // int max = -1e9;
    // int min = 1e9;
    //     for (int i = 0; i < n; i++)
    //     {
    //         for (int j = 0; j < m; j++)
    //         {
    //             if(a[i][j] > max) max = a[i][j];
    //             if(a[i][j] < min) min = a[i][j];
    //         }  
    //     }
    //     int sum = 0;
    //     for (int i = 0; i < n; i++)
    //     {
    //         for (int j = 0; j < m; j++)
    //         {
    //             if(nguyen_to(a[i][j])) sum+=a[i][j];
    //         }
    //         printf("\n");
            
    //     }
        
    // printf("gia tri lon nhat cua mang: %d\n", max);
    // printf("gia tri nho nhat cua mang: %d\n" ,min);
    // printf("tong cac so nguyen to trong mang: %d\n",sum);
    int n,m,a[100][100];
    scanf("%d%d",&n,&m);
    nhap(a,n,m);
    in(a,n,m);
    return 0;
}