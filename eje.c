#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>




int jano()
{
    int dado = rand()% 8;
    if (dado < 5)
    {
        return dado+1;
    }
   // if (dado >= 6)
   else
    {
        return 6;
        }

}

int main(int argc, char *argv[]){
    srand(time(NULL));
    printf("%d\n",jano());
    printf("%d\n", jano());
    printf("%d\n",jano());
    return 0;
}