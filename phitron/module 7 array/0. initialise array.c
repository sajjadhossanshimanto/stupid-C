# include <stdio.h>

int main(){
    // hard code data
    int arr[5] = {100, 200, 300, 400, 500};
    // flexible hard code 
    int arr2[] = {2, 3, 4, };

    // printf("%d", arr2[4]);// output is 200 -> gets data from another array. stupidity of c 🥴. 

    
    int arr3[5];
    // printf("%d", arr3[3]);// returns random data

    int arr4[5] = {1, 2};
    // printf("%d", arr4[3]);// default value for undefined pos is set to zero

    int arr5[5] = {1};// only 1st value will be set
    printf("%d", arr5[3]);// 

    return 0;
}