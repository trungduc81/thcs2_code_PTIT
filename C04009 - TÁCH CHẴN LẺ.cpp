#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define MAX 1000005

void solve(){
	int n ; scanf("%d",&n) ; 
	int a[n] , chan[n] , le[n] ; 
	int c= 0 , l = 0 ; 
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&a[i]) ; 
		if(a[i]%2==0) chan[c++] = a[i] ; 
		else le[l++] = a[i] ; 
	}
	for(int i = 0 ; i < c ; i++) printf("%d ",chan[i]) ; 
	printf("\n") ; 
	for(int i = 0 ; i < l ; i++) printf("%d ",le[i]) ; 
} 

int main(){ 
    solve() ; 
}

