/* A vital part of programing is getting input from a user*/

#include <stdio.h>
#include <string.h>

int main() {
    // Runtime variables, variables that the user will change
        // ASM equivilent is 'section .bss'
        // Give tmp values incase the buffer already contains data
    int age = 0;
    /* Bellow are two examples I just didn't feel like printing, and I don't want to bother with a warning about unused variables.*/
    // float decimal = 0.0;
    // char letter = '\0'; // Null terminator
    char name[30] = "";  // 30 bytes available
    
    printf("How old are you?\n>  ");
    scanf("%d", &age);  // Get input, type decimal, to buffer address(where the variable is in memory)
    
    getchar();  // Clear input buffer
    printf("What's your name?\n>  ");
    fgets(name, sizeof(name), stdin);   // Allows for spaces in input
        /* NASM x86_64 equivilent
            mov rax, 0
            mov rdi, 0
            mov rsi, name
            mov rdx, name_len
        */
    name[strlen(name) -1] ='\0'; // Remove the 0x0A

    printf("You are %d years old.\n", age);
    printf("And your name is %s.\n", name);
    return 0;
}