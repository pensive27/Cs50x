#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int main (int argc, char *argv[])
{
    // makes sure that argc is only 2 inputs
    if (argc == 2)
    {
        // converts key, what the user inputs on index, from char to int
        int key = atoi(argv[1]);
        // for use of checking if style is correct
        bool validkey = false; // sets validkey to 0 (false)

        // check validity of the key
        for (int i = 0; i < strlen(argv[1]); i++) // goes over index
        { // strlen splits the word in letters, so we check each letter
        // in this case it only prints the first index as 0 is less than 1
  
            if (isdigit(argv[1][i])) // to make sure at index 1 is
            // digit only WORKS ON CHARS NOT STRINGS
            {
                validkey = true; // if so vlaidkey =1 and becomes true
            }
            // if all else fails and there is no digit on index 1,
            // or if there is more than 2 inputs
            else
            {
                printf("Usage ./caesar key\n");
                return 1;
            }
        }

        // check for upper and lower case letters and apply the formula
        if (validkey == true)// so we can now use that variable  here
        {
            char plaintext[100];// create an array that allows up to 
            //100 char for user input
            printf("plaintext: ");
            fgets(plaintext, sizeof(plaintext), stdin);

            for (int i = 0; i < strlen(plaintext); i++)
            // check every single letter from 0 to length of plaintext 100
            { 
                if (isupper(plaintext[i])) 
                // if anything in any index in the text is uppercase
                { // turns it into ascii to use code
                //ci = (pi + k) % 26
                    plaintext[i] = ((plaintext[i] - 65 + key) % 26) + 65;
                    
                } // works for uppercase as A=65 so loops back to 65
                
                
              
                else if (islower(plaintext[i])) // if lower
                {
                    plaintext[i] = ((plaintext[i] - 97 + key) % 26) + 97;
                } // a=97
            }
            printf("ciphertext: %s", plaintext); // show the text above
        }
    }
    
    else // if there is no upper case nor lower case text
    {
        printf("Usage ./caesar key\n");
        return 1;
    }
}