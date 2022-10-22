#include "C_string.h"
#include <stdio.h>

void output_test_strcmp(int c, char *name1, char *name2) {
    if (c > 0) {
        printf("%s is larger than %s.\n", name1, name2);
    } else if (c < 0) {
        printf("%s is smaller than %s.\n", name1, name2);
    } else {
        printf("%s and %s are equal.\n", name1, name2);
    }
    printf("num = %d\n\n", c);
}

int test_strcmp() {
    printf("TEST STRCMP\n");
    printf("======================\n");
    char name1[5] = "Jake";
    char name2[5] = "Adam";
    int c = strcmp(name1, name2);
    output_test_strcmp(c, name1, name2);

    char name3[5] = "Adam";
    char name4[5] = "Jake";
    int d = strcmp(name3, name4);
    output_test_strcmp(d, name3, name4);

    char name5[5] = "Jake";
    char name6[5] = "Jake";
    int e = strcmp(name5, name6);
    output_test_strcmp(e, name5, name6);

    char name7[5] = "Jake";
    char name8[7] = "Sophon";
    int f = strcmp(name7, name8);
    output_test_strcmp(f, name7, name8);

    char name0[16] = "Rake Joggenbuck";
    char name9[15] = "Hdam Autchings";
    int g = strcmp(name9, name0);
    output_test_strcmp(d, name9, name0);

    printf("Adam is cooler tho.\n\n");
}

void test_strcpy() {
    printf("TEST STRCPY\n");
    printf("======================\n");
    char *name = "JakeRoggenbuck";

    char into[100];

    strcpy(into, name);
    printf("%s\n", into);
}

int main() {
    test_strcmp();
    test_strcpy();
}
