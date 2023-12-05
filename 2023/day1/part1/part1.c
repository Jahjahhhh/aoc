#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    FILE* input;
    char line[60];
    int sum = 0;

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
            if(isdigit(line[i])) {
                if(first_num == -1) {
                    first_num = line[i] - '0';
                }
                last_num = line[i] - '0';
            }
            i++;
        }
        if(first_num != -1 && last_num != -1) {
            int num = (first_num * 10) + last_num;
            sum += num;
        }
    }
    printf("sum: %d\n", sum);
    fclose(input);
}
