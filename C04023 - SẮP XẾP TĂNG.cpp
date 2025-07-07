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

void solve(){
	int n ; scanf("%d",&n) ; 
	int a[n] ; 
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&a[i]) ; 
	} 
	for(int i = 0 ; i < n - 1 ; i++){
		for(int j = i + 1 ; j < n ; j++){
			if(a[i] > a[j]) swap(&a[i],&a[j]) ; 
		}
	} 
	for(int i = 0 ; i < n ; i++) printf("%d ",a[i]) ; 
} 

int main(){ 
    solve() ; 
}

