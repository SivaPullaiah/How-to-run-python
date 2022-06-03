/*For generating ramdom questions from given question
by the help of question number*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    int i;
    time_t t1;
    srand((unsigned)time(&t1));
    for(i=0; i<5; i++)
    {
        switch(rand()%10+1)
        {
            case 1: printf("1\n"); break;
            case 2: printf("2\n"); break;
            case 3: printf("3\n"); break;
            case 4: printf("4\n"); break;
            case 5: printf("5\n"); break;
            case 6: printf("6\n"); break;
            case 7: printf("7\n"); break;
            case 8: printf("8\n"); break;
            case 9: printf("9\n"); break;
            case 10: printf("10\n"); break;
            case 11: printf("11\n"); break;
        }
    }
}