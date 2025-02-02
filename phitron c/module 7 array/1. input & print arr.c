# include <stdio.h>

int main(){

    int arr[5];

    // input array
    for (int i=0; i<5; i++){
        scanf("%d", &arr[i]);
        // why does it won't work with "%d "
    }


    // print array
    for (int i=0; i<5; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}

// #include<stdio.h>
// int main()
// {
//     int ar[5];
//     for(int i=0;i<5;i++)   // এরে ইনপুট
//     {
//         scanf("%d",&ar[i]);
//     }
//     for(int i=0;i<5;i++)    // এরে আউটপুট 
//     {
//         printf("%d\n",ar[i]);
//     }
//     return 0;
// }
