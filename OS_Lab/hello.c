// #include <unistd.h>
// #include <stdio.h>

// int main()
// {
//     printf("hello worl\n");
//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     struct coord
//     {
//         int x, y, z;
//     };

//     struct coord *p;

//     p = malloc(sizeof(struct coord));

//     if (p==NULL)
//     {
//         printf("Failed");
//     }
//     else
//     {
//         printf("\n%zu bytes allocated at address %d\n", (sizeof(struct coord))*3, p);
//     }
//     p = realloc(p, sizeof(struct coord)*10);

//     // free(p);
//     // p = NULL;
    
//     return 0;
// }

// int main()
// {
//     int *p  ,*q;

//     p = malloc(3);

//     q = p;


//     p = q;
//     for (int j = 0; j < 3; j++)
//     {
//         printf("num %d" , p );
//         p++;
//     }
    
    

// }




#include <stdio.h>
#include <stdlib.h>

void f(void)
{
    void* s;
    s = malloc(50);
    return;
}
int main(void)
{
    while (1)
    f();hello saad ahmad

    return 0;
}