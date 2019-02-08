#include <stdio.h>
#include <stdlib.h>


void sort(int *start, int size)
{

     for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (start[j] > start[i])
            {
                int tmp = start[i];
                start[i] = start[j];
                start[j] = tmp;
            }
        }
    }
}