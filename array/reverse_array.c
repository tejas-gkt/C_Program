#include<stdio.h>

int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<(n/2); i++){

        int temp = arr[i];
        arr[i]=arr[n-1-i];
        arr[n-i]=temp;
    }

    for (int j=0; j<n; j++){
    printf("%d ", arr[j]);
    }


}