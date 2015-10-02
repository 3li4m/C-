
/**
   std - standard and usually when a library has std it means it is a standardised library/
         a standerdised library means it will function the same on any platform which implements it.
         
   cstdlib = 'C' standard programming library
   stdio = standard input/ output programming library
*/

#include <cstdlib> // include so we can use 'system("PAUSE")'
#include <stdio.h>  // include so we can use 'printf'

void newLine();

void printBool(bool myBool)
{
   if (myBool == false)
   {
      printf("False");           
   }  
   else 
   {
        printf("True");
   }
}

void printMemoryLocations(int myNumber, float myFloat, double myDouble, bool myBool)
{
    printf("\nprinting memory locations\n");
    printf("my number: 0x%X\n", &myNumber);//%X means hexidecimal number
    printf("my float: 0x%X\n", &myFloat);
    printf("my double: 0x%X\n", &myDouble);
    printf("my bool: 0x%X\n", &myBool);     
}

void printPointer()
{
         
    //syntax of making a pointer variable
    //type '*' name ';
    //traditionally you should always initalise your pointers to null!
    // NULL =0
    //int * myIntPointer = 0 means make me a pointer that dosent have a 
    //memory location assigned to it yet!
    int * myIntPointer = 0;
    int * secondPointer = 0;
    printf ("\nMemory location of myPointer: 0x%X\n", myIntPointer);
    
    //assign a new memory location to this pointer that is of size int
    //this is referred to as 'dynamic memory allocation'
    myIntPointer = new int;
    //second pointer will have the exact address as myIntPointer
    secondPointer = myIntPointer; 
    printf ("Memory location of myPointer: 0x%X\n", myIntPointer);
    
    //*myintPointer is referred to as dereferencing a pointer
    //derefrencing a pointer basically means give me the value at the 
    // memory location the pointer is assigned to 
    printf ("\nValue at memory locatioon is: %i\n", *myIntPointer);
    
    *myIntPointer = 0; // assign the value of 0 to the value inside the memory 
    *secondPointer = -1; // assign the value of -1 to the value inside the memory
    printf ("Value at memory locatioon is: %i\n", *myIntPointer);
    
     printf ("Value at memory locatioon is: %i\n", secondPointer[0]);
     
     //cleaning up a pointer envolves 2 steps 
     // step 1 delete of the pointer
     // step 2 re-initalise the pointer back to null (0)
     
     // syntax to delete a pointer is 
     //delete pointerName;
     delete myIntPointer;
     myIntPointer = 0;
      printf ("Value at memory locatioon is: %i\n", secondPointer[0]);
}

void printStringProperties(char* word)
{
     int counter = 0; // going to represent the index
     
     printf("Starting address of string is : 0x%x\n\n", word);
     
     //'\0' is a single character which means 'Null'
     while (word [counter] != '\0') 
     {
           printf("Letter No. %i: %C\n", counter, word[counter]);
           printf("Memory location of letter: 0x%X\n\n", word+counter);
           
           counter++;//to move forward in counter otherwise well make an infinate loop
     }     
     
     printf("Ending address of string: 0x%x\n\n", word+counter);
}

int main()
{
    //'string' is represented by using "Char*" variable name;
    //variable types are int, char, bool, float, double, short
    // syntax is type name ;
    
    //in c there is a symbol which means "the memory address of a value"
    //this symbol is the ampersand symbol ('&') (shift+7)
    
    bool myBool = false;
    int myNumber = 2;
    char *myWord = "Word"; // char* is a 'c-Style string'
    float myFloat = 5.2f;
    double myDouble = 2.3;

    
    printBool(myBool);
   // printf("myBool: %i\n", myBool);
    printf ("\nmyFloat: %f\n", myFloat);
    printf ("myDouble: %f\n", myDouble);
    printf("myNumber: %i\n", myNumber);
    printf("myWord: %s\n", myWord);
    
    printPointer();
    printMemoryLocations(myNumber, myFloat, myDouble, myBool);
    
    printf("\nvalue at memory location: %i\n", (&myNumber)[0]);
    
    printf("string at memory location: 0x%X\n", myWord);
  
    printf("First letter: %C\n", myWord[0]);
    //alternative way to finding memory location '&(myWord[0])' (UGLY)
    printf("First Letter Location: 0x%X\n", myWord+0);
    printf("secondLetter: %C\n", myWord[1]);
    printf("second Letter Location: 0x%X\n\n", myWord+1);
    
    printStringProperties("run");
    
    newLine();
    system("PAUSE");
    return 0 ;
}

void newLine()
{
     printf("\n");     
}
