#include<stdio.h>
#include<stdbool.h>

int main(){

    printf("Enter the number of elements of the array: ");
    int n;
    scanf("%d",&n);

    int arr[n];

    printf("Enter the array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    bool sorted =false;
    bool hi=true;

    int x,y;

    while(!sorted){
        hi=true;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                x=arr[i];y=arr[i+1];
                arr[i]=y;arr[i+1]=x;
                hi=false;
            }
        }

        if(hi){
            sorted=true;
        }
    }

    printf("The sorted array is: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
