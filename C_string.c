int strcmp(const char *a, const char *b) {
    // *a will evaluate as true as long as *a isn't zero, meaning it hasn't
    // ended yet
    while (*a && (*a == *b)) {
        // Iterate the pointer of a and b
        // In C, a and b are pointers to the start of an array
        // i.e. move where the pointer is
        a++;
        b++;
    }

    // If at the end of this, they are equal, this would be 0, meaning they are
    // equal otherwise a or b would be larger and you would get either a
    // negative or positive number showing which array is "bigger"
    return *a - *b;
}

char *strcpy(char *dest, const char *src) {
    // keep the original start of dest
    char *tmp = dest;
    while (*src) {
        // Copy one part to the next
        *dest = *src;
        dest++;
        src++;
    }
    return tmp;
}
