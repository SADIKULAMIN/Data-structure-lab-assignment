
#include<stdio.h>
//#include<stdbool.h>

int main(){
    int arr[10];
    int i, n, x;
    //bool found;
    printf("Enter length of array: ");
    scanf("%d", &n);
    printf("Enter values of array: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("\nEnter value you want to find: ");
    scanf("%d", &x);
    for(i=0; i<n; i++){
        if(x==arr[i]){
            //found=1;

            printf("\nFound!");
            exit(0);
        }
    }
    printf("\nNot Found!");

    return 0;
}
