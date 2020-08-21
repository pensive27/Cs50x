#include <stdio.h>

#include <string.h>

#include <stdlib.h>

#include <math.h>


int main(void) {
    char str[500]; // think of this like an array
    int alphabet = 0, i = 0, word = 0, special_characters = 0, vowels = 0;

    printf("Input the string:\n");
    fgets(str, 500, stdin); // <== issue here where I  have to input string twice for while loop to occur!

    /* Checks each character of string*/

    while (str[i] != '\0') // while there is a character and not empty space
    {

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
            str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
            str[i] == 'U') {
            ++vowels;

        } else if ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t')) { // if there is not space, tab or enter, then logically there is a word
            word++; // after not finding a space it is told to look for next one
        } else if ((str[i] == '?' || str[i] == '!' || str[i] == '.')) // looks for sentance enders
        {
            special_characters++; // keeps going until text ends
        } else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            // only  i is just a counter of each letter in
            // this case. alphabet is told to increase

            alphabet++; // made this a loop that goes onto next letter

        }

        i++; //  tells i to scan over ALL if loops by being INSDIE the while loop but not
        // part of the IF statements!

    }

    //L = Letters ÷ Words × 100 = 639 ÷ 119 × 100 ? 537

    //S = Sentences ÷ Words × 100 = 5 ÷ 119 × 100 ? 4.20

    double letters = vowels + alphabet;

    double w = word;

    double d = 100.0;
    double L = (letters / w) * d;

    double e = special_characters; // sentances
    double S = (e / w) * 100;

    double index = (0.0588 * L) - (0.296 * S) - 15.8;

    double doubled = index + 0.5;

    if (index <= 1) {
        printf("Before Grade 1\n");
    } else if (doubled > 2 && doubled < 3) {
        printf("Grade 2\n");
    } else if (doubled > 3 && doubled < 4) {
        printf("Grade 3\n");

    } else if (doubled > 5 && doubled < 6) {
        printf("Grade 5\n");

    } else if (doubled > 7 && doubled < 8) {
        printf("Grade 7\n");

    } else if (doubled > 8 && doubled < 9) {
        printf("Grade 8\n");

    } else if (doubled > 9 && doubled < 10) {
        printf("Grade 9\n");

    } else if (doubled > 10 && doubled < 11) {
        printf("Grade 10\n");

    } else if (index >= 16) {
        printf("Grade 16+\n");

    }

}