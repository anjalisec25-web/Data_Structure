#include <stdio.h>
int main(){
    int n,i,num,found=0;
    printf("Enter number of elements in the Array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter Number:");
        scanf("%d",&a[i]);
    }
    printf("Enter Number to find:");
    scanf("%d",&num);
    for(i=0;i<n;i++){
        if(a[i]==num){
            printf("%d is in index %d.",num,i);
            found=1;
            break;
        }
    }
    if(found==0){
        printf("Element Not found.");
    }
    return 0;
}