# include <stdio.h>


int main(){
    int n;
    int a[5];

    // terminal input 
    // scanf("%d", &a[0]);

    // with loop
    for(int i=0; i<5; i++){
        scanf("%d", &a[i]);
    }
    
    printf("element is :%d", a[2]);
    // // print
    // for(int i=0; i<5; i++){
    //     printf("%d ", a[i]);
    // }

    return 0;
}