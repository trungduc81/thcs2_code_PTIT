#include<stdio.h>

int main() {
    int MAX = -1 , MIN = 1e9 , x ; 
    while(scanf("%d",&x)==1){
    	if(x > MAX) MAX = x ; 
    	if(x < MIN) MIN = x  ; 
	}
	printf("%d %d",MAX , MIN) ; 
	return 0 ; 
}

