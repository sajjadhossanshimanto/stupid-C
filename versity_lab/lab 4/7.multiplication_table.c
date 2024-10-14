// sajjad hossan shimanto
// 24044017

# include <stdio.h>

int main()
{
    int n;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &n);

        for (int i=1; i<=10; i++)
        {
            printf("%d*%d = %d\n", n, i, n*i);
        }
    }
    while(1);


    return 0;
}
