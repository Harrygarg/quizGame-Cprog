#include <stdio.h>

int main() {
    char answer;
    int score = 0;
    char user_answers[10];

    printf("Welcome to the most interesting Quiz-Quiz\n");
    printf("**************************\n");
    printf("C programming\n");
     printf("**************************\n");
    printf("C programming\n");

    
    // Question 1
    printf("\nQuestion 1 (9 remaining): What is the capital of France?\n");
    printf("A. London\nB. Paris\nC. Rome\nD. Berlin\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    user_answers[0] = answer;
    if (answer == 'B' || answer == 'b') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect. The correct answer is B. Paris.\n");
    }

    // Question 2
    printf("\nQuestion 2 (8 remaining): What is the largest mammal?\n");
    printf("A. Elephant\nB. Blue Whale\nC. Giraffe\nD. Lion\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    user_answers[1] = answer;
    if (answer == 'B' || answer == 'b') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect. The correct answer is B. Blue Whale.\n");
    }

    // Question 3
    printf("\nQuestion 3 (7 remaining): Who painted the Mona Lisa?\n");
    printf("A. Michelangelo\nB. Leonardo da Vinci\nC. Pablo Picasso\nD. Vincent van Gogh\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    user_answers[2] = answer;
    if (answer == 'B' || answer == 'b') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect. The correct answer is B. Leonardo da Vinci.\n");
    }

    // Question 4
    printf("\nQuestion 4 (6 remaining): What is the chemical symbol for water?\n");
    printf("A. H2O\nB. CO2\nC. NaCl\nD. O2\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    user_answers[3] = answer;
    if (answer == 'A' || answer == 'a') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect. The correct answer is A. H2O.\n");
    }

    // Question 5
    printf("\nQuestion 5 (5 remaining): Which planet is known as the Red Planet?\n");
    printf("A. Earth\nB. Mars\nC. Venus\nD. Jupiter\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    user_answers[4] = answer;
    if (answer == 'B' || answer == 'b') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect. The correct answer is B. Mars.\n");
    }

    // Question 6
    printf("\nQuestion 6 (4 remaining): Who wrote 'Romeo and Juliet'?\n");
    printf("A. William Shakespeare\nB. Jane Austen\nC. Charles Dickens\nD. Mark Twain\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    user_answers[5] = answer;
    if (answer == 'A' || answer == 'a') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect. The correct answer is A. William Shakespeare.\n");
    }

    // Question 7
    printf("\nQuestion 7 (3 remaining): What is the tallest mountain in the world?\n");
    printf("A. K2\nB. Mount Everest\nC. Kanchenjunga\nD. Lhotse\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    user_answers[6] = answer;
    if (answer == 'B' || answer == 'b') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect. The correct answer is B. Mount Everest.\n");
    }

    // Question 8
    printf("\nQuestion 8 (2 remaining): Who was the first President of the United States?\n");
    printf("A. Thomas Jefferson\nB. George Washington\nC. Abraham Lincoln\nD. John Adams\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    user_answers[7] = answer;
    if (answer == 'B' || answer == 'b') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect. The correct answer is B. George Washington.\n");
    }

    // Question 9
    printf("\nQuestion 9 (1 remaining): What is the chemical symbol for gold?\n");
    printf("A. Go\nB. Au\nC. Ag\nD. Gd\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    user_answers[8] = answer;
    if (answer == 'B' || answer == 'b') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect. The correct answer is B. Au.\n");
    }

    // Question 10
    printf("\nQuestion 10 (0 remaining): What is the smallest prime number?\n");
    printf("A. 0\nB. 1\nC. 2\nD. 3\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    user_answers[9] = answer;
    if (answer == 'C' || answer == 'c') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect. The correct answer is C. 2.\n");
    }

    // Question 11
    printf("\nQuestion 11 (0 remaining): What is the smallest prime number?\n");
    printf("A. 0\nB. 1\nC. 2\nD. 3\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    user_answers[9] = answer;
    if (answer == 'C' || answer == 'c') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect. The correct answer is C. 2.\n");
    }

    // Question 12
    printf("\nQuestion 12 (0 remaining): What is the smallest prime number?\n");
    printf("A. 0\nB. 1\nC. 2\nD. 3\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    user_answers[9] = answer;
    if (answer == 'C' || answer == 'c') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect. The correct answer is C. 2.\n");
    }
    // Display final score
    printf("\nYour final score is: %d out of 10\n", score);

    // Display user's answers and correct answers
    printf("\nHere are your answers and the correct answers:\n");
    printf("Question\tYour Answer\tCorrect Answer\n");
    for (int i = 0; i < 10; i++) {
        char correct_answer;
        switch (i) {
            case 0:
                correct_answer = 'B';
                break;
            case 1:
                correct_answer = 'B';
                break;
            case 2:
                correct_answer = 'B';
                break;
            case 3:
                correct_answer = 'A';
                break;
            case 4:
                correct_answer = 'B';
                break;
            case 5:
                correct_answer = 'A';
                break;
            case 6:
                correct_answer = 'B';
                break;
            case 7:
                correct_answer = 'B';
                break;
            case 8:
                correct_answer = 'B';
                break;
            case 9:
                correct_answer = 'C';
                break;
            default:
                break;
        }
        printf("%d\t\t%c\t\t%c\n", i + 1, user_answers[i], correct_answer);
    }

     printf("**************************\n");
    printf("THANKS FOR GIVING THE TEST !!!!\n");
    printf("**************************\n");
    printf("THANKS FOR GIVING THE TEST !!!!\n");
    return 0;
}
