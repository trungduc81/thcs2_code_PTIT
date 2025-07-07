#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define MAX 1000005


void solve(){
	int n ; scanf("%d",&n) ; 
	int a[n] , cnt[10000] = {0} ; 
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&a[i]) ; 
		cnt[a[i]]++ ; 
	} 
	int res = 0 ; 
	for(int i = 0 ; i < 10000 ; i++){
		if(cnt[i]>1) res++ ; 
	}
	printf("%d\n",res) ; 
	for(int i = 0 ; i < n ; i++){
		if(cnt[a[i]]>1){
			printf("%d ",a[i]) ; 
			cnt[a[i]] = 0 ; 
		}
	}
} 

int main(){ 
    solve() ; 
}

