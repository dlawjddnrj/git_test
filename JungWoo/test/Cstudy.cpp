#include <stdio.h>
#include <stdlib.h>
#include <string.h>

////void func(int a, int b)
////{
////    for(int i = a; i < b + 1; i++)
////    {
////        for(int j = 1; j < 10; j++)
////        {
////            printf("%d X %d = %d \n", i, j, i * j);
////        }
////        printf("\n");
////    }
////}

//// 재귀함수
////int findGCD(int a, int b)
////{
////    int temp;
////    while(b != 0)
////    {
////        temp = a % b; a = b; b = temp;
////    }
////    return a;

////    if(b == 0)
////        return a;
////    else
////        return findGCD(b, a%b);
////}
///
///

//void holsu(int arr[])
//{
//    for(int i = 0; i < 10; i++)
//    {
//        if(arr[i] % 2 != 0)
//        {
//            printf("holsu : %d \n", arr[i]);
//        }
//    }
//}

//void jjaksu(int arr[])
//{
//    for(int i = 0; i < 10; i++)
//    {
//        if(arr[i] % 2 == 0)
//        {
//            printf("jjaksu : %d \n", arr[i]);
//        }
//    }
//}

//int main(void)
//{
    ////    int num;
    ////    printf("10진수 입력 : ");
    ////    scanf_s("%d", &num);

    ////    printf("result : %x \n", num);


    ////    int num1, num2;

    ////    printf("two Number input : ");
    ////    scanf_s("%d", &num1);
    ////    scanf_s("%d", &num2);


    ////    if(num1 > num2)
    ////    {
    ////        func(num2, num1);
    ////    }
    ////    else
    ////    {
    ////        func(num1, num2);
    ////    }

    ////    int num1, num2;

    ////    printf("two Number input : ");
    ////    scanf_s("%d", &num1);
    ////    scanf_s("%d", &num2);

    ////    if(num1 > num2)
    ////        findGCD(num1, num2);


    ////    int money = 3500;
    ////    int cream = 500, kkang = 700, coke = 400;

    ////    for(int i = 1; i < money / cream; i++)  // i < 7
    ////    {
    ////        for(int j = 1; j < money / kkang; j++)  // j < 5
    ////        {
    ////            for(int k = 1; k < money / coke; k++)   // 8 ?
    ////            {
    ////                if(money == cream * i + kkang * j + coke * k)   // 500, 700,
    ////                {
    ////                    printf("cream %d, kkang %d, coke %d \n", i, j, k);
    ////                }
    ////            }
    ////        }
    ////    }

    //    int count, j = 0;

    //    for(int i = 1; i <= 10; i++)
    //    {
    //        for(j = 2; j < i; j++)
    //        {
    //            if((i % j) == 0)
    //            {
    //                break;
    //            }
    //        }

    //        if(i == j)
    //        {
    //            printf("%d \n", i);
    //            count++;

    //            if((count % 8) == 0)
    //            {
    //                printf("\n");
    //            }
    //        }
    //    }

//    int arr[10];

//    printf("10 num input : ");

//    for(int i = 0; i < 10; i++)
//    {
//        scanf_s("%d", &arr[i]);
//    }
//    for(int i = 0; i < 10; i++)
//    {


//        if(arr[i] % 2 == 0)
//        {
//            jjaksu(arr);
//        }
//        else
//        {
//            holsu(arr);
//        }
//    }
//    return 0;
//}

// Q.1
//int main(void)
//{
//    int len = 0;
//    double average = 0;

//    printf("input arr len : ");
//    scanf_s("%d", &len);

//    int *arr = (int *)malloc(sizeof(int) * len);

//    for(int i = 0; i < len; i++)
//    {
//        scanf_s("%d", &arr[i]);
//        average += arr[i];
//    }

//    average /= len;

//    printf("%f\n", average);
//}

// Q.2
//typedef struct
//{
//    int xpos, ypos;
//} Point;

//void swap(Point *a, Point *b)
//{
//    Point temp = {a->xpos, a->ypos};

//    a->xpos = b->xpos;
//    a->ypos = b->ypos;
//    b->xpos = temp.xpos;
//    b->ypos = temp.ypos;
//}

//int main(void)
//{
//    Point pos1 = {2, 4};
//    Point pos2 = {5, 7};

//    printf("pos1 swap before %d %d\n", pos1.xpos, pos1.ypos);
//    printf("pos2 swap before %d %d\n", pos2.xpos, pos2.ypos);

//    swap(&pos1, &pos2);

//    printf("pos1 swap after %d %d\n", pos1.xpos, pos1.ypos);
//    printf("pos2 swap after %d %d\n", pos2.xpos, pos2.ypos);
//}

// Q.3
//int main(void)
//{
//    int arr[3][9];

//    for(int i = 0; i < 3; i++)
//    {
//        for(int j = 0; j < 9; j++)
//        {
//            arr[i][j] = (i + 2) * (j + 1);
//        }
//    }

//    for(int i = 0; i < 3; i++)
//    {
//        for(int j = 0; j < 9; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//}

// Q.4
//int main(void)
//{
//    int num1 = 10, num2 = 20;
//    int *ptr1 = &num1, *ptr2 = &num2;

//    *ptr1 += 10;
//    *ptr2 -= 10;

//    int temp = num1;
//    *ptr1 = num2;
//    *ptr2 = temp;

//    printf("ptr1 : %d \n", *ptr1);
//    printf("ptr2 : %d \n", *ptr2);
//}

// Q.5
//int main(void)
//{
//    int i = 0, len = 5;
//    int *arr = (int *)malloc(sizeof(int) * len);

//    while (1) {
//        printf("input : ");
//        scanf_s("%d", &arr[i]);
//        if(arr[i] == -1)
//        {
//            break;
//        }
//        if(len == i + 1)
//        {
//            len += 3;
//            arr = (int *)realloc(arr, sizeof(int) * len);
//        }
//        i++;
//    }

//    for(int j = 0; j < i; j++)
//    {
//        printf("%d ", arr[j]);
//    }
//    free(arr);
//}

// Q.6
//int main(void)
//{
//    char str1[20], str2[30], str3[40];

//    fgets(str1, sizeof(str1) / sizeof(char) - 1, stdin);
//    str1[strlen(str1) - 1] = '\0';
//    fgets(str2, sizeof(str2) / sizeof(char) - 1, stdin);

//    strcpy(str3, str1);
//    strcat(str3, str2);

//    printf("%s", str3);
//}

//#define ADD 1
//#define MIN 0

//int main(void)
//{
//    int num1, num2;
//    scanf_s("%d %d", &num1, &num2);

//#ifdef ADD
//    printf("%d + %d = %d \n", num1, num2, num1 + num2);
//#endif

//#ifdef MIN
//    printf("%d - %d = %d \n", num1, num2, num1 - num2);
//#endif

//    return 0;
//}

//#define HIT_NUM 5

//int main(void)
//{
//#if HIT_NUM == 5
//    puts("HIT NUM : 5");
//#else
//    puts("HIT NUM NOT 5");
//#endif
//    return 0;
//}

//#define STRING_JOB(A, B) #A "'s Job : " #B "."

//int main(void)
//{
//    printf("%s \n", STRING_JOB(lee, wood));
//    printf("%s \n", STRING_JOB(han, hunter));
//}

