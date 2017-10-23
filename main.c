#include <stdio.h>
#include <stdlib.h>
#define SWAP(x, y, t) ((t)=(x), (x)=(y), (y)=(t))

int main()
{
    int lsA, lsB,lsC;
    int temp;


    printf("get long side A, B, C:\n");
    scanf("%d %d %d", &lsA, &lsB, &lsC);

    if(lsA>lsB+lsC ||lsB>lsA+lsC||lsC>lsA+lsB)
    {
        printf("Wrong!! It's not a triangle!\n");
        return 0;
    }

    if (lsA > lsB)
        SWAP(lsA, lsB, temp);
    if (lsA > lsC)
        SWAP(lsA, lsC, temp);
    if (lsB > lsC)
        SWAP(lsB, lsC, temp);
    printf("This triangle's long sides: %d, %d, %d.\n", lsA, lsB, lsC);

    //���T�p��
    if (lsA==lsB && lsB==lsC)
    {
        printf("It's a ragular triangle!\n");
    }

    //�����T�p��
    else if ((lsA!=lsB) &&((lsA*lsA+lsB*lsB) == lsC*lsC))
    {
        printf("It's a right angle triangle!\n");
    }

    //���y�T����
    else if ((lsA==lsB && lsA!=lsC)||(lsA!=lsB && lsB==lsC))
    {
        printf("It's a isosceles triangle!\n");
    }

    //���y�����T����
    else if (lsA==lsB && lsA^2+lsB^2==lsC^2)
    {
        printf("It's a right angle and isosceles triangle!\n");
    }
    //�@��T����
    else{
        printf("It's a general triangle!\n");
    }
    system("pause");
    return 0;
}
