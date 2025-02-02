// dereferancing operator(*) -> int *a = b;
// we can apply arithmatic operator with pointer
//

# include <stdio.h>


int main(){
    int a=5;

    int *b = &a;
    printf("%d <-address\n ", b);// prints the pointer (not the data)
    printf("%d <- actual data\n", *b);// de-referancing operator

    *b=8;// any change to `b` will change actual data from `a`
    printf("%d\n", a);


    return 0;
}