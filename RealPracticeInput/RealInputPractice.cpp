
#include <cstdlib>
#include <stdio.h>

//function prototypes for forward decleration
void printWord(char* word);
void scanfPrint();
void getCharPrint();
bool compareCharacter (char* word, char letter, int position);
char readKeyBoard();
void runGame(char* word);

int main()
{

    //this can not be used unless we use a function prototyping
    //also known as 'forward decleration'
    printWord("A Word.");
    
    //scanfPrint();
    //getCharPrint();
    runGame("hello");
    
    system("PAUSE");
    return 0;    
}

void printWord(char* word)
{
     printf("%s\n",word);
}

void scanfPrint()
{
     char input[20];

     printf ("Input text\n");
     scanf("%s",input);
     printf("succesfully worked\n");     
}

void getCharPrint()
{
     printf("Input Letter %c\n", getchar());
}

void runGame(char* word)
{
     printWord("im thinking of a word..... try and guess the first letter!\n");
     int lives = 3;
     
     while (lives > 0)
     {
           char key = readKeyBoard(); // check the keyboard for input
           //check the first letter
           // you can either check == 10 or == '\n'
           //'\n' == 10
           if (key != 10)
               {
               if (compareCharacter(word, key, 0))
               {
                    //guessed correctly
                    printWord("ConGratz breh you got it right");
                    printf ("it was: %s\n",word);
                    printf("you have %i lives left!!\n",lives);
                    //stop the game by breaking the loop!
                    break;
               }
               else 
               {
                    lives--;//subtract lives from the player
                    printWord("you fucked up!\n");
                    printf("you have %i lives remaining\n", lives);
               }
           }      
     }     
}

bool compareCharacter(char* word, char letter, int position)
{
     if (word[position] == letter)
     {
        return true;                  
     }
     return false;     
}

char readKeyBoard()
{
     
     printf("press a key!\n");
     char key = 0;
     scanf("%1c", &key);
     printf("Key pressed: %c\n", key);
     
     return key;     
}
