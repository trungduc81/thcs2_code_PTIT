#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
#define ll long long


int check(int n){
	int sum = 0 , k = n ; 
	while(n>0){
		int m = n % 10 ; 
		if(m==9) return 0 ; 
		sum = sum*10 + m ; 
		n /= 10 ; 
	}
	return sum == k ; 
}
void solve(){
	int n ; scanf("%d",&n) ; 
	int cnt = 0 ; 
	for(int i = 2 ; i < n ; i++){
		if(check(i)) {
			printf("%d ",i) ; 
			cnt++ ; 
		}
	}
	printf("\n%d",cnt) ; 
}

int main(){
	solve() ; 
}



