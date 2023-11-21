#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>



void printFileContent2(const char *fileName) {
    FILE *file;
    char ch;

    // Open the file for reading
    file = fopen(fileName, "r");

    // Check if the file was opened successfully
    if (file == NULL)
    {
        perror("Error opening file");
        return;
    }

    // Read and print each character in the file
    while ((ch = fgetc(file)) != EOF)
    {
        putchar(ch);
    }

    // Close the file
    fclose(file);
}


void playOddEvenGame() {
    int userChoice, computerChoice, sum;
    char playerType;

    // Seed the random number generator
    srand(time(0));

    printf("                                               ---------------------------------------------------\n");

    do {
        printf("                                                      Choose your type (Odd or Even): ");
        scanf(" %c", &playerType);

        // Check if the character is valid
        if (playerType != 'O' && playerType != 'o' && playerType != 'E' && playerType != 'e') {
            printf("\n\n\n\n                                     !!!!!Invalid input. Please enter 'O' for Odd or 'E' for Even.!!!!!\n\n\n\n");
        }
    } while (playerType != 'O' && playerType != 'o' && playerType != 'E' && playerType != 'e');

    printf("                                               Enter your choice (a number between 1 and 10): ");
    scanf("%d", &userChoice);

    // Generate computer's choice
    computerChoice = rand() % 10 + 1;
    printf("                                                          Computer's choice is: %d\n", computerChoice);

    sum = userChoice + computerChoice;
    printf("                                                          Sum of the numbers is: %d\n", sum);
    printf("                                              ---------------------------------------------------\n");

    // Determine the winner
    if ((sum % 2 == 0 && (playerType == 'E' || playerType == 'e')) || (sum % 2 != 0 && (playerType == 'O' || playerType == 'o'))) {
        printFileContent2("C:\\Users\\mriga\\OneDrive\\Desktop\\Aracde_Sem_1\\Games\\Game_4\\OddEven_won.txt");
        printf("\n");
    } else {
        printFileContent2("C:\\Users\\mriga\\OneDrive\\Desktop\\Aracde_Sem_1\\Games\\Game_4\\OddEven_lose.txt");
        printf("\n");
    }
}




int Game4() {
    system("cls");
    printFileContent2("C:\\Users\\mriga\\OneDrive\\Desktop\\Aracde_Sem_1\\Games\\Game_4\\Game_4_Ascii.txt");
    char playAgain = 'y';
    while (playAgain == 'y') {
        playOddEvenGame();
        printf("Would you like to play again? (y/n): ");
        scanf(" %c", &playAgain);
    }
    if(playAgain=='n')
        {
        main();
        }
    return 0;
}
