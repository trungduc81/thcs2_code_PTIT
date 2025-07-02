#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long 

void swap(int *a , int *b){
	int tmp = *a ; 
	*a = *b ; 
	*b = tmp ; 
}

int main(){
    char s[9] ; 
    scanf("%s",s) ;
	int len = strlen(s) ;  
    int a[len] ;
    for(int i = 0 ; i < len ; i++){
    	a[i] = s[i] - '0' ; 
	}
	swap(&a[0],&a[len-1]) ; 
	if(a[0] != 0) printf("%d",a[0]) ; 
	for(int i = 1 ; i < len ; i++){
		printf("%d",a[i]) ; 
	}
}
	
    
