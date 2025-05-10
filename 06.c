#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>   // Add this for random number seeding

void displayMenu();
void playTicTacToe();
void playNumberGuessing();
void displayRules();

int main() {
    srand(time(NULL));  // Initialize random number generator
    char choice;
    
    do {
        system("cls");  // Clear screen
        displayMenu();
        choice = getch();
        
        switch(choice) {
            case '1':
                playTicTacToe();
                break;
            case '2':
                playNumberGuessing();
                break;
            case '3':
                displayRules();
                break;
            case '4':
                printf("\nThank you for playing! Goodbye!\n");
                break;
            default:
                printf("\nInvalid choice! Press any key to continue...");
                getch();
        }
    } while(choice != '4');
    
    return 0;
}

void displayMenu() {
    printf("\n=================================\n");
    printf("        GAME PANEL MENU          \n");
    printf("=================================\n");
    printf("1. Tic Tac Toe\n");
    printf("2. Number Guessing Game\n");
    printf("3. Game Rules\n");
    printf("4. Exit\n");
    printf("=================================\n");
    printf("Enter your choice (1-4): ");
}

void playTicTacToe() {
    system("cls");
    printf("\nLaunching Tic Tac Toe...\n");
    printf("(This would normally start the Tic Tac Toe game)\n");
    printf("\nPress any key to return to menu...");
    getch();
}

void playNumberGuessing() {
    system("cls");
    int number, guess, attempts = 0;
    number = rand() % 100 + 1;  // Generate random number between 1 and 100
    
    printf("\nNumber Guessing Game!\n");
    printf("I have selected a number between 1 and 100\n");
    
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
        
        if(guess > number) {
            printf("Too high! Try again.\n");
        } else if(guess < number) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts!\n", attempts);
        }
    } while(guess != number);
    
    printf("\nPress any key to return to menu...");
    getch();
}

void displayRules() {
    system("cls");
    printf("\nGame Rules:\n");
    printf("===========\n");
    printf("1. Tic Tac Toe:\n");
    printf("   - Two players take turns marking X and O\n");
    printf("   - First to get three in a row wins\n\n");
    printf("2. Number Guessing:\n");
    printf("   - Computer picks a number between 1 and 100\n");
    printf("   - Try to guess it in as few attempts as possible\n");
    printf("\nPress any key to return to menu...");
    getch();
}