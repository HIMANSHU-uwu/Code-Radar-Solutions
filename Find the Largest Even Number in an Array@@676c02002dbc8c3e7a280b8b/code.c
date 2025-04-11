
#include <stdio.h>
int main()
{
    int n,even=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            if(even<arr[i]){
            even=arr[i];}
        }
        else{
            if(i==n-1){
                printf("-1");
            }
            else{
                continue;
            }
        }
    }
    printf("%d",v)
    
    

}