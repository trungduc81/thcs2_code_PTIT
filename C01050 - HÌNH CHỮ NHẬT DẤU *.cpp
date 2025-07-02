#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long 

int main() {
    int m , n ; scanf("%d %d",&m,&n) ; 
    int a[n][m] ; 
    for(int i = 0 ; i < n ; i++ ){
    	for(int j = 0 ; j < m  ; j++){
    		if(i==0 || j == 0 || i == n -1 || j == m -1){
    			printf("*") ; 
			}
			else printf(" ") ; 
		}
		printf("\n") ; 
	}
}

