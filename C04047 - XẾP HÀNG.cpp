#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ll long long

typedef struct {
    int t , d ;
} tgian ;

int cmp(const void *a , const void *b){
    tgian *x = (tgian *) a ;
    tgian *y = (tgian *) b ;
    if(x->t > y->t) return 1 ;
    else if(x->t < y-> t) return -1 ;
    return x->d - y->d ;
}

int main(){
    int n ; scanf("%d",&n) ;
    tgian ds[n] ;
    for(int i = 0 ; i < n ; i++){
        scanf("%d %d",&ds[i].t , &ds[i].d) ;
    }
    qsort(ds,n,sizeof(tgian),cmp) ;

    int time = ds[0].t + ds[0].d ;
    for(int i = 1 ; i < n ; i++){
        if(ds[i].t > time) time = ds[i].t + ds[i].d ;
        else time = time + ds[i].d ;
    }
    printf("%d\n",time) ;
}
