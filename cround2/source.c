#include <stdio.h> 

void simple_multiply(int a, int b){

    int result = a*b;

    printf("%d*%d = %d \n",a,b,result);
    
}
void simple_math(void){
    float x;
    char op;
    float y;
    float result=0;
    int ret;
    //char inp;
    //inp =scanf("%c",&op);
    ret =scanf("%f%c%f",&x,&op,&y);
    if (!ret){
        printf("ERR\n");
    }
    else{
        if(op=='+'){
          result = x+y;
          printf("%.1f\n",result);
            
        }
        else if(op=='-'){
            result = x-y;
            printf("%.1f\n",result);

        }
        else if(op=='*'){
            result = x*y;
            printf("%.1f\n",result);
            
        }
        else if(op=='/'){
            result = x/y;
            printf("%.1f\n",result);
            
        }
        else{
            printf("ERR\n");
        }
    }
}

int main(void){
    int a =0;
    int b=0;
    scanf("%d %d", &a, &b);

    simple_multiply(a,b);
    simple_math();
}