//time=O(n);Space=O(1);
#include<stdio.h>
int main(){
int i,x=0,n,c=0;
printf("Enter the limit of the array\n");
scanf("%d",&n);
int a[n];
printf("Enter the elements\n");
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
for(i=0;i<n;i++){
    x^=a[i];
}
printf("%d",x);
return(1);
}
