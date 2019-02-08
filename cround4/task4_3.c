#include<string.h>
#include<stdio.h>
int num_substr(const char *str, const char *sub){
    int counter =0;
    //char *ret;
    //ret = strstr(str,sub)
    while((str=strstr(str,sub))!= NULL){
        counter++;
        str++;
    }   
    return counter;
       
}
int main(void){
   int counter= num_substr("one two one twotwo three", "two");
   printf("The number of strings!! %d\n",counter);

}
