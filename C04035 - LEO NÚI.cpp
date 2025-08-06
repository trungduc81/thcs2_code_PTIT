#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int u, d;
} Nguoi;

int cmp(const void *a, const void *b){
    Nguoi *x = (Nguoi*)a;
    Nguoi *y = (Nguoi*)b;

    if((x->u < x->d && y->u < y->d))
        return x->u - y->u;

    if((x->u >= x->d && y->u >= y->d))
        return y->d - x->d;

    return (x->u < x->d) ? -1 : 1 ;
}

int main(){
    int n;
    scanf("%d", &n);
    Nguoi a[n];
    for(int i = 0; i < n; i++)
        scanf("%d%d", &a[i].u, &a[i].d);
    qsort(a, n, sizeof(Nguoi), cmp);
    
    int time = 0, res = 0 ;
    for(int i = 0; i < n; i++){
        time += a[i].u ;
        if(time + a[i].d > res)
            res = time + a[i].d ;
    }
    printf("%d\n", res);
}
