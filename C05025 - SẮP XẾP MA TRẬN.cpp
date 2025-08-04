#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define ll long long

void swap(int *a , int *b){
    int tmp = *a ;
    *a = *b ;
    *b = tmp ;
}

int main(){
    int t ; scanf("%d",&t) ;
    int T = 1 ;
    while(t--){
        int n , m ; scanf("%d %d",&n,&m) ;
        int a[n][m] ;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                scanf("%d",&a[i][j]) ;
            }
        }
        printf("Test %d:\n",T) ;
        for(int i = 0 ; i < n  ; i++){
            for(int j = 0 ; j < m ; j++){
                for(int p = i ; p < n ; p++){
                    for(int q = j ; q < m ; q++){
                        if(a[p][q] < a[i][j]) {
                            swap(&a[p][q],&a[i][j]) ;
                        }
                    }
                }
                printf("%d ",a[i][j]) ;
            }
            printf("\n") ;
        }
        T++ ;
    }
}
