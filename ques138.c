// Print all enum names and integer values using a loop.

#include <stdio.h>

enum Names {
    RAM,
    SHYAM,
    GEETA,
    RADHA,
    ARJUN
};

int main() {
    enum Names n;

    char *Names[] = {
        "RAM",
        "SHYAM",
        "GEETA",
        "RADHA",
        "ARJUN"
    };

    for (n = RAM; n <= ARJUN; n++) {
        printf("%d = %s\n", n, Names[n]);
    }

    return 0;
}