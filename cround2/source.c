#include <stdio.h> 

void simple_multiply(int a, int b){
        
//     //printf("enter thecl number\n");
    scanf("%d%d", &a,&b);

    int result = a*b;
    //printf("enter the numbers\n");
    printf("%d * %d = %d\n",a,b,result);
    
}
void simple_math(void){
    float x;
    char op;
    float y;
    float result;
    //char inp;
    //inp =scanf("%c",&op);
    //printf("enter the numbers number\n");
    scanf("%f %c %f", &x, &op, &y);
   
    
    switch(op){
        case '+':
            result = x+y;
            printf("%.1f\n",result);
            break;
        case '-':
            result = x-y;
            printf("%.1f\n",result);
            break;
        case '*':
            result = x*y;
            printf("%.1f\n",result);
            break;
        case '/':
            result = x/y;
            printf("%.1f\n",result);
            break;
        default:
             printf("ERR\n");
             break;

            
    }

   
}

int main(void){
    int a =0;
    int b=0;
    //printf("enter thecl number\n");
    scanf("%d%d", &a,&b);

    simple_multiply(a,b);
    simple_math();
    return 0;
}