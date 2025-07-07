#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define MAX 1000005

void solve(){
	int n ; scanf("%d",&n) ; 
	int a[n] , cnt = 0  ; 
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&a[i]) ; 
	} 
	for(int i = 0 ; i < n - 1 ; i++){
		if(a[i] == a[i+1]) cnt++ ; 
	}
	printf("%d\n",cnt) ; 
} 

int main(){ 
    int t ; scanf("%d",&t) ; 
    while(t--){
    	solve() ; 
	}
}

