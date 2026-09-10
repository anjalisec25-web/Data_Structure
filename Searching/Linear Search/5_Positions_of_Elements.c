# include <stdio.h>
int main(){
    int n,i,num;
    printf("Enter number of elements in the Array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter numbers:");
        scanf("%d",&a[i]);
    }
    printf("Enter NUmber to find its positions:");
    scanf("%d",&num);
    for(i=0;i<n;i++){
        if(a[i]==num){
            printf("%d ",i);
        }
    }
    return 0;
}