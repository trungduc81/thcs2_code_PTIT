#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define ll long long

int main(){
    int n ; scanf("%d",&n) ;
    int a[n] ;
    for(int i = 0 ; i < n ; i++) scanf("%d",&a[i]) ;
    for(int i = 0 ; i < n - 1 ; i++){
        int MIN = i ;
        for(int j = i + 1 ; j < n ; j++){
            if(a[MIN] > a[j]) MIN = j ;
        }
        if(MIN != i) {
            int tmp = a[MIN] ;
            a[MIN] = a[i] ;
            a[i] = tmp ;
        }
        for(int k = 0 ; k < n ; k++) printf("%d ",a[k]) ;
        printf("\n") ;
    }
}
