#include<stdio.h>

int main(){
    int arr[5] = {1,2,3,4,5}, sum=0,n=5;
    printf("Array Elements... \n");
    for(int i=0;i<n;i++){
        if(!arr[i]%2) 
            sum+=arr[i];
        printf("%d ",arr[i]);
    }
    printf("sum(of even no.s) = %d",sum);
    return 0;
}