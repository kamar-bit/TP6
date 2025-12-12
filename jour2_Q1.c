#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int is_invalid(int num) {
    char s[20];
    sprintf(s, "%d", num);         
    int len = strlen(s);

    if (len % 2 != 0) return 0;      

    int half = len / 2;
    for (int i = 0; i < half; i++) {
        if (s[i] != s[i + half]) return 0;   
    }

    return 1; 
}

int main() {
    FILE *input;
    int nbr_invalide = 0;
    int a, b;

    input = fopen("./02.input", "r");

    while (fscanf(input, " %d-%d", &a, &b) == 2) {
        int inter = a;                  
        while (inter <= b) {
            if (is_invalid(inter)) {
                nbr_invalide += inter;   
            }
            inter++;                   
        }
    }


    printf("la somme des nbr invalides est : %d\n", nbr_invalide);
    return 0;
}
