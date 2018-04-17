#include <stdio.h>
main()
{

    FILE *myFile;
    myFile = fopen("rotors", "r");

    //read file into array
    int numberArray[336];
    int i;

    for (i = 0; i < 336; i++)
    {
     fscanf(myFile, "%1d", &numberArray[i]);
    }

    for (i = 0; i < 336; i++)
    {
        printf("Number is: %d\n\n", numberArray[i]);
    }


}