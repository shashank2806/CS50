/*
    Flename : caesar.c
    Author : Shashank Shekhar
    
    This file presents a solution to caesar problem in pset2 of CS50x.
*/

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //checking for a valid key.
    if (argc != 2 ) 
    {
        printf("Provide a valid encryption key.\n");
        //if user does not inputs two arguments.
        return 1; 
        //exit with error code 1
    }
    
    else
    //All done checked for everything.
    {
        printf("plaintext:  ");
        string p = get_string();
        int k = atoi(argv[1]);
        
        printf("ciphertext: ");
        
        for (int i = 0, n = strlen(p); i < n; i++)
        {
            if(isalpha(p[i]))
            {
                if(islower(p[i]))
                    printf("%c",((p[i]-97+k)%26)+97); 
                    //for lower case letters.
                if(isupper(p[i]))
                    printf("%c",((p[i]-65+k)%26)+65); 
                    //for upper case letters.
            }
            else
            {
                printf("%c",p[i]); 
                //for non alphabetical values.
            }
        }
        
        printf("\n");
        return 0;
        //exit nicely.

    }
}