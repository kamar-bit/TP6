#include <stdio.h>
#include <stdlib.h>
int main() {

    int pos = 50;
    int zeros_passes = 0;
    FILE *input ;
    char direction;
    int valeur;

    input=fopen("./01.input","r");
    while (fscanf(input," %c%d", &direction, &valeur) == 2) {
        
        if (direction == 'L') {
            pos -= valeur; 
        } else if (direction == 'R') {
            pos += valeur; 
        }
        pos = pos % 100;
        if(pos==0){
            zeros_passes += 1;
        }
        
    }

    printf("le nbr de zero est : %d\n", zeros_passes);

    return 0;
}