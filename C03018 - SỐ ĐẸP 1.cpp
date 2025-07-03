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

void fi(){
	fibo[0] = 0 ; fibo[1] = 1 ; 
	for(int i = 2 ; i < 50 ; i++){
		fibo[i] = fibo[i-1] + fibo[i-2] ;
	}
}

int isprime(int n){
	if(n<2) return 0 ; 
	for(int i = 2 ; i <= sqrt(n) ; i++){
		if(n%i==0) return 0 ; 
	}
	return 1 ; 
}

void swap(int *a , int *b){
	int tmp = *a ; 
	*a = *b ; 
	*b = tmp ; 
}

int main(){
	int a , b ; scanf("%d%d",&a ,&b) ; 
	if(a>b) swap(&a,&b) ; 
	fi() ; 
	for(int i = a ; i<= b ; i++ ){
		if(isprime(i)){
			for(int j = 0 ; j < 50 ; j++){
				if(fibo[j]==tong(i)) printf("%d ",i) ; 
			}
		}
	}
}
