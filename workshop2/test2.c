#include <stdio.h>

int main(){
    int input, i, j, max = -1000;

    for (i = 0; i < 9; i++){
        scanf("%d", &input);
        if (input > max) {
            max = input;
        }
    }

    printf("The maximum value in the matrix is: %d", max);

    return 0;
}
