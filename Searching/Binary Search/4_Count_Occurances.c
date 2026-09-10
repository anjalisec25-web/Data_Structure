#include <stdio.h>
int main(){
    int n,i,high,mid,low,count=0,num=0,f=-1,l=-1;
    printf("Enter number of elements in the Array:");
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
            f=mid;
            high=mid-1;
        }
        else if(a[mid]>num){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    low=0;
    high=n-1;
    while(low<=high){
        mid=(high+low)/2;
        if(a[mid]==num){
            l=mid;
            low=mid+1;
        }
        else if(a[mid]>num){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    if(f==-1){
        printf("Element Not found");
    }
    else{
        count=l-f+1;
        printf("%d",count);
    }
    return 0;
}