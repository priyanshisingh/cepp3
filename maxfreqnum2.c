//Time=O(n);Space=O(1);
#include<stdio.h>
int main(){
int i,n,max;
printf("Enter the limit of the array\n");
scanf("%d",&n);
int a[n];
printf("Enter the elements\n");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    if(a[i]>=n){
        printf("Number entered cannot be >=limit. Enter new number.\n");
        scanf("%d",&a[i]);}
}
for(i=0;i<n;i++)
    a[(a[i]%n)]+=n;
for(i=0;i<n;i++)
    a[i]/=n;
max=a[0];
for(i=0;i<n;i++){
    if(max<a[i])
        max=a[i];
}
for(i=0;i<n;i++){
    if(max==a[i]){
        printf("Most repeated element: %d",i);
        break;
    }
}
return(1);
}
