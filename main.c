#include <stdio.h>
#define SIZE1 5
#define SIZE2 3

void Sort(double Array[], int Size);
void Sum(double one[],int Size1, double two[], int Size2,double Three[]);

int main() {

    double Array_1[SIZE1];
    double Array_2[SIZE2];
    double Array_3[SIZE1+SIZE2];

    printf_s("%s","\n Enter Array_1 Numbers => ");
    for (int i = 0; i < SIZE1; ++i) {
        scanf_s("%lf",&Array_1[i]);
    } //scan Array 1
    printf_s("%s","\n Enter Array_2 Numbers => ");
    for (int i = 0; i < SIZE2; ++i) {
        scanf_s("%lf",&Array_2[i]);
    } // scan Array 2


    printf_s("%s","\n** Array 1 **\n");
    for (int i = 0; i < SIZE1; ++i) {
        printf_s("%.2f ",Array_1[i]);
    } // Print Array 1
    printf_s("%s","\n** Array 2 **\n");
    for (int i = 0; i < SIZE2; ++i) {
        printf_s("%.2f ",Array_2[i]);
    } // Print Array 2

    Sum(Array_1, SIZE1, Array_2, SIZE2, Array_3);//Sum Array 1 & 2
    puts("\nArray 3");
    for (int i = 0; i < (SIZE1+SIZE2); ++i) {
        printf_s("%.2f ",Array_3[i]);
    } // Print Array 3
    Sort(Array_3, (SIZE1+SIZE2));
    puts("\nArray 3 Sorted");
    for (int i = 0; i < (SIZE1+SIZE2); ++i) {
        printf_s("%.2f ",Array_3[i]);
    } // Print Array 3
    return 0;
}
void Sum(double one[],int Size1, double two[], int Size2,double Three[]){
    for (size_t i = 0; i <Size1; ++i) {
        Three[i] = one[i];
    }
    for (int i = Size1; i < (Size1+Size2); ++i) {
        Three[i] = two[i - Size1];
    }
}
void Sort(double Array[], int Size){
    double hold;
    for (int i = 1; i < Size; ++i) {
        for (int j = 0; j < Size-1; ++j) {
            if(Array[j] > Array[j+1]){
                hold = Array [j];
                Array[j] = Array[j+1];
                Array [j+1] = hold;
            }
        }
    }
}