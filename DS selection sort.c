#include <stdio.h>

int main() {
int a[6]={7,29,5,6,1,0},i,j,min;
for(i=0;i<6;i++){
    min=i;
    for(j=i+1;j<6;j++){
        if(a[j]<a[min]){
            min=j;
        }
    }
    int temp=a[i];
    a[i]=a[min];
    a[min]=temp;
}
for(i=0;i<6;i++){
    printf("%d ",a[i]);
}
return 0;
}

