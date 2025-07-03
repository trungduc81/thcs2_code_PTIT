#include<stdio.h>
#include<math.h>
#define ll long long
#define MAX 100000

int perfect(int n){
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
	int n ; scanf("%d",&n) ; 
	for(int i = 2 ; i < n ; i++){
		if(perfect(i)) printf("%d ",i) ; 
	}
}

