#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void printFileContent(const char *fileName) {
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


int displayLogoGame_03() // displays the main
{
    FILE *file;
    char ch;

    // Open the text file
    file = fopen("C:\\Users\\mriga\\OneDrive\\Desktop\\Aracde_Sem_1\\Games\\Game_3\\Game_3_Ascii.txt", "r");

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



int playSlotMachine() {

    printf("                                                                PRESS < ENTER > TO CONTINUE\n\n");
    getchar();

    int x, y, z, num1, num2, num3;
    x = rand();
    y = rand();
    z = rand();
    num1 = 1 + (x % 9);
    num2 = 1 + (y % 9);
    num3 = 1 + (z % 9);
    for(int i=0;i<=2;i++)
    {
        printf("                                                                   ");
        for(int j=0;j<19;j++)
        {
            if(i==0)
            {
                printf("-");
            }
            else if((i>0&&j==0)||(i>0&&j==18)||(i>0&&j==6)||(i>0&&j==12))
            {
                printf("|");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("                                                                   | -%d- | -%d- | -%d- |\n",num1,num2,num3);
    for(int i=0;i<=2;i++)
    {
        printf("                                                                   ");
        for(int j=0;j<19;j++)
        {
            if(i==2)
            {
                printf("-");
            }
            else if((i<2&&j==0)||(i<2&&j==18)||(i<2&&j==6)||(i<2&&j==12))
            {
                printf("|");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    if(num1==num2)
    {
        if(num2==num3)
        {
            printFileContent("C:\\Users\\mriga\\OneDrive\\Desktop\\Aracde_Sem_1\\Games\\Game_3\\SlotMachine_won.txt");


        }
    }
    else
    {
        printFileContent("C:\\Users\\mriga\\OneDrive\\Desktop\\Aracde_Sem_1\\Games\\Game_3\\SlotMachine_loss.txt");

    }
}

int Game3()
{
    displayLogoGame_03();
    srand(time(NULL));
    char playAgain = 'y';
    while (playAgain == 'y')
        {
        playSlotMachine();

        printf("Would you like to play again? (y/n): ");
        scanf(" %c", &playAgain);
        }
        if(playAgain=='n')
        {
        main();
        }

}




