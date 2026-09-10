#include <stdio.h>
int main(){
    int n,i,high,low,mid,ans=-1,num;
    printf("Enter Number of elements in the array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter Nunbers:");
        scanf("%d",&a[i]);
    }
    printf("Enter Number to find:");
    scanf("%d",&num);
    low=0;
    high=n-1;
    while(low<=high){
        mid=(high+low)/2;
        if(a[mid]==num){
            ans=mid;
            high=mid-1;
        }
        else if(a[mid]>num){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    if(ans==-1){
        printf("Element not found");
    }
    else{
        printf("%d is in index %d",num,ans);
    }
    return 0;
}