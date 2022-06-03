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
    for(i=0; i<3; i++)
    {
        switch(rand()%9+1)
        {
            case 1: printf("\nWhat is meant by platform Independent?\n"); break;
            case 2: printf("\nJava does not support destructor discuss\n"); break;
            case 3: printf("\nWhat is meant by enumeration types? Write its syntax.\n"); break;
            case 4: printf("\nWhat is meant by robust and high performance\n"); break;
            case 5: printf("\nWrite any 4 differences between java and c\n"); break;
            case 6: printf("\nWhat is the purpose of garbage collection in Java\n"); break;
            case 7: printf("\nWhat is the use of finalize () method\n"); break;
            case 8: printf("\nDiscuss for-each loop with an example\n"); break;
            case 9: printf("\nCompare method with constructor\n"); break;
        }
    }
    for(i=0; i<2; i++)
    {
        switch ((rand()%16+1))
        {
            case 1: printf("\nWhat is constructor? Discuss different types of constructors.\n Explain constructor overloading with an example program\n"); break;
            case 2: printf("\nWhat is meant by access controls? Discuss access controls in Java with an example program.\n"); break;
            case 3: printf("\nDiscuss various primitive data types in Java.\n"); break;
            case 4: printf("\nWhat is the use of “this” keyword? Discuss various usages with examples.\n"); break;
            case 5: printf("\nWhat is the use of static? Discuss various usage of static with an example\n"); break;
            case 6: printf("\nWhat is meant by method and method overloading? Explain how „this‟ keyword used in method overloading with an example program.\n"); break;
            case 7: printf("\nDiscuss various control statements in Java and write examples.\n"); break;
            case 8: printf("\nWhat is recursion? Write an example to print Fibonacci series using recursion\n"); break;
            case 9: printf("\nDiscuss the history of Java? Differentiate C with Java.\n"); break;
            case 10: printf("\nWhat is meant by array? Discuss the types of arrays?\na. Explain Single dimensional arrays with an example program.\nb. Write a java program find matrix multiplication accept data through keyboard\n"); break;
            case 11: printf("\n Discuss various operators in Java and write examples.\n"); break;
            case 12: printf("\n Explain various parameter passing techniques with example programs\n"); break;
            case 13: printf("\nDiscuss various futures of Java. (Java Buzz words).\n"); break;
            case 14: printf("\nDiscuss in detail about Object oriented programming features.\n"); break;
            case 15: printf("\n Differentiate overloading with overriding.\n"); break;
            case 16: printf("\nWrite a Java program to define static methods which performs arithmetic operations\n in class and access them in other class to perform and display the results.\n"); break;
            case 17: printf("\nWhat is meant by Jagged Arrays? Explain with an example."); break;
        }
    }
}