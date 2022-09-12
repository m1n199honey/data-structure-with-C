#include<stdio.h>

int removerepeated(int size,int a[]){
   int i,j,k;
   for(i=0;i<size;i++){
      for(j=i+1;j<size;){
         if(a[i]==a[j]){
            for(k=j;k<size;k++){
               a[k]=a[k+1];
            }
            size--;
         }else{
            j++;
         }
      }
   }
   return(size);
}




int main(){
    int a[5] = {1,2,3,4,5},
        b[5] = {4,5,6,7,8},
        c[15],
        m=5,
        n=5,i,j;
    printf("Array Elements... \n");
    for(int i=0;i<m;i++)
        printf("%d ",a[i]);
    printf("\n");

    for(int i=0;i<n;i++)
        printf("%d ",b[i]);
    printf("\n");

    for(i=0;i<m;i++){
        c[j]=a[i];
        j++;
    }
    for(i=0;i<n;i++){
        c[j]=b[i];
        j++;
    }
    n=removerepeated(m+n,c);
    for(int i=0;i<n;i++)
        printf("%d ",c[i]);
    
    return 0;
}