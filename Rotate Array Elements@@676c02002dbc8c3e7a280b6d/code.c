#include<stdio.h>
void reverse(int arr[],int start,int end){
    while(start<end){
        int temp;
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int rotate(int arr[],int n,int k){
    k=k%n;
    if(k==0){
        return 0;
    }
    else{
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    }

}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    rotate(arr,n,k);
    for(int j=0;j<n;j++){
        printf("%d\n",arr[j]);
    }

}