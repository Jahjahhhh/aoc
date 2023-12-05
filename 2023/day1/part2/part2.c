#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    FILE* input;
    char line[60];
    int sum = 0, num;

    input = fopen("input.txt", "r");

    if(NULL == input) {
        printf("[ERROR Cannot open file.\n]");
        return 1;
    }
    while(fgets(line, 60, input) != NULL) {
        int i = 0;
        int first_num = -1;
        int last_num =1;

        while(line[i]) {
            
            if(isalpha(line[i])) {
                if(line[i] == 'o' && line[i+1] == 'n' && line[i+2] == 'e') {
                    if(first_num == -1) first_num = 1;
                    last_num = 1;
                } else if(line[i] == 't' && line[i+1] == 'w' && line[i+2] == 'o') {
                    if(first_num == -1) first_num = 2;
                    last_num = 2;
                } else if(line[i] == 't' && line[i+1] == 'h' && line[i+2] == 'r' && line[i+3] == 'e' && line[i+4] == 'e') {
                    if(first_num == -1) first_num = 3;
                    last_num = 3;
                } else if(line[i] == 'f' && line[i+1] == 'o' && line[i+2] == 'u' && line[i+3] == 'r') {
                    if(first_num == -1) first_num = 4;
                    last_num = 4;
                } else if(line[i] == 'f' && line[i+1] == 'i' && line[i+2] == 'v' && line[i+3] == 'e') {
                    if(first_num == -1) first_num = 5;
                    last_num = 5;
                } else if(line[i] == 's' && line[i+1] == 'i' && line[i+2] == 'x') {
                    if(first_num == -1) first_num = 6;
                    last_num = 6;
                } else if(line[i] == 's' && line[i+1] == 'e' && line[i+2] == 'v' && line[i+3] == 'e' && line[i+4] == 'n') {
                    if(first_num == -1) first_num = 7;
                    last_num = 7;
                } else if(line[i] == 'e' && line[i+1] == 'i' && line[i+2] == 'g' && line[i+3] == 'h' && line[i+4] == 't') {
                    if(first_num == -1) first_num = 8;
                    last_num = 8;
                } else if(line[i] == 'n' && line[i+1] == 'i' && line[i+2] == 'n' && line[i+3] == 'e') {
                    if(first_num == -1) first_num = 9;
                    last_num = 9;
                }
            } else if(isdigit(line[i])) {
                if(first_num == -1) {
                    first_num = line[i] - '0';
                }
                last_num = line[i] - '0';
            }
            i++;
        }
        if(first_num != -1 && last_num != -1) {
            num = (first_num * 10) + last_num;
            sum += num;
        }
    }
    printf("sum: %d\n", sum);
    fclose(input);
}
