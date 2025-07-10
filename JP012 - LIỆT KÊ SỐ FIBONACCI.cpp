#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long

ll fibo[93] ; 

void fi(){
	fibo[0] = 0 ; fibo[1] = 1 ; 
	for(int i = 2 ; i < 93 ; i++){
		fibo[i] = fibo[i-1] + fibo[i-2] ; 
	}
}

int main(){
	fi() ; 
	int t ; scanf("%d",&t) ; 
	while(t--){
		int a, b ; scanf("%d %d",&a,&b) ; 
		for(int i = a ; i <= b ; i++){
			printf("%lld ",fibo[i]) ; 
		}
		printf("\n") ; 
	}
}

