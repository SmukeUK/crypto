#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
// Convert string to an int
int key = atoi(argv[1]);
// If/Else to ensure key conditions are met
if (argc != 2 || isdigit(*argv[1]) == false || key < 0) 
    {
        printf("Usage: ./caesar key");
        return 1;
    }
else 
    {
        string plain = get_string("plaintext: ");
        printf("ciphertext: ");
        // Loop to increase lower case letters by key
        for (int i = 0; i < strlen(plain); i++)
        {
        // Print lowercase cipher letters.
        if (islower(plain[i]))
            {
                int lccypher = plain[i] + key;
                if (lccypher >= 122)
                {
                    char lower = lccypher % 96;
                    printf("%c", lower + 70);
                }
                else
                {
                    char low = lccypher % 96;
                    printf("%c", low + 96);
                }
            }
        // Print uppercase cipher letters.
        else if (isupper(plain[i]))
            {
                int uccypher = (plain[i] + key);
                if (uccypher >= 90)
                {
                    printf("%c", ((uccypher % 90) + 64));
                }
                else
                    {
                        printf("%c", uccypher % 90);
                    }
            }
        // Loop to keep numeric characters the same.
        else if (isalnum(plain[i]))
            {
                char alnum = (plain[i]);
                printf("%c", alnum);
            }
        // Print spaces.
        else if (isspace(plain[i]))
            {
                char space = (plain[i]);
                printf(" ");
            }
        // Print other characters as the same.
        else
            {
               char other = (plain[i]);
               printf("%c", other);
            }
            }
    }
    // Print a final space for style.
    printf("\n");
}