#include<stdio.h>
#include<stdlib.h>  

int main() {
    int n ; scanf("%d",&n) ; 
    int k , tmp , d , e ; 
    k = tmp = 1 ; 
    for(int i = 1 ; i <= n ; i++){
    	d = n - 1 ; 
    	for(int j = 1 ; j <= i ; j++){
    		printf("%d ",k) ;
    		k += d ; 
    		d-- ;  
		}
		tmp++ ; 
		k = tmp ; 
		printf("\n") ; 
	}
}

