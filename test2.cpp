#include <stdio.h>



struct deneme{
    unsigned char a1:1;
    unsigned short a2:2;
    unsigned int a3:3;
    unsigned long long a4:2;
} __attribute__((packed));

struct deneme2{
    unsigned char a1:1;
    unsigned short a2:2;
    unsigned int a3:3;
    unsigned long long a4:2;
} ;


int main()
{
    deneme d;
    deneme2 d2;
    printf("size of packed deneme : %d   size of var : %d \n", sizeof(deneme), sizeof(d));
    printf("size of deneme : %d sizeof var : %d\n", sizeof(deneme2), sizeof(d2));

    d.a1=255;
    d2.a1=255;
    d.a2=255;
    d2.a2=255;
    d.a3=255;
    d2.a3=255;
//    printf("size of %d %d %d \n", sizeof(d.a1), sizeof(d.a2), sizeof(d.a3));
//    printf("size of %d %d %d \n", sizeof(d2.a1), sizeof(d2.a2), sizeof(d2.a3));
    printf("a1:%d a2:%d a3:%d \n", d.a1, d.a2, d.a3);
    printf("a1:%d a2:%d a3:%d \n", d2.a1, d2.a2, d2.a3);

    return 0;
}