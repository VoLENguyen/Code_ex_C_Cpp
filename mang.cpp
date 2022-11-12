#include <iostream>
#include <math.h>
using namespace std;
// kieu_du_dieu tenmang[số lượng phần tử của mảng]
// int main (){
// //     int n;
// //     cin >> n;
// //     int a[n];
// //     for(int i =0;i <n; i++){
// //         cin >> a[i];
// //     }
// //     int sum = 0;
// //     for (int i = 0; i < a[i]; i++)
// //     {
// //         sum+=a[i];
// //     }
// //     cout << sum << endl;
    
// // return 0;

// int a[10] = {0};
// for (int i = 0; i < 10; i++)
// {
//     cout << a[i] << endl;
// }


// }
bool nt(int n) {
    for(int i = 2 ; i <= sqrt(n); i++){
        if(n % i == 0)
        return false;
    }
    return  n > 1;
}
//for each
int main () {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // for (int i = 0; i < n; i++)
    // {
    //     if (nt(a[i]))
    //     {
    //         cout << a[i] << " 7";
    //     }
        
    // }
    for(int x : a){
        cout << x << " ";
    }
    return 0;
    
    

}
