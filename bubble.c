#include <stdio.h>

int bubble_sort(int array[], int size);
int main(void)
{
    int list[] = {  61,	 10, 36, 63,  4, 28, 45,  1, 41, 44,
                    17,	 24, 37, 69, 90, 68, 20, 29, 77, 85,
                    35,	 94, 76, 89,  9, 84, 56, 22, 95, 82,
                    42,	 71, 13, 26, 100,60, 11, 15, 99, 18,
                    59,	 97,  3, 48, 98, 79, 30, 19, 21,  5,
                    40,	  7, 38, 25, 58, 57,  8, 93, 54, 70,
                    75,	 73,  2, 88, 62, 83, 52, 80, 78, 47,
                    50,	 14, 74, 86, 43, 67, 27, 81, 65, 39,
                    72,	 46, 92, 87, 66, 6,  96, 33, 55, 51,
                    64,	 34, 53, 12, 32, 16, 49, 23, 31, 91};
    
    int len = sizeof(list)/sizeof(list[0]);
    
    bubble_sort(list, len);
    for (int i = 0; i < len; i++)
        printf("%d ", list[i]);
}
int bubble_sort(int array[], int size)
{
    
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++){
        if(array[j] > array[j + 1])
        {
            int temp = array[j];
            array [j] = array[j + 1];
            array[j + 1] = temp;
        }
        }
    }
}

