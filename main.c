#include <stdio.h>
#define MAXLINE 1000
int get_line(char line[], int maxline);
int length_size(char lonest[], int max);

int main(){
    int len, max;
    char line[MAXLINE];
    
    max = 0;
    while((len = get_line(line, MAXLINE)) > 0){
        for(int i = 0; i < len; ++i){
            if(line[i] == ' '){
                line[i] = line[i+1];
            }
            else if(line[i] == '\t'){
                line[i] = line[i+3];
            }
        }
        printf("%s \n", line);
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
