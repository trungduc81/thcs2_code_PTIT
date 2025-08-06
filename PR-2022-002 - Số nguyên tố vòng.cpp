#include<stdio.h>
#include<string.h>
#include<math.h>

int isprime(int n){
    if(n < 2) return 0;
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int xoay(int n){
    if(!isprime(n)) return 0 ;
    int scs = 0 , tmp = n ;
    while(tmp>0){
        tmp /= 10 ;
        scs++ ;
    }
    int pow10 = pow(10,scs-1) ;
    int s = n ;
    for(int i = 0 ; i < scs ; i++){
        int m = s%10 ;
        s = s/10 + m*pow10 ;
        if(!isprime(s)) return 0 ;
    }
    return 1 ;
}

int main(){
    int n ; scanf("%d",&n) ;
    int a[n] ;
    int res[n] , idx = 0 ;
    for(int i = 0 ; i < n ; i++) {
        scanf("%d",&a[i]) ;
        if(xoay(a[i])) res[idx++] = 1 ;
        else res[idx++] = 0 ;
    }
    for(int i = 0 ; i < idx ; i++){
        printf("%d ",res[i]) ;
    }
}
