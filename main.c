#include <stdio.h>
#include <string.h>

int main (int argc, char** argv) {
    printf("Take notes!\n");
    printf("\t\t\t - Drew Knolton, Coder's Life IO\n\n");

    char name[10];
    int answer;
    float total;

    printf("What is your name? ");
    scanf("%s", name);

    printf("What is the answer? ");
    scanf("%d", &answer);

    printf("What is the total cost? ");
    scanf("%f", &total);

    printf("%s is dropping some knowledge.\n", name);
    printf("Everyone knows that %d is the answer.\n", answer);
    printf("The total sums up to $%.2f with taxes.\n", total);

    int seasons = 6;
    seasons = seasons + strlen(name);

    printf("Have look up the %d seasons and waiting for the %s movie.\n", seasons, "one");

    return 0;
}