#include <stdio.h>
int main(){
    int i,n,low,high,mid,num;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter number:");
        scanf("%d",&a[i]);
    }
    printf("Enter number to be find:");
    scanf("%d",&num);
    low=0;
    high=n-1;
    while(low<=high){
        mid=(high+low)/2;
        if(a[mid]==num){
            printf("%d is found at index %d",num,mid);
            return 0;
        }
        else if(a[mid]>num){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    printf("Element Not found.");
    return 0;
}