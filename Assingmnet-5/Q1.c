#include <stdio.h>
#include <string.h>

int main()
{
    char word[] = "quarrel"; // The word to be guessed
    char guessed[100]; // Array to store the guessed characters
    int attempts = 3; // Number of attempts allowed
    int i, j, found, len;
    len = strlen(word);
    char hidden[len];
    hidden[0]=word[0];

    // Initialize the hidden word with underscores
    for (i = 1; i < len-1; i++) {
         hidden[i] = '_';
    }
    hidden[len] = '\0';
    hidden[len-1]=word[len-1];

    printf("        HANGMAN GAME\n");
    printf("        ------------\n");

    while (attempts > 0) {
        printf("\nWord: %s\n", hidden);
        printf("Attempts left: %d\n", attempts);
        printf("Enter a character: ");
        scanf(" %c", &guessed[0]);

        found = 0;
        for (i = 0; i < len; i++) {
            if (word[i] == guessed[0]) {
                hidden[i] = guessed[0];
                found = 1;
            }
        }

        if (!found) {
            attempts--;
            printf("Wrong guess!\n");
        }

        if (strcmp(word, hidden) == 0) {
            printf("\nCongratulations! You guessed the word: %s\n", word);
            break;
        }
    }

    if (attempts == 0) {
        printf("\nSorry, you lost. The word was: %s\n", word);
    }

    return 0;
}

