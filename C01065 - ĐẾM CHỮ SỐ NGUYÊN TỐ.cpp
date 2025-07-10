#include<stdio.h>
#include<string.h>

int main() {
    char s[20];
    scanf("%s", s);
    int len = strlen(s);
    int cnt[10] = {0} ; 
    int tt[10] ={0} , idx = 0 ; 
    for(int i = 0 ; i < len ; i++){
    	int d = s[i] - '0' ; 
    	if(d==2 || d== 3 || d == 5 || d== 7){
    		cnt[d]++ ; 
    		int check = 0 ; 
    		for(int j = 0 ; j < idx ; j++){
    			if(tt[j]==d) check = 1 ; 
			}
			if(!check) tt[idx++] = d ; 
		}
	}
	for(int i = 0 ; i < idx ; i++){
		printf("%d %d\n",tt[i],cnt[tt[i]]) ; 
	}
}
