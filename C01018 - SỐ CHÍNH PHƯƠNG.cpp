#include<stdio.h>
#include<math.h>
#define ll long long

int main(){
	int t ; scanf("%d",&t) ; 
	while(t--){
		int n ; scanf("%d",&n) ; 
        if(sqrt(n) == (int) sqrt(n)){
        	printf("YES\n") ; 
	    }
	    else printf("NO\n") ; 
    }
	return 0 ; 
}
