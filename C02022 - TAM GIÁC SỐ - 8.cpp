#include<stdio.h>

int main(){
    int n ; scanf("%d", &n) ;
    int k = 1 ; 
    for(int i = 1; i <= n; i++){
        int a[i]; 
        for(int j = 0; j < i; j++) a[j] = k++ ;
        if(i % 2 == 0){
            for(int j = i - 1; j >= 0; j--){
                printf("%d ", a[j]) ;
            }
        } 
		else { 
            for(int j = 0; j < i; j++){
                printf("%d ", a[j]);
            }
        }
        printf("\n");
    }
}

