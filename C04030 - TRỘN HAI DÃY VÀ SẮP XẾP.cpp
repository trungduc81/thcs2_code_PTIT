#include<stdio.h>
#include<stdlib.h>

int T = 1 ; 

int cmp1(const void *a , const void *b){
	return *(int*) a - *(int*) b ; 
}

int cmp2(const void *a ,const void *b){
	return *(int*) b - *(int*) a ; 
}

void solve(){
	int n ; scanf("%d",&n) ; 
	int a[n] , b[n] ; 
	for(int i = 0 ; i < n ; i++) scanf("%d",&a[i]) ; 
	for(int i = 0 ; i < n ; i++) scanf("%d",&b[i]) ; 
	qsort(a,n,sizeof(int),cmp1) ; 
	qsort(b,n,sizeof(int),cmp2) ; 
	int idx1 = 0 , idx2 = 0 ; 
	int res[2*n] ; 
	for(int i = 0 ; i < 2*n ; i++){
		if(i%2==0) res[i] = a[idx1++] ; 
		else res[i] = b[idx2++] ; 
	}
	printf("Test %d:\n",T) ; 
	for(int i = 0 ; i < 2*n ; i++) printf("%d ",res[i]) ; 
	printf("\n") ; 
	T++ ; 
}

int main(){
    int t ; scanf("%d",&t) ; 
    while(t--){
    	solve() ; 
	}
}
