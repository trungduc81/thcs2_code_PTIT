#include<stdio.h>
#include<math.h>
#include<string.h>

int max(int a, int b){
    return a > b ? a : b ;
}

int main(){
    int n , m , k ; scanf("%d %d %d",&n,&m,&k) ;
    int a[m+1] ;
    for(int i = 1 ; i <= m ; i++) scanf("%d",&a[i]) ;
    int cnt[n+2];
    memset(cnt,0,sizeof(cnt)) ;
    for(int i = 1 ; i <= m ; i++){
        int l = max(1, a[i] - k) ;
        int r = a[i] + k ;
        if(r > n) r = n ;
        for(int j = l ; j <= r ; j++){
            cnt[j] = 1 ;
        }
    }

    int dem = 0 , res = 0 ;
    for(int i = 1 ; i <= n ; i++){
        if(cnt[i] == 0){
            dem++;
        }else if(dem > 0){
            res += ceil((double)dem / (2*k + 1));
            dem = 0 ;
        }
    }
    if(dem > 0) res += ceil((double)dem / (2*k + 1)) ;
    printf("%d\n",res) ;
}
