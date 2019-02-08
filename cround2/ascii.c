#include <stdio.h> 
#include <ctype.h> 

void ascii_chart(char min, char max) 
{ 
       int counter = 0; 
       for(char i=min; i<=max; i++){ 
               printf("%3d 0x%02x ", i,i); 
               if( isprint(i) ) { 

                       printf("%c",i); 
               } else { 
                       printf("?"); 
               } 
               if(counter < 3) { 
               counter++; 
               printf("\t"); 
               } 
               else{ 
                       counter=0; 
                       printf("\n"); 
               } 
       } 
}  

