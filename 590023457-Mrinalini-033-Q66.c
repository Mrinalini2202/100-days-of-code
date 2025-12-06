#include <stdio.h>
int main(void){
    int n,x,i,j;
    printf("Enter size: ");
    scanf("%d",&n);
    int a[n+1];
    printf("Enter sorted array: ");
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Enter element to insert: ");
    scanf("%d",&x);

    for(i=0;i<n;i++){
        if(a[i]>x) break;
    }
    for(j=n;j>i;j--) a[j]=a[j-1];
    a[i]=x; n++;

    printf("Array after insertion: ");
    for(i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}