// sajjad hossan shimanto
// 24044017

# include <stdio.h>
# include <math.h>

int main()
{
    int n, sum, number, count;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &number);

        //count digit
        n=number;
        count=0;
        while(n!=0)
        {
            count++;
            n/=10;
        }

        // sum
        n=number;
        sum=0;
        for(; n!=0; n/=10)
        {
            sum+=pow(n%10, count);
        }

        //check
        if(sum==number)
        {
            printf("%d is an Armstong number\n", number);
        }
        else
        {
            printf("%d is not an Armstong number\n", number);
        }
    }
    while(1);


    return 0;
}

