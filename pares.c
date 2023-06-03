#include <stdio.h>

int main()
{
        int count = 0;
        printf("Esse programa mostra os pares pulando de dois em dois ate 100");
        while(count <= 100)
        {
            if(count%2 == 0)
                printf("%d ",count);

            count = count +4;
        }
}
