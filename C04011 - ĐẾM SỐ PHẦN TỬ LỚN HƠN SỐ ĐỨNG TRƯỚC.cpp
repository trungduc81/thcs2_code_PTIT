#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define MAX 1000005

int check(int a[] , int n , int i){
	for(int j = 0 ; j < i ; j++){
		if(a[j] > a[i]) return 0 ; 
	}
	return 1 ; 
}

void solve(){
	int n ; scanf("%d",&n) ; 
	int a[n] ;
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&a[i]) ; 
	}
	int cnt = 0 ; 
	for(int i = 0 ; i < n ; i++){
		if(check(a,n,i)) cnt++ ;  
	} 
	printf("%d\n",cnt) ; 
} 

int main(){ 
    int t ; scanf("%d",&t) ; 
    while(t--){
    	solve() ; 
	}
}

