# include <stdio.h>


void reverse_int(int n){
    printf("%d ", n%10);
    if (n>9){
        reverse_int(n/10);
    }
}

void print_int(int n){
    int p = n%10;
    if (n>9){
        print_int(n/10);
    }
    printf("%d ", p);

}

int main(){

    int n = 1234;
    // reverse_int(n);
    print_int(n);
    return 0;
}