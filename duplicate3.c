//Time=O(n);Space=O(n);
#include<stdio.h>
int main(){
int i,n,c=0;
printf("Enter the limit of the array\n");
scanf("%d",&n);
int a[n],b[n];
printf("Enter the elements\n");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    if(a[i]>=n){
        printf("Number entered cannot be >=limit. Enter new number.\n");
        scanf("%d",&a[i]);}
    b[i]=0;
}
for(i=0;i<n;i++)
    b[a[i]]++;
for(i=0;i<n;i++){
    if(b[a[i]]>1){
        c++;
        printf("Duplicate found");
        break;
    }
}
if(c==0)
    printf("No duplicate found");
return(1);
}
