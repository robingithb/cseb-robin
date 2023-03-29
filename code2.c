#include<stdlib.h>
#include<stdio.h>
int main()
{
    int *numbers = (int *)calloc(20,sizeof(int));
    int i;
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    printf("stored integeres are \n");
    for(i=0;i<6;i++)
    {
        printf("numbers[%d] = %d\n",i,numbers[i]);
    }
        printf("%p\n",numbers);
        printf("%p\n",numbers+1);
         printf("%p\n",numbers+2); 
  
}