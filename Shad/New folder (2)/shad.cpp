#include <stdio.h>

int lengthFinder(char *line) {
    int maxVal = 0;
    for(int i = 0; i < 101; ++i) {
        if(line[i] == '\0') {
            maxVal = i;
            break;
        }
    }
   return maxVal;
}

void convert_to_uppercase(char *line, int length) {
    for(int i = 0; i < length; ++i) {
        if(line[i] >= 'a' && line[i] <= 'z') {
            line[i] = 'A' + line[i] - 'a';
        }
    }
}

int main() {
    char line[101];
    scanf("%s", line);
    getchar();
    //printf("%s", line);
    int len = lengthFinder(line);
    //printf("len = %d\n", len);
    convert_to_uppercase(line, len);
    printf("%s", line);
    return 0;
}
