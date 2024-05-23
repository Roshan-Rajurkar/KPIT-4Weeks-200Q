// (a) There are semicolons after each case label, which results in incorrect syntax.
//     The switch statement should not end with a semicolon.
//     Also, there are colons used instead of colons for case labels.
//     Also, there is no break statement after each case, which leads to fall-through behavior.
//     Fixed version:
#include <stdio.h>

int main() {
    int suite = 1;
    switch (suite) {
        case 0:
            printf("\nClub");
            break;
        case 1:
            printf("\nDiamond");
            break;
    }
    return 0;
}

// (b) The case labels in switch cannot be expressions.
//     They should be constant values.
//     Also, there are no break statements after each case, which leads to fall-through behavior.
//     Fixed version:
#include <stdio.h>

int main() {
    int temp;
    scanf("%d", &temp);
    switch (temp) {
        case 1 ... 20:
            printf("\nOoooooohhhh! Damn cool!");
            break;
        case 21 ... 30:
            printf("\nRain rain here again!");
            break;
        case 31 ... 40:
            printf("\nWish I am on Everest");
            break;
        default:
            printf("\nGood old nagpur weather");
    }
    return 0;
}

// (c) Switch statement cannot be used with floating-point values.
//     It works only with integer types.
//     Fixed version:
#include <stdio.h>

int main() {
    float a = 3.5;
    printf("\nSimply c");
    return 0;
}

// (d) Case labels cannot use logical OR (||) operators.
//     They should be constant values.
//     Also, there are no break statements after each case, which leads to fall-through behavior.
//     Fixed version:
#include <stdio.h>

int main() {
    int a = 3, b = 4, c;
    c = b - a;
    switch (c) {
        case 1:
        case 2:
            printf("God give me an opportunity to change things");
            break;
        case 3:
        case 4:
            printf("God give me an opportunity to run my show");
            break;
    }
    return 0;
}
