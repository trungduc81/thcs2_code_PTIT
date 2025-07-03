#include<stdio.h>
#include<math.h>
#define ll long long
#define MAX 100000

void swap(int *a , int *b){
	int tmp = *a ; 
	*a = *b ;
	*b = tmp ; 
}

int perfect(int n){
	if(n==1) return 0 ; 
	int sum = 1 ; 
	for(int i =2 ; i <= sqrt(n) ; i++){
		if(i*i==n) {
			sum += i ;
			break ; 
		}
		if(n%i==0) sum = sum + n/i + i ; 
	}
	if(sum==n) return 1 ; else return 0 ; 
}

int main(){
	int a,b ; scanf("%d%d",&a,&b) ; 
	if(a > b) swap(&a,&b) ; 
	for(int i = a ; i <= b ; i++){
		if(perfect(i)) printf("%d ",i) ; 
	}
}

