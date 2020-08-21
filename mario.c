#include <stdio.h>
#include <cs50.h>

// Purpose: To print # in a half pyramid format

int main(void)
{

// defines variables to build the pyramid
    int height, i, dots, hashcolumn;



    do

    {
        printf("Please enter height:  \n"); // asks user to input height

        scanf("%i", &height); // stores the user input as a variable called height to be called in generating the pyramid.

  



    }
    while (height < 1
           || height > 8); // sets the value range the user can input for height,
    //if while(false) occurs, the do loop replays prompting user input

    for (i = 1; i <= height; i++)   // creates the y axis length based of user input for height

    {

        for (dots = (height - i); dots >= 1; dots --)

            // loop to create the  dots, it substracts one dot on each row meaning one less dot
            //as the rows increase, moving the pyramid at a right slant.

        {

            printf(" "); // prints whitespace instead of dots on each row for clarity.

        }


        for (hashcolumn = 1; hashcolumn <= i; hashcolumn++)
        {
             printf("#");  // creates a number of #  based on the height input. The number of # are dependant on the row number (i).



        }
        printf("\n"); // starts a new line for each row.
}

}