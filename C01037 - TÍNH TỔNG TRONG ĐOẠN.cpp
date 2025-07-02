#include<stdio.h>
#include<math.h>
#define ll long long 

void swap(int *a , int *b){
	int tmp = *a ; 
	*a = *b ; 
	*b = tmp ; 
}

int main(){
    int a , b ; scanf("%d %d" , &a , &b) ; 
    int sum = 0 ; 
    if(a>b) swap(&a,&b) ; 
    for(int i = a ; i <= b ; i++){
    	sum += i ; 
	}
	printf("%d",sum) ; 
}
