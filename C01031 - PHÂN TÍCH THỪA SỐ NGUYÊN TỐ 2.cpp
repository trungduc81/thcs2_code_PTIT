#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long

int isprime(int n){
	if(n<2) return 0 ; 
	for(int i = 2 ; i <= sqrt(n) ; i++){
		if(n%i==0) return 0 ; 
	}
	return 1 ; 
}

int main(){
    int n ; scanf("%d",&n) ; 
    int check = 0 ; 
    for(int i = 2 ; i <= sqrt(n) ; i++){
    	if(isprime(i)){
    		while(n%i==0){
    			printf("%d",i) ;  
    			n /= i ; 
    			if(n != 1) printf("x") ;
			}
		}
	}
	if(isprime(n)) {
		if(check) printf("x") ; 
		printf("%d",n) ; 
	} 
    
}

