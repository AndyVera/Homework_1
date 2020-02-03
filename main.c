

//PROBLEM 1.13
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define IN 1
#define OUT 0
#define MAX_WORD_LEN 30

int main(int argc, const char * argv[]) {
    char wordbuff[50];
    int index = 0;
    
    long nc, nl, nw;
    
//
    int c, state = OUT;
    nc = nl = nw = 0;
    int words[MAX_WORD_LEN];
    memset(words, 0, sizeof(words));
    
    while ((c = getchar()) != EOF){ //cat      dog
        ++nc;
        if(isalpha(c)){ wordbuff[index++] = c; }
                                    //c(0) ca(1) cat(2) d(3)
                                    //get cat, count it, copy d back to the beginning of words
                                    //d(0)
        if (c == '\n'){ ++nl;}
        if (c == ' ' || c == '\n' || c == '\t'){state = OUT; }
        else if (state == OUT){
            state = IN;
            ++nw;
        }
    }
    printf("%ld chars, %ld words, and %ld lines\n\n", nc, nw, nl);
  //
    
//  WHILE LOOPS DID NOT WORK CORRECTLY
//    printf("==========================================\n");
//    int num_of_words = 1;
//
//    while(num_of_words <= MAX_WORD_LEN){
//        int num_of_symbols = 0;
//        printf("%3d :", num_of_words);
//
//        while(num_of_symbols < words[num_of_words]){
//            printf("*");
//            num_of_symbols++;
//            if(num_of_symbols % 5 == 0){
//                printf("|");
//            }
//        }
//        printf("\n");
//        num_of_words++;
//        if(num_of_words % 5 == 0){
//            printf("==========================================\n");
//        }
//    }

    printf("------------------------------------------------------\n");
    for(int i = 1; i <= MAX_WORD_LEN; ++i){
        printf("%3d :", i); //prints out the num from 1 to max length downward
        //prints * for the number of occurence of a lenght of a word
        for(int j = 1; j <= words[i]; ++j){
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
    printf("\n\n");
    
    
//
    printf("==============================================================================");
    printf("==============================================================================\n");
    //prints out the num from 1 to max length from left to right
    for(int i = 1; i<= MAX_WORD_LEN; ++i){
        printf("%4d:", i);
    }
    printf("\n");
    printf("==============================================================================");
    printf("==============================================================================\n");
    

    return 0;
}
