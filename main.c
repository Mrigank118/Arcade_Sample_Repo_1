#include <stdio.h>
#include <stdlib.h>
#include "C:\Users\mriga\OneDrive\Desktop\Aracde_Sem_1\Games\Game_1\Game_1.c"
#include "C:\Users\mriga\OneDrive\Desktop\Aracde_Sem_1\Games\Game_2\Game_2.c"
#include "C:\Users\mriga\OneDrive\Desktop\Aracde_Sem_1\Games\Game_3\Game_3.c"
#include "C:\Users\mriga\OneDrive\Desktop\Aracde_Sem_1\Games\Game_4\Game_4.c"
#include "C:\Users\mriga\OneDrive\Desktop\Aracde_Sem_1\Games\Game_5\Game_5.c"



int displayLogo()
{
    FILE *file;
    char ch;

    // Open the text file
    file = fopen("main.txt", "r");

    // Check if the file exists
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    // Read and print the content character by character
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(file);

}

int main() {
    displayLogo();

    int choice;
    // Display the logo at the beginning


    printf("\n\n\n \t\t\t\t\t\t\t\t   1. TIC TAC TOE\n\n");
    printf("\t\t\t\t\t\t\t\t   2. HANGMAN \n \n");
    printf("\t\t\t\t\t\t\t\t   3. SLOT MACHINE \n \n");
    printf("\t\t\t\t\t\t\t\t   4. SNAKE AND LADDER \n \n");
    printf("\t\t\t\t\t\t\t\t   5. HIGH LOW \n \n");



    scanf("%d", &choice);

    switch (choice) {
        case 1:
            system("cls");
            Game1();
            break;
        case 2:
            system("cls");
            Game2();
            break;
        case 3:
            system("cls");
            Game3();
            break;
        case 4:
            system("cls");
            Game4();
            break;
        case 5:
            system("cls")
            //Game5();

           break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}


