#include <stdio.h>
#include <ctype.h>

int main (){
    char input;
    
    printf("Enter a single character");
    scanf("%c",&input);
    if (isalpha(input)){
        printf("The output is an alphabet");
        
        switch(toupper(input)) {
               case 'A':
               case 'E':
               case 'I':
               case 'O':
               case 'U':
                    printf("\nIt is a VOWEL");
                    break;
        default:
                printf("\nIt is a CONSONANT");
        
        }
        return 0;
}

