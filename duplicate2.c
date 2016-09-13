//Time=O(n);Space=O(1);
#include<stdio.h>
int num(int);
int main(){
int i,n,c=0,d=-1;
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
for(i=0;i<n;i++){
    if(a[abs(a[i])]<0){
            c++;
            break;
    }
    else if(a[abs(a[i])]==0)
        d++;
    else
        a[abs(a[i])]*=-1;

}
if(c==0&&d<=0)
    printf("No duplicate found");
else
    printf("Duplicate(s) found");
return(1);
}
int abs(int num){
if(num<0)
num*=-1;
return num;
}
