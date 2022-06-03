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
            case 1: printf("\n What are the advantages of packages?\n"); break;
            case 2: printf("\n Define predefined packages? Write any four predefined packages?\n"); break;
            case 3: printf("\n What is meant by Object Serialization?\n"); break;
            case 4: printf("\n Write a program to check if the File is Readable?\n"); break;
            case 5: printf("\n Define predefined packages? Write any four predefined packages?\n"); break;
            case 6: printf("\n What is meant by sub package? Write the syntax for creation of sub package\n"); break;
            case 7: printf("\n What is meant by canRead() method?\n"); break;
            case 8: printf("\n Differentiate between FileInputStream and FileReader\n"); break;
            case 9: printf("\n What is meant by package? Write the syntax of creation of package\n"); break;
            case 10: printf("\n Discuss the various access protections in package\n"); break;
            case 11: printf("\n What are the methods available in File Reader?\n"); break;
            case 12: printf("\n Differentiate between FileOutputStream and FileWriter.\n"); break;
        }
    }
    for(i=0; i<2; i++)
    {
        switch(rand()%17+1)
        {
            case 1: printf("\n Explain built –in-package and user defined packages in detail\n"); break;
            case 2: printf("\n Explain the procedure how files are Unzipping with an example program?\n"); break;
            case 3: printf("\n How to rename the file? Explain with an example?\n"); break;
            case 4: printf("\n Discuss various predefined packages in Java library\n"); break;
            case 5: printf("\n What is meant by package? Explain creation of sub package in package with an example program in detail\n"); break;
            case 6: printf("\n Explain the procedure how files are zipping with an example program\n"); break;
            case 7: printf("\n What is package? Write a java program that demonstrates access specifiers among packages?\n"); break;
            case 8: printf("\n Explain in detail about random access file operations?\n"); break;
            case 9: printf("\n Write a java program to count the number of lines, words and characters in a file\n"); break;
            case 10: printf("\nHow can you avoid ambiguity in packages?\n"); break;
            case 11: printf("\nDiscuss various classes under java.lang package?\n"); break;
            case 12: printf("\nWhat is class path? How to set class path? Explain with an example\n"); break;
            case 13: printf("\nExplore java.io*?\n"); break;
            case 14: printf("\nExplain the procedure how to copy one file into another file with an example program?\n"); break;
            case 15: printf("\nDiscuss DataInputStream and DataOutputStream with an example\n"); break;
            case 16: printf("\nWrite a java program to check whether the file is readable, writable and hidden\n"); break;
            case 17: printf("\nWrite a java program how to read a file using FileReader?\n"); break;
        }
    }
}