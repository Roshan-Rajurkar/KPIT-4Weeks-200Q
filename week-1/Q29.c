#include <stdio.h>

int main()
{
    int class_obtained, subjects_failed;

    printf("Enter the class obtained by the student (1 for first class, 2 for second class, 3 for third class): ");
    scanf("%d", &class_obtained);

    printf("Enter the number of subjects failed: ");
    scanf("%d", &subjects_failed);

    switch (class_obtained)
    {
    case 1:
        if (subjects_failed <= 3)
            printf("Grace marks: %d\n", subjects_failed * 5);
        else
            printf("No grace marks\n");
        break;
    case 2:
        if (subjects_failed <= 2)
            printf("Grace marks: %d\n", subjects_failed * 4);
        else
            printf("No grace marks\n");
        break;
    case 3:
        if (subjects_failed == 1)
            printf("Grace marks: %d\n", subjects_failed * 5);
        else if (subjects_failed > 1)
            printf("No grace marks\n");
        break;
    default:
        printf("Invalid class entered!\n");
    }

    return 0;
}
