#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

int main(){
	char s[200] ; 
	gets(s) ; 
	char *token = strtok(s," ") ; 
	char a[100][100] ; 
	int idx = 0 ; 
	while(token != NULL){
		int check = 0 ; 
		for(int i = 0 ; i < idx ; i++){ 
			if(strcmp(a[i],token)==0){
				check = 1 ; 
				break ; 
			}
		}
		if(!check) strcpy(a[idx++],token) ; 
		token = strtok(NULL , " ") ; 
	}
	for(int i = 0 ; i < idx ; i++){
		printf("%s ",a[i]) ; 
	}
}
