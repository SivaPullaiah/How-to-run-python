/*For generating ramdom questions from given question
by the help of question number*/
            // case 1: printf("\n\n"); break;
            // case 2: printf("\n\n"); break;
            // case 3: printf("\n\n"); break;
            // case 4: printf("\n\n"); break;
            // case 5: printf("\n\n"); break;
            // case 6: printf("\n\n"); break;
            // case 7: printf("\n\n"); break;
            // case 8: printf("\n\n"); break;
            // case 9: printf("\n\n"); break;
            // case 10: printf("\n\n"); break;
            // case 11: printf("\n\n"); break;
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
            case 1: printf("What is an inheritance? What are the advantages of inheritance?\n"); break;
            case 2: printf("\nWhat is an inheritance? What are the advantages of inheritance?\n"); break;
            case 3: printf("\n What is the difference between abstract methods and normal methods?\n"); break;
            case 4: printf("\nWhat is polymorphism? What are the types of polymorphisms?\n"); break;
            case 5: printf("\nCompare class with an abstract class.\n"); break;
            case 6: printf("\nDefine Interface and write its syntax.\n"); break;
            case 7: printf("\n What is an abstraction? How can you achieve abstraction in Java?\n"); break;
            case 8: printf("\nCompare this with super keyword?\n"); break;
            case 9: printf("\n Difference between interface and classes?\n"); break;
        }
    }
    for(i=0; i<2; i++)
    {
        switch (rand()%12+1)
        {
            case 1: printf("\nExplain how the constructors are overloaded in Single level inheritance. Write an example program.\n"); break;
            case 2: printf("\nExplain Dynamic method dispatch with a suitable example. (Or) What is Dynamic\npolymorphism? How can you achieve dynamic polymorphism in java explain with an example program?\n"); break;
            case 3: printf("\nIs there possibility to extend one interface to another interface? Explain in detail.\n"); break;
            case 4: printf("\nWhat is overriding? States its advantages. Discuss it with an example program?\n"); break;
            case 5: printf("\nWhat is abstract class and abstract method? What is the purpose of abstract methods?\nWrite a java program to create a class called abstract class Car which contains one\ninstance variables, two abstract methods and one non-abstract method, write two\nsubclasses to implement them and write a separate class with main method?\n"); break;
            case 6: printf("\nDiscuss various types of inheritances.\n"); break;
            case 7: printf("\nWrite a Java program to implement multilevel inheritance and also implements this keyword.\n"); break;
            case 8: printf("\nExplain various usages of super keyword in inheritance. Write example programs.\n"); break;
            case 9: printf("\nWrite a java program how to implement interface by consider this example “Convert Indian Rupees into dollars and pounds “.\n"); break;
            case 10: printf("\nWhat is an Object class? Discuss it methods. Explain how objects are compared in Object class with an example program.\n"); break;
            case 11: printf("\nDefine multiple-inheritance. Why java does not support multiple- inheritance? \nHow can we achieve multiple-inheritance?Explain with an example program.\n"); break;
            case 12: printf("\nWrite a java program considering abstract class contain one abstract method, taking that method implement square, square root and cube of that method\n"); break;
        }
    }
}