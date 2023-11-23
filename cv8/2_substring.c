#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Initial string content
const char *str_init = "Hello World!";
// Find first substring occurrence in a string and return its starting position.
// Return -1 if the string does not contain substring.
int find_substr(char *str, char *substr) {
}
// Replace same-length substrings in a string.
void replace_same_length(char *str, char *substr, char *new_substr) {
}
// Replace substring in a string with any new substring.
// Returns new string with replaced substring or NULL in case of any error.
char *replace(char *str, char *substr, char *new_substr) {
}
int main() {
    // Allocate new string.
    char *str = (char *)malloc(strlen(str_init) + 1);
    if (str == NULL) {
        return 1;
    }
    // Set the initial string by copying it.
    strcpy(str, str_init);
    // Replace substring with a new same-length substring.
    replace_same_length(str, "World!", "worlds");
    printf("%s\n", str);
    // Replace substring with a new shorter substring.
    str = replace(str, "worlds", "IZP!");
    if (str == NULL) {
        return 1;
    }
    printf("%s\n", str);
    // Replace substring with a new longer substring.
    str = replace(str, "IZP!", "World!");
    if (str == NULL) {
        return 1;
    }
    printf("%s\n", str);
    // Cleanup
    free(str);
    printf("Successully replaced all substrings!\n");
    // Allocate and initialize a new string.
    free(str);
    str = (char *)malloc(strlen(str_init) + 1);
    if (str == NULL) {
        return 1;
    }
    strcpy(str, str_init);
    // Try using replace with substring that is not in the string.
    str = replace(str, "worlds", "World!");
    if (str == NULL) {
        free(str);
        return 1;
    }
    printf("%s\n", str);
    return 0;
}