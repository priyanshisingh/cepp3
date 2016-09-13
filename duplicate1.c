//time=O(n^2);Space=O(1);
#include<stdio.h>
int main(){
int i,j,n,c=0;
printf("Enter the limit of the array\n");
scanf("%d",&n);
int a[n];
printf("Enter the elements\n");
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
        if(a[i]==a[j]){
            printf("Duplicate(s) found");
                   c++;
                   break;
        }
    }
}
if(c==0)
    printf("No duplicate found");
return(1);
}
