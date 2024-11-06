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

int main(){

    func(10);

    return 0;
}