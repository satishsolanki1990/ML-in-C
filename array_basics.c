#include <stdio.h>
#include <stdlib.h>

// void printSizeOf(int *intArray,float *arrayTwo);
// void TwoDimArray(int *size, float *arrayTwo);
void array_vec(int *size, float *mat , float *vec, float *res_vec);

int main()
{
    // int array_one[] = {1,2,3,4,5};
    int i;
    float vec[5] = {1,2,3,4,5};
    float array_one[] = {{1,1,1,1,1},{0,0,0,0,0},{1,2,3,4,5}};
    int size[] = {3,5};

    float res_vec[3];

    int r,c;

    for (r=0;r<size[0];r++)
    {
        res_vec[r] = 0.0; 
        for (c=0;c<size[1];c++)
        {
            printf("\nIN : %d, %d , %f\n", r,c,array_one[r*size[1]+c]);
        }
    }
    // printf("BEFORE MULTIPLICATION \n ");
    // for (i=0; i<5;i++)
    // {
    //     printf("%f\n",res_vec[i]);
    // }

    // array_vec(size,array_one,vec,res_vec);

    // printf("\n After MULTIPLICATION \n ");
    // for (i=0; i<5;i++)
    // {
    //     printf("%f\n",res_vec[i]);
    // }

    // float array_two [3][4];
    // printf("sizeof of array: %f\n", (float) sizeof(array_one));
    // int column = sizeof(array_two[0])/sizeof(array_two[0][0]);
    // int row = sizeof(array_two) / sizeof(array_two[0]);

    // printf("sizeof of 2D array: [%d , %d]\n", row,column);

    // int size[2] = {row,column};

    // printf("Length of array: %f\n", (float)( sizeof(array_one) / sizeof(array_one[0]) ));
    // printf(" size(int*) = %f\n", (float) sizeof(int*) );
    // printf(" size(array[0]) = %f\n", (float) sizeof(array_one[0]));
    // printSizeOf(array_one,array_two);
    // TwoDimArray(size,array_two);
    return 0;
}


// void printSizeOf(int *intArray, int *arrayTwo)
// {
//     printf("IN sizeof of parameter: %f\n", (float) sizeof(intArray));
//     printf("IN Length of parameter: %f\n", (float)( sizeof(intArray) / sizeof(intArray[0])));
//     printf("IN size(int*) = %f\n", (float) sizeof(int*));
//     printf("IN size(array[0]) = %f\n", (float) sizeof(intArray[0]));

//     int column = sizeof(arrayTwo[0])/sizeof(arrayTwo[0][0]);
//     int row = sizeof(arrayTwo) / sizeof(arrayTwo[0]);

//     printf("sizeof of 2D array: [%d , %d]\n", row,column);
// }

// void TwoDimArray(int *size, float *arrayTwo)
// {
//     printf("size = [%d , %d] ", size[0], size[1]);
// }

void array_vec(int *size, float *mat , float *vec, float *res_vec)
{
    int r,c;

    for (r=0;r<size[0];r++)
    {
        res_vec[r] = 0.0; 
        for (c=0;c<size[1];c++)
        {
            printf("\nIN : %d, %d , %f\n", r,c,mat[r*size[1]+c]);
            res_vec[r] = res_vec[r] + mat[r*size[1]+c]*vec[c]; 
        }
    }

}
