#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define ll long long

void Sort(int a[] , int n){
	for(int i = 0 ; i < n - 1 ; i++){
		for(int j = i + 1 ; j < n ; j++){
			if(a[i]>a[j]){
				int tmp = a[i] ; 
				a[i] = a[j] ; 
				a[j] = tmp ; 
			}
		}
	}
}

void solve(){
	
	int n ; scanf("%d",&n) ; 
	int a[n] , chan[n] , le[n] ; 
	int idx1 = 0 , idx2 = 0 ; 
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&a[i]) ; 
		if(a[i]%2==0) chan[idx1++] = a[i] ; 
		else le[idx2++] = a[i] ; 
	}
	Sort(chan,idx1) ; Sort(le,idx2) ; 
	for(int i = 0 ; i < idx1 ; i++) printf("%d ",chan[i]) ; 
	for(int i = 0 ; i < idx2 ; i++) printf("%d ",le[i]) ; 
}

int main() {
    solve() ; 
}

