#include <stdio.h>
#include <string.h>
#define MAX_LETTERS 26

int main(int argc, const char * argv[]){
    int charbuff[MAX_LETTERS];
    int character;
    
    memset(charbuff, 0, sizeof(charbuff));
    
    while((character = getchar()) != EOF){
        //ASCII Values for letter A to Z is from 65 to 90
         if((character >= 65) && (character <= 90)){
            charbuff[character - 65]++;
        }
        //ASCII Values for letters a to z is from 97 to 122
        if((character >= 97) && (character <= 122)){
            charbuff[character- 97]++;
        }
        
    }
    
    printf("------------------------------------------------------\n");
       for(int i = 1; i <= MAX_LETTERS; ++i){
           printf("%3d :", i); //prints out the num from 1 to 26 for the letters
           //prints * for the number of occurence of a lenght of a word
           for(int j = 1; j <= charbuff[i-1]; ++j){
               printf("*");
               //organizes them in groups of 5 for better counting and visual appealance
               if(j % 5 == 0){printf("|");}
           }
           //after each line prints out a new line
           printf("\n");
           //organizes it horizontally in a group of 5
           if(i % 5 == 0){
               printf("------------------------------------------------------\n");
           }
       }
    return 0;
}
