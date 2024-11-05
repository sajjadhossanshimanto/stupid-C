# include <stdio.h>


int main(){
    int n, three=0, five=0;

    printf("enter aircraft number: ");
    scanf("%d", &n);

    printf("month");
    for (int i=1; i<=n; i++){
        printf(" aircraft-%d ", i);
    }
    printf("\n");

    for(int i=1; i<=12; i++){
        printf("%5d", i);
        three = i%3==0;
        five = i%5==0;
        for(int j=1; j<=n; j++){
            if (j%2==0){//even -> 3 months
                if (three){
                    printf("    yes    ");
                }
                else{
                    printf("    NO    ");
                }
            }
            else{//even -> 5 months
                if (five){
                    printf("    yes    ");
                }
                else{
                    printf("    NO    ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}