#include <stdio.h>

int main() {
    int n, age[1000], i, m1, m2;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &age[i]);
    }
    for (i = 0; i < n-1; i++) {
        int z = i;
        for (int j = i+1; j < n; j++) {
            if (age[j] < age[z]) {
                z = j;
            }
        }
        int temp = age[i];
        age[i] = age[z];
        age[z] = temp;
    }
    if (n % 2 == 1) {
        m1 = age[(n+1)/2 - 1];
        printf("%d\n", m1);
    } else {
        m1 = age[n/2 - 1];
        m2 = age[n/2];
        printf("%d %d\n", m1, m2);
    }
    return 0;
}
