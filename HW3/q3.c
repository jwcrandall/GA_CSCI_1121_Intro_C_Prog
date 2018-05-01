#include <stdio.h>
#include <time.h>
int even_or_odd(int i)
{
    if(i % 2 == 0)
    {
        return 0;
    }
    return 1;
}
int *gene_rand(int lowest,int highest)
{
    srand(time(NULL));
    int x ;
    int random_array[20];
     for (x = 0;x < 20;x++)
        {
        random_array[x] = rand()%(highest +1 - lowest) + lowest;
        printf("%d ",random_array[x]);
        }

      return random_array;
}

int main()
{
    int min, max, i, total=0, index=0;
    int *array;
    int most_negative_number = 0;

    printf("Please put in the min and max values, separated by one space: \n");
    scanf("%d %d",&min,&max);

    array = gene_rand(min,max);

    most_negative_number= array[0];

    for (i = 0; i<20; i++)
    {
        if ((array[i]) < 0)
        {
            if (even_or_odd(array[i]) == 0)
            {
                if (most_negative_number > array)
                {
                    most_negative_number= array[i];
                    index = i;
                }
            }
        }
        else
            if (array[i] > 0)
        {
            total = total + array[i];
        }

    }

    printf("\nThe index of the most negative even number is: %d \n", index);

    printf("Within the 20  randomly generated number, the most negative even number is: %d \n", most_negative_number);

    printf("The sum of all positive odd numbers is: %d \n", total);

}
