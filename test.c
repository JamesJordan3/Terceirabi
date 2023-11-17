#include <stdio.h>

#define CloneString "You are a very big cringe\n"

int main(void){
    FILE *pF = fopen("Testing.txt", "w");

    for (unsigned int i = 0; i < 1000000; i++){
        fprintf(pF, CloneString);
    }
}