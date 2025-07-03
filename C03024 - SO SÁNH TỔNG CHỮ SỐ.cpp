#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define MAX 100000

ll fibo[50] ; 

int tong(int n){
	int sum =  0 ; 
	while(n>0){
		sum += n%10 ; 
		n /= 10 ; 
	}
	return sum ; 
}



void swap(int *a , int *b){
	int tmp = *a ; 
	*a = *b ; 
	*b = tmp ; 
}

int main(){
	int a , b ; scanf("%d%d",&a ,&b) ; 
	if(tong(a) > tong(b)){
		printf("%d %d",b,a) ; 
	}
	else printf("%d %d",a,b) ; 
}
