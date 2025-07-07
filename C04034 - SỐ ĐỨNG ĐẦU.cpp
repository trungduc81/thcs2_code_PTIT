#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define MAX 1000005

void swap(int *a , int *b){
	int tmp = *a ; 
	*a = *b ; 
	*b = tmp ; 
}

void Sort(int a[] ,int n){
	for(int i = 0 ; i < n - 1 ; i++){
		for(int j = i + 1 ; j < n ; j++){
			if(a[i] < a[j]) swap(&a[i],&a[j]) ; 
		}
	}
}

int check(int a[] , int n , int i){
	for(int j = i + 1 ; j < n ; j++){
		if(a[i] <= a[j]) return 0 ; 
	}
	return 1 ; 
}

void solve(){
	int n ; scanf("%d",&n) ; 
	int a[n] ;
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&a[i]) ; 
	} 
	int res[1005] , idx = 0 ; 
	for(int i = 0 ; i < n ; i++){
		if(check(a,n,i)) res[idx++] = a[i] ; 
	}
	Sort(res,idx) ; 
	for(int i = 0 ; i < idx ; i++){
		printf("%d ",res[i]) ; 
	}
	printf("\n") ; 
} 

int main(){ 
    int t ; scanf("%d",&t) ; 
    while(t--){
    	solve() ; 
	}
}

