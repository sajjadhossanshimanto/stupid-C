# include <stdio.h>

void func(int n){
    static int c = 1;
    if (c>n){
        return ;
    }

    printf("%d\n", c);
    c++;
    func(n);
}

void range(int x, int n){
    if (x>n){
        return ;
    }

    printf("%d\n", x);
    range(++x, n);
}

int main(){

    // func(10);
    range(1, 10);

    return 0;
}