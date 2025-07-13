#include<stdio.h>

int main(){
    int n ; scanf("%d", &n) ;
    char c = 'a' ; 
    for(int i = 1; i <= n; i++){
        char a[i]; 
        for(int j = 0; j < i; j++) a[j] = c++ ;
        if(i % 2 == 0){
            for(int j = i - 1; j >= 0; j--){
                printf("%c ", a[j]) ;
            }
        } 
		else { 
            for(int j = 0; j < i; j++){
                printf("%c ", a[j]);
            }
        }
        printf("\n");
    }
}

