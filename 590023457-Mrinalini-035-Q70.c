#include <stdio.h>
int main(void){
    int n,k,i;
    printf("Enter size: ");
    scanf("%d",&n);
    int a[n], b[n];
    printf("Enter elements: ");
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Enter k: ");
    scanf("%d",&k);
    k%=n;

    for(i=0;i<n;i++){
        b[(i+k)%n]=a[i];
    }
    printf("Rotated array: ");
    for(i=0;i<n;i++) printf("%d ",b[i]);
    return 0;
}