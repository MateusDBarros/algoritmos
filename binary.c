#include <stdio.h>

int binary_search(int array[], int left, int element, int right);

int main(void)
{
    int list[] = {  2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24,
                    26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46,
                    48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68,
                    70, 72, 74, 76, 78, 80, 82, 84, 86, 88, 90,
                    92, 94, 96, 98, 100};

    int index = binary_search(list, 0, 96, 49);

    printf("The index of the number 96 is: %d", index);



}

int binary_search(int array[], int left, int element, int right)
{
    int mid = left + (right - left) / 2;

    if (array[mid] == element)
        return mid;
    
    if(array[mid] > element)
        return binary_search(array, left, element, mid - 1);

    else
        return binary_search(array, mid + 1, element, right);
}