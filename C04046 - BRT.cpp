#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define ll long long

int cmp(const void *a , const void *b){
    int *x = (int *) a ;
    int *y = (int *) b ;
    return *x - *y ;
}
int main(){
    int t ; scanf("%d",&t) ;
    while(t--){
        int n ; scanf("%d",&n) ;
        int a[n] ;
        for(int i = 0 ; i < n ; i++) scanf("%d",&a[i]) ;
        qsort(a,n,sizeof(int),cmp) ;
        int MIN = 2*1e9 + 1 ;
        int cnt = 0 ;
        for(int i = 1 ; i < n ; i++){
            int kc = abs(a[i]-a[i-1]) ;
            if(MIN > kc) MIN = kc ;
        }
        for(int i = 1 ; i < n ; i++){
            if(MIN == abs(a[i]-a[i-1])) cnt++ ;
        }
        printf("%d %d\n",MIN,cnt) ;
    }
}
