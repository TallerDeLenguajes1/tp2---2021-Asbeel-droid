#include <stdio.h>
#define N 4
#define M 5

int main()
{
    int f,c;
    double mt[N][M];

    for(f = 0;f<N; f++)
    {
        for(f = 0;f<N; f++)
        {
            printf("%f", mt[f][c]); 
        }
        printf("\n");
    }
    return 0;
}