#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int displayLogoGame_02()
{
    FILE *file;
    char ch;

    // Open the text file
    file = fopen("C:\\Users\\mriga\\OneDrive\\Desktop\\Aracde_Sem_1\\Games\\Game_2\\Game_2_Ascii.txt", "r");

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







void playhighlow()
{
srand(time(NULL));
int number=rand()%100+1;
int guess;
int m=0;
int lives=7;
while (lives!=0)
{
    printf("\n \n \n *******************************************\n");
printf("ENTER A GUESS NUMBER BETWEEN 1-100 : ");
scanf("%d",&guess);
if(guess==number)
{
printf("YOU WIN\n");
break;
}
else if(guess>number)
{
    if(lives==1)
    {
      lives--;
    }
    else{lives--;
printf("TOO HIGH , GUESS A SMALLER NUMBER\n");
printf("\n");
}}
else if(guess<number)
{
    if(lives==1)
    {
      lives--;
    }
    else{
lives--;
printf("TOO LOW , GUESS A GREATER NUMBER\n");
printf("\n");
}}

}
if(lives==0)
    {
        printf("NO MORE MOVES LEFT\n");
        printf("THE NUMBER WAS %d\n",number);
    }
}


int Game2(){
    system("cls");
    displayLogoGame_02();
    char playAgain = 'y';
    while (playAgain == 'y') {
        playhighlow();
        printf("Would you like to play again? (y/n): ");
        scanf(" %c", &playAgain);
    }
    if(playAgain=='n')
        {
        system("cls");
        main();

        }
    return 0;
}
