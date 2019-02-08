#include <stdio.h>
void draw_triangle(unsigned int size){
 
    unsigned int r, c;
 
    for(r=size; r>0; r--)
    {	
	for(c=r - 1; c>0; c--)
	{
		 printf(".");
	} 
        for(c=size+1; c>r; c--)
        {
            printf("#");
        }
 
        printf("\n");
    }
}
 int main(void){
     unsigned int size;
     printf("Enter the size of the triangle\n");
     scanf("%u",&size);

    draw_triangle(size);

    return 0;
 }