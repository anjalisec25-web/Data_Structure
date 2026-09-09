#include <stdio.h>
int main(){
    int n,i,s;
    printf("Enter Number of elements in the array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter number:");
        scanf("%d",&a[i]);
    }
    printf("Enter element to be searched:");
    scanf("%d",&s);
    for(i=0;i<n;i++){
        if(a[i]==s){
            printf("Element %d is found in index %d.",s,i);
            return 0;
        }
    }
    printf("Element Not found.");
    return 0;
}