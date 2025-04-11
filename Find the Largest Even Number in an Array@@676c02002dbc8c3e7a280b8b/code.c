
#include <stdio.h>
int main()
{
    int n,even=-14;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0 || arr[i]%2==-1){
            if(even<arr[i]){
            even=arr[i];}
        }
    }
    printf("%d",even);
    
    

}