#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int maxline);
void copy(char to[], char from[]);
int length_size(char lonest[], int max);

int main(){
    int len, max;
    char line[MAXLINE];
    
    max = 0;
    while((len = get_line(line, MAXLINE)) > 0){
        if(len > max){
            max = len;
            
            
            printf("%s", line); //it will print out as much tezt as it can or how many lines it can
            printf(" length:% 3d characters \n", length_size(line, len)); // will print the length of characters of all lines inputed
        }
        }
    }

int get_line(char s[], int lim){
    int c,i;
    
    for(i = 0; i < lim-2 && (c=getchar()) != EOF && c!='\n'; i++){
        s[i] = c;
    }
        if(c == '\n'){
            s[i]=c;
            ++i;
        }
    
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[]){
    int i = 0;
    while((to[i]=from[i]) != '\0'){
        ++i;
    }
}

//function that counts the characters in a line
int length_size(char longest[], int max){
    int num = 0;
    for(int i = 0; i < max; ++i){
        if(longest[i] >= 65 && longest[i] <= 90){
            ++num;
        }
        else if(longest[i] >= 97 && longest[i] <= 122){
            ++num;
        }
        
    }
    return num;
}


