#include <stdio.h>
int main(){
    int n,i,num,count=0;
    printf("Enter number of elements in the array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter Elements:");
        scanf("%d",&a[i]);
    }
    printf("Enter a number to find the occurances:");
    scanf("%d",&num);
    for(i=0;i<n;i++){
        if(a[i]==num){
            count++;
        }
    }
    printf("%d present %d times.",num,count);
    return 0;
}