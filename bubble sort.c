#include <stdio.h>

int main() {
	int a[6]={4,7,1,3,10,2},i,j;
	for(i=0;i<6-1;i++){
	    for(j=0;j<6-i-1;j++){
	        if(a[j]>a[j+1]){
	            int temp = a[j];
	            a[j]=a[j+1];
	            a[j+1]=temp;
	        }
	    }
	}
 for(i=0;i<6;i++){
     printf("%d ",a[i]);
 }
 return 0;
}

