#include <stdio.h>
int main(){
    int i,n,num,pos=-1,found=0;
    printf("Enter number of elements in the array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter Elements:");
        scanf("%d",&a[i]);
    }
    printf("Enter Number to find its seconf occurance:");
    scanf("%d",&num);
    for(i=0;i<n;i++){
        if(a[i]==num){
            pos=i;
            found=1;
        }
    }
    if(found==0){
        printf("Element not found:");
    }
    else{
        printf("%d is in index %d",num,pos);
    }
    return 0;
}