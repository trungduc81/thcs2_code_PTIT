#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define ll long long

double dtich(double a , double b , double c){
    double s = (a+b+c)/2 ;
    return sqrt(s*(s-a)*(s-b)*(s-c)) ;
}

typedef struct {
    double a , b , c ;
    double s ;
} tamgiac ;

int cmp(const void*a , const void *b){
    tamgiac *x = (tamgiac*) a ;
    tamgiac *y = (tamgiac*) b ;
    if(x->s < y->s) return -1 ;
    else if(x->s > y->s) return 1 ;
}

int main(){
    int n ; scanf("%d",&n) ;
    tamgiac ds[n] ;
    for(int i = 0 ; i < n ; i++){
        scanf("%lf %lf %lf",&ds[i].a,&ds[i].b,&ds[i].c) ;
        ds[i].s = dtich(ds[i].a,ds[i].b,ds[i].c) ;
    }
    qsort(ds,n,sizeof(tamgiac),cmp) ;
    for(int i = 0 ; i < n ; i++){
        printf("%.0lf %.0lf %.0lf\n",ds[i].a,ds[i].b,ds[i].c) ;
    }
}
