# include <stdio.h>


int main(){
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        int t;
        scanf("%d", &t);
        if(t>7){
            printf("Senior candidate\n");
        }
        else if (4<=t && t<=7){
            printf("Mid-level candidate\n");
        }
        else if (1<=t && t<=3){
            printf("Junior candidate\n");
        }
        else{
            printf("Entry-level candidate\n");
        }

    }

    return 0;
}
