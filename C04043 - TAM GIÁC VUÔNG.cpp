#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define ll long long

int cmp(const void *a , const void *b){
    ll *x = (ll *) a ;
    ll *y = (ll *) b ;
    if(x < y) return -1 ;
    if(x >y) return 1 ;
}
int main(){
    int t ; scanf("%d",&t) ;
    while(t--){
        int n ; scanf("%d",&n) ;
        ll a[n] ;
        for(int i = 0 ; i < n ; i++) scanf("%lld",&a[i]) ;
        for(int i = 0 ; i < n ; i++){
            a[i] *= a[i] ;
        }
        qsort(a,n,sizeof(ll),cmp) ;
        int check = 0 ;
        for(int k = n - 1 ; k >= 2 && !check ; k--){
            int l = 0 , r = k - 1 ;
            while(l <= r){
                if(a[l] + a[r] == a[k]) {
                    check = 1 ;
                    break ;
                }
                else if(a[l] + a[r] < a[k]) l++ ;
                else r-- ;
            }
        }
        if(!check) printf("NO\n") ;
        else printf("YES\n") ;
     }
}
