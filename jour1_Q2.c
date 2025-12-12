#include <stdio.h>
#include <stdlib.h>

int main() {
    int pos = 50, inter;
    int zeros_passes = 0;
    FILE *input;
    char direction;
    int valeur;

    input = fopen("./01.input", "r");

    while (fscanf(input, " %c%d", &direction, &valeur) == 2) {

        if (direction == 'L') {
    
            int moves = valeur;
            while (moves > 0) {
                pos--;
                if (pos < 0) pos = 99;
                if (pos == 0) zeros_passes++;
                moves--;
            }
        } else if (direction == 'R') {
    
            int moves = valeur;
            while (moves > 0) {
                pos++;
                if (pos > 99) pos = 0;
                if (pos == 0) zeros_passes++;
                moves--;
            }
        }
    }


    printf("le nbr de zero est : %d\n", zeros_passes);
    return 0;
}
