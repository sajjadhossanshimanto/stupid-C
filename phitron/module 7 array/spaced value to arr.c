// # include <stdio.h>

// int main(){
//     int n, i;

//     n = 5;
//     int arr[n];

//     i = 0;
//     do{
//         scanf("%d", &arr[i]);
//         i++;
//     }while(getchar()!='\n' and i<n);

//     return 0;
// }




// source : https://www.geeksforgeeks.org/c-program-to-input-an-array-from-a-sequence-of-space-seperated-integers/
// C program for the above approach
#include <stdio.h>

// Driver Code
int main()
{
	int count = 0;
	int a[5];

	do {
		scanf("%d", &a[count++]);
	} while (getchar() != '\n' && count < 100);

	// Resize the array size to count
	a[count];

	// Print the array elements
	for (int i = 0; i < count; i++) {
		printf("%d, ", a[i]);
	}

	return 0;
}
