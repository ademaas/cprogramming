#include<stdio.h>
#include<ctype.h>
// define a function which calculates the number of characters
int count_isalpha(const char *str){
    int  counter=0;
    while(*str!='\0'){
        if(isalpha(*str)){
            //if true the counter increases by 1
            counter++;
        }
        str++;
    }
    //return the number of alpahbets in a given string

    return counter;

}

int main(void){
    printf("The number of alpahbets in agiven string is\n");
    
    char message[] = "It is going to rain tomorrow";
    int counter = count_isalpha(message);
    printf("The number of characters: %d\n", counter);
    return 0;
}