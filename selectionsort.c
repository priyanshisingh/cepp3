#include<stdio.h>
#define max 50
int main(){
int i,j,a[max],n,temp;
printf("Enter the limit of the array\n");
scanf("%d",&n);
if(n>max)
    printf("Input exceeded the expected value");
else{
printf("Enter the elements\n");
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
        if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
printf("Sorted array:\n");
for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}
return(1);
}
