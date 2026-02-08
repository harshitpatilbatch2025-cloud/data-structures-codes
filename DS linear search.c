#include <stdio.h>

int main() {
	int n,a[5] = {1,4,5,6,7},i,key;
	int found=0;
	scanf("%d",&key);
	for(i=0;i<5;i++){
	    if(a[i] == key){
	        printf("the number is found at position %d\n",i);
	        found=1;
	        break;
	        }
	}
	if(found==0){
	    printf("%d not found",key);
	}
	return 0;
}

