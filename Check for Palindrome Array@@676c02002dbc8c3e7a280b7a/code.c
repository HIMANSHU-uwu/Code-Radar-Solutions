// Your code here...
#include <stdio.h>
int main()
{
    int n,rem=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n/2;i++){
        if(arr[i]==arr[n-i]){
            if(i==(n/2)-1){
                printf("YES");
            }
            else{
            continue;}
        }
        else{
            printf("NO");
            break;
        }
        
    }
}