#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define ll long long

int cnt[30005] ; 

void solve(){
	memset(cnt,0,sizeof(cnt)) ; 
	int n ; scanf("%d",&n) ; 
	int a[n] ; 
	int  max_cnt = 0 ; 
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&a[i]) ; 
		cnt[a[i]]++ ;
	}
	for(int i = 0 ; i < 30005 ; i++){
		if(max_cnt < cnt[i]) max_cnt = cnt[i] ; 
	}
	for(int i = 0 ; i < n ; i++){
		if(cnt[a[i]] == max_cnt) {
			printf("%d ",a[i]) ; 
			cnt[a[i]] = 0 ; 
		}
	}
	printf("\n") ; 
}

int main() {
    int t; scanf("%d", &t);
    while (t--){
    	solve() ; 
	}
}

