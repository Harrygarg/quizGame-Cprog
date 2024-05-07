#include <stdio.h>

int main() {
    char answer;
    int score = 0;

    printf("Welcome to the Quiz Game!\n");

    // Question 1
    printf("\nQuestion 1: What is the capital of France?\n");
    printf("A. London\nB. Paris\nC. Rome\nD. Berlin\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect. The correct answer is B. Paris.\n");
    }

    // Question 2
    printf("\nQuestion 2: What is the largest mammal?\n");
    printf("A. Elephant\nB. Blue Whale\nC. Giraffe\nD. Lion\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect. The correct answer is B. Blue Whale.\n");
    }

    // Question 3
    printf("\nQuestion 3: Who painted the Mona Lisa?\n");
    printf("A. Michelangelo\nB. Leonardo da Vinci\nC. Pablo Picasso\nD. Vincent van Gogh\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect. The correct answer is B. Leonardo da Vinci.\n");
    }

    // Question 4
    printf("\nQuestion 4: What is the chemical symbol for water?\n");
    printf("A. H2O\nB. CO2\nC. NaCl\nD. O2\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'A' || answer == 'a') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect. The correct answer is A. H2O.\n");
    }

    // Question 5
    printf("\nQuestion 5: Which planet is known as the Red Planet?\n");
    printf("A. Earth\nB. Mars\nC. Venus\nD. Jupiter\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect. The correct answer is B. Mars.\n");
    }

    // Question 6
    printf("\nQuestion 6: Who wrote 'Romeo and Juliet'?\n");
    printf("A. William Shakespeare\nB. Jane Austen\nC. Charles Dickens\nD. Mark Twain\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'A' || answer == 'a') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect. The correct answer is A. William Shakespeare.\n");
    }

    // Question 7
    printf("\nQuestion 7: What is the tallest mountain in the world?\n");
    printf("A. K2\nB. Mount Everest\nC. Kanchenjunga\nD. Lhotse\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect. The correct answer is B. Mount Everest.\n");
    }

    // Question 8
    printf("\nQuestion 8: Who was the first President of the United States?\n");
    printf("A. Thomas Jefferson\nB. George Washington\nC. Abraham Lincoln\nD. John Adams\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect. The correct answer is B. George Washington.\n");
    }

    // Question 9
    printf("\nQuestion 9: What is the chemical symbol for gold?\n");
    printf("A. Go\nB. Au\nC. Ag\nD. Gd\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect. The correct answer is B. Au.\n");
    }

    // Question 10
    printf("\nQuestion 10: What is the smallest prime number?\n");
    printf("A. 0\nB. 1\nC. 2\nD. 3\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect. The correct answer is C. 2.\n");
    }

    // Display final score
    printf("\nYour final score is: %d out of 10\n", score);

    return 0;
}
