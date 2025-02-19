 #include <stdio.h>

int main() {
    int num;

    // Get user input
    printf("Enter a positive integer: ");
    scanf("%d", &num);



    printf("Initial value is %d\n", num);

    // Process sequence using do-while loop
    do {
        if (num % 2 == 0) {
            num /= 2;
            printf("Next value is %d\n", num);// Halve if even
        } else {
            num = num * 3 + 1;
            printf("Next value is %d\n", num);// Multiply by 3 and add 1 if odd
        }


    } while (num != 1);  // Continue until number becomes 1

    // Print final result


    return 0;
}
