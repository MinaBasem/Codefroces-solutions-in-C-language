#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    int habitable = 0;
    int n = 0;
    int p = 0;
    int q = 0;

    scanf("%d", &n);

    while(i <= n){
        scanf("%d ", &p);
        scanf("%d", &q);

        if(q - p >= 2){
            habitable = habitable + 1;
            i = i + 1;
        }
        else {
            i = i + 1;
        }
    }
    printf("%d", habitable);
    return 0;
}
