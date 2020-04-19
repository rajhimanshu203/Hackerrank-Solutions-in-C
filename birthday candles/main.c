#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    int count =0;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>max){
        max = arr[i];
        }
    }
    for(i=0;i<n;i++){
        if(arr[i]==max){
        count++;
        }
    }
    printf("%d",count);
    return 0;
}
