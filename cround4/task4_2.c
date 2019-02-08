#include <string.h>
#include <stdio.h>
void addname(char *buffer, const char *addme, unsigned int maxsize)
{
    int space = maxsize-strlen(buffer)-1;
    if(strlen(addme)<space){
        strncat(buffer,addme,maxsize);
      strncat(buffer,",",maxsize);
    }
    else{
      strncat(buffer,addme,space);
     
      
    }
      

      
  
}


int main(void)
{
    char result[30] = { 0 }; // fills result with all zeros

    addname(result, "Reiska", 30);
    addname(result, "Bilbo Reppuli", 30);
    addname(result, "Henri Hinaaja", 30);
    addname(result, "Urpo Turpo", 30);

    printf("We have: %s\n", result);
    const char *expected = "Reiska,Bilbo Reppuli,Henri Hi";
    printf("We expected: %s\n", expected);
    if (!strcmp(result, expected)) {
	printf("Looking good!\n");
    } else {
	printf("Not quite right...\n");
    }

    return 0;
}