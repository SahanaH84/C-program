#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) {
        char* emptyStr = (char*)malloc(sizeof(char));
        emptyStr[0] = '\0';
        return emptyStr;
    }
    int prefixLen = 0;
    int minLen = strlen(strs[0]);
    for (int i = 1; i < strsSize; i++) {
        int currentLen = strlen(strs[i]);
        if (currentLen < minLen) {
            minLen = currentLen;
        }
    }
    for (int i = 0; i < minLen; i++) {
        char currentChar = strs[0][i];
        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] != currentChar) {
                char* prefix = (char*)malloc((prefixLen + 1) * sizeof(char));
                strncpy(prefix, strs[0], prefixLen);
                prefix[prefixLen] = '\0';
                return prefix;
            }
        }
        
        prefixLen++;
    }
    char* prefix = (char*)malloc((prefixLen + 1) * sizeof(char));
    strncpy(prefix, strs[0], prefixLen);
    prefix[prefixLen] = '\0';
    return prefix;
}
int main() {
    int numStrings;
    printf("Enter the number of strings: ");
    scanf("%d", &numStrings);
    char *strs = (char)malloc(numStrings * sizeof(char));
    printf("Enter %d strings:\n", numStrings);
    for (int i = 0; i < numStrings; i++) {
        char input[100];
        scanf("%s", input);
        strs[i] = strdup(input);
    }
    printf("Longest common prefix: %s\n", longestCommonPrefix(strs, numStrings));
    for (int i = 0; i < numStrings; i++) {
        free(strs[i]);
    }
    free(strs);
    return 0;
}