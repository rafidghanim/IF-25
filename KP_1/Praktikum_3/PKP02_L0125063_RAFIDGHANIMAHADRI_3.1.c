#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int matriks[n][m];

/*
    int s = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matriks[i][j] = s++;
        }
    }

biar auto generate (tanpa interaksi user)
*/

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matriks[i][j]);
        }
    }
    printf("\n");
    for (int i = m-1; i>=0; i--) {
        for (int j = 0; j <n; j++) {
            printf("%d ",matriks[j][i]);
        }
    printf("\n");
    }

    return 0;
}

