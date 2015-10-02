#include <cstdlib>
#include <iostream>

using namespace std;

void newLine()
{
     printf("\n");
}

void printArgumentParammaters(int argc, char* argv[])
{
     //print argument count ("\n means new line")
    printf ("Argument Count: %i\n", argc);
    //print first argument
    printf(argv[0]);
    
    if (argc > 1)
    {
             printf ("\nyou gave me more arguments!\n");
             for (int i = 1; i < argc; i ++ )
             {
                     printf ("\nArgument No. %i\n", i); 
                     printf(argv[i]);
             }         
    }
}

void printWord(char* string, int characterNumber)
{
       char* myString = "Hello"; 
       printf("Letter in my Word: %c\n", myString[characterNumber]);
}

void ArgumentChecker(int argc, char* argv[] )
{
          for (int i = 1; i < argc; i ++)
          {
                   //check each words first character
                   if (argv [i] [0] == '-')
                   {
                        // parameter found, check letter for command
                        if (argv[i][1] == 'h')
                        {
                           printf("\nHello h\n");
                        }
                        else if (argv[i][1] == 'f')
                        {
                           printf ("\nFuck f\n");     
                        }
                                 
                   }   
          }
}

int main(int argc, char* argv[])
{
    
    printArgumentParammaters(argc, argv);
    
    ArgumentChecker(argc, argv);
    //go to new line
    printf ("\n");
    
    printWord("Hello Again",2);

    //pause the application 
    system("PAUSE");
    return EXIT_SUCCESS;
}


