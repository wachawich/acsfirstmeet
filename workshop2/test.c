#include <stdio.h>
#include <stdlib.h>

int compareDescending(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int main() {
    int numarray = 9;
    int numbers[numarray];

    qsort(numbers, 9, sizeof(int), compareDescending);
    
    for (int insert = 0; insert <= numarray; insert++){
        scanf("%d",&numbers[insert]);
    }
    printf("Array after sorting :\n");
    for (int i = 0; i <= 9; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
