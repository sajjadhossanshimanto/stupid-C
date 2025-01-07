# include <stdio.h>


int main(){
    int arr[3] = {100, 200, 300};

    // int *p = &arr;// wrong
    int *p = arr;// no need of &

    printf("address -> %d %d\n", &arr, p);// p itself is a address no need of &

    printf("%d\n", *p);// p address points to 1st index
    
    // pointer supports addition.
    p = p+1;
    printf("%d\n", *p);
    printf("%d\n", *(p+1));

    return 0;
}