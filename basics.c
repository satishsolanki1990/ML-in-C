#include <stdio.h> // preprocessor.
#include <string.h> // had to add for strings

// Basics of C language

int main() // return_type func_name (argument)
{
    int a = 10; // define and assign variable
    float b;
    double d = 0.2 ;
    b=0.2; // assign value
    char c = 'a'; // single charecter, SINGLE QUOUTES
    char s [] = "Hello"; // String . DOUBLE QUOTES and empty arrya size. Its static.  


    printf("printing int = %d, float = %f, double = %f",a,b,d);   // DOUBLE QUOTES print command  

    printf("\n printing single char = %c, \n string is array = %s\n",c,s);   // print command  

/*
This is block commenting. Lets see ARRAYS and there operations
*/

    int int_array [10]; // this is one dimensional array or List . index = 0 to length-1 . But not all values are initialized as 0. 

    int i;
    for (i=0; i<10; i++)
    {
        printf("Element[%d] = %d \n",i,int_array[i]); // 
    }

    // Array is big topic. covered in another .


    return 0; // since return type is int, return 0
}