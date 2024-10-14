// sajjad hossan shimanto
// 24044017

# include <stdio.h>


int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int count=0, t=n;
    for (; t!=0; t/=10){
        count++;
    }
    printf("number of digits is: %d\n", count);


    int reversed_num=0;
    do{
        reversed_num*=10;
        reversed_num+=n%10;
        n/=10;
    }
    while(n!=0);
    printf("reversed number is: %d", reversed_num);


    return 0;
}
