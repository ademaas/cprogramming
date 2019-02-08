#include <stdio.h>

int array_sum(int *array, int count)
{
	int i;
	int sum = 0;
	for (i = 0; i < count; i++) {
    		sum += array[i];
	}
	
	return sum;
}

int array_reader(int *vals, int n)
{	
	int i;
	int number;
	int count = 0;
	for (i = 0; i < n; i++) {
	     if(scanf("%d",&number) == 1 ) {
		     *(vals + i) = number;
		     count++;			  
		}
	else { 
		break;
	}
	}
	return count;
	
}


int main(void) 
{
	//int valarray[] = { 10, 100, 1000 };
	//int ret = array_sum(valarray, 3);
	int array[10];
	int n = array_reader(array, 10);

	printf("%d numbers read\n", n);
	int i;

	for (i = 0; i < n; i++) {
	    printf("%d ", array[i]);
	}
	