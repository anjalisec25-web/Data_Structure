#include <stdio.h>
int main(){
    int n,i,mid,low,high,num,ans=-1;
    printf("Enter Number of elements in the array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter Numbers:");
        scanf("%d",&a[i]);
    }
    printf("Enter number to find:");
    scanf("%d",&num);
    low=0;
    high=n-1;
    while(low<=high){
        mid=(high+low)/2;
        if(a[mid]==num){
            ans=mid;
            low=mid+1;
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
        printf("%d is in Index %d",num,ans);
    }
    return 0;
}