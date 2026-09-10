#include <stdio.h>
int main(){
    int i,n,count=0,j;
    printf("Enter number of elements in the Array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter number:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<n;j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        if(count==1){
            printf("The First non-Repeating element is %d",a[i]);
            return 0;
        }
    }
    printf("No non-repeating element found.");
    return 0;
}