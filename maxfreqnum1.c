//Time=O(n^2);Space=O(1);
#include<stdio.h>
int main(){
int i,j,n,c,max=0,maxNum=0;
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
for(i=0;i<n-1;i++){
    c=0;
    for(j=i+1;j<n;j++){
        if(a[i]==a[j])
            c++;
    }
    if(c>max){
        max=c;
        maxNum=a[i];
    }
}
printf("Most repeated element: %d",maxNum);
return(1);
}
