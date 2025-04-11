// Your code here...
#include <stdio.h>
int main()
{
    int n,e[25],f=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            e[f]=arr[i];
            f++;
        }
    }
    if(f>0){
    printf("%d",f);
    }
    else{
        printf("-1");
    }

}