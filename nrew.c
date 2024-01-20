#include <stdio.h>
int main() {
    int n,k,count=0;
    int a[99];
    scanf("%d %d",&n,&k);
    if(n>=k){
        for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++){
       if(a[i]<a[i+1]){
        return 0;
       }
    }
    for(int i=0;i<n;i++){

            if(a[i]>=a[k-1] && a[i]>0){
        count++;
       }

    }
    printf("%d",count);
    }
return 0;
}
