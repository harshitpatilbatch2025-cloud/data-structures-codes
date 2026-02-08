#include <stdio.h>

int main() {
	int a[5]={2,3,5,9,10},n,key;
	int found=0;
	int low,high,mid;
   scanf("%d",&key);
   low=0;
   high=4;
   while(low<=high){
       mid = (low+high) / 2;
       
       if(a[mid] == key){
           printf("the number is found at %d",mid);
           found = 1;
           break;
       }
       else if(a[mid] < key){
           low = mid + 1;
       }
       else{
           high = mid - 1;
       }
   }
	if(found == 0){
	    printf("%d not found",key);
	}
	return 0;
}

