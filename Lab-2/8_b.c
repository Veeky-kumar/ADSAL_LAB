#include <stdio.h>

int main() {
    char lookup[256] = {0};
    lookup['a'] = lookup['e'] = lookup['i'] = lookup['o'] = lookup['u'] = 1;
    lookup['A'] = lookup['E'] = lookup['I'] = lookup['O'] = lookup['U'] = 1;
    char str[200];
    int count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i]; i++)
        if (lookup[(unsigned char)str[i]]) count++;
    printf("Number of vowels: %d\n", count);
    return 0;
}