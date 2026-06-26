#include<stdio.h>
int main()
{
    int answer;
    int score = 0;

    printf("Question 1\n");
    printf("What is the capital of India?\n");
    printf("1. Delhi\n2. Mumbai\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer : ");
    scanf("%d",&answer);

    if(answer == 1)
    {
        score++;
    }

    printf("\nQuestion 2\n");
    printf("How many days are there in a week?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("Enter your answer : ");
    scanf("%d",&answer);

    if(answer == 3)
    {
        score++;
    }

    printf("\nQuestion 3\n");
    printf("Which language is used for C programming?\n");
    printf("1. C\n2. Java\n3. Python\n4. HTML\n");
    printf("Enter your answer : ");
    scanf("%d",&answer);

    if(answer == 1)
    {
        score++;
    }

    printf("\nYour Score = %d out of 3\n",score);

    return 0;
}