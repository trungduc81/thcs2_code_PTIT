#include<stdio.h>
#define ll long long

ll fibo[92] ;  

int fi(){
	fibo[0] = 0 ; fibo[1] = 1 ;  
	for(int i = 2 ; i < 92 ; i++){
		fibo[i] = fibo[i-1] + fibo[i-2] ; 
	}
}

int main() {
    int a ; scanf("%d",&a) ; 
    fi() ; 
    int cnt = 0 ; 
    for(int i = 0 ; i < 92 ; i++){
    	printf("%d ",fibo[i]) ; 
    	cnt++ ; 
    	if(cnt==a) break ; 
	}
}

