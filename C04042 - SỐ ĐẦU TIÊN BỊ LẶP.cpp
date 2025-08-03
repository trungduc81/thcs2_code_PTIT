#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int idx ;
    int m ;
} ptu ;

int cmp(const void *a , const void *b){
    ptu *x = (ptu *) a ;
    ptu *y = (ptu *) b ;
    if(x->m < y->m) return -1 ;
    else if(x->m > y->m) return 1 ;
    return x->idx - y->idx ;
}
int main(){
    int t ; scanf("%d",&t) ;
    while(t--){
        int n ; scanf("%d",&n) ;
        ptu ds[n] ;
        int a[n] ;
        for(int i = 0 ; i < n ; i++){
            scanf("%d",&a[i]) ;
            ds[i].idx = i ;
            ds[i].m = a[i] ;
        }
        qsort(ds,n,sizeof(ptu),cmp) ;
        int check = 0 , MIN = 1e6 ;
        for(int i = 1 ; i < n ; i++){
            if(ds[i].m == ds[i-1].m){
               int res = (ds[i].idx < ds[i-1].idx) ? ds[i].idx : ds[i-1].idx ;
                if(MIN > res) {
                    MIN = res ;
                    check = 1 ;
                }
            }
        }
        if(!check) printf("NO\n") ;
        else printf("%d\n",a[MIN]) ;
    }
}
