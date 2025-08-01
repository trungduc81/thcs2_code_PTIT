#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {
	int cnt ; 
	int m ; 
} so ;

int check(int n){
	while(n>0){
		int a = n %10 ; 
		int b = (n/10) % 10 ; 
		if(a < b) return 0 ; 
		n /= 10 ; 
	}
	return 1 ; 
}

int cmp(const void *a , const void *b){
	so *x = (so*) a ; 
	so *y = (so*) b ; 
	return y->cnt - x->cnt ; 
}

int main(){
	so ds[10000] ; 
	int n , i = 0 ; 
	while(scanf("%d",&n) != EOF){
		if(!check(n)) continue ; 
		int f = 0 ; 
		for(int j = 0 ; j < i ; j++){
			if(n==ds[j].m) {
				ds[j].cnt++ ; 
				f = 1 ; 
				break ; 
			}
		}
		if(!f) {
			ds[i].m = n ; 
			ds[i].cnt = 1 ; 
			i++ ; 
		}
	}
	qsort(ds,i,sizeof(so),cmp) ; 
	for(int j = 0 ; j < i ; j++){
		printf("%d %d\n",ds[j].m,ds[j].cnt) ; 
	}
}

