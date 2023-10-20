#include <stdio.h>
#include <string.h>

int main() {
    char input[501];
    char reversed[501];
    
    scanf("%500[^\n]", input);
    
    int length = strlen(input);
    
    for (int i = 0; i < length; i++) {
        reversed[i] = input[length - 1 - i];
    }
    
    reversed[length] = '\0'; 
    
    printf("%s", reversed);
    
    return 0;
}

