#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {
    int id ;
    char ten[50] , date[50] ;
    float diem1 , diem2 , diem3 ;
    float tong ;
} ThiSinh ;

int cmp(const void *a , const void *b){
    ThiSinh *x = (ThiSinh*) a ;
    ThiSinh *y = (ThiSinh*) b ;
    if(x->tong > y->tong) return -1 ;
    else if(x->tong < y->tong ) return 1 ;
    return x->id - y->id ;
}

int main(){
    int n ; scanf("%d",&n) ;
    getchar() ;
    ThiSinh ds[n] ;
    for(int i = 0 ; i < n ; i++){
        ds[i].id = i + 1 ;
        gets(ds[i].ten) ;
        gets(ds[i].date) ;
        scanf("%f",&ds[i].diem1) ;
        scanf("%f",&ds[i].diem2) ;
        scanf("%f", &ds[i].diem3) ;
        ds[i].tong = ds[i].diem1 + ds[i].diem2 + ds[i].diem3 ;
        getchar() ;
    }
    qsort(ds,n,sizeof(ThiSinh),cmp) ;
    for(int i = 0 ; i < n ; i++){
        printf("%d %s %s %.1f\n",ds[i].id , ds[i].ten,ds[i].date , ds[i].tong) ;
    }
}
