#include <stdio.h>

int main() {
        int pl[6][2] = {{250,310},{200,420},{275,260},{190,410},{300,290},{240,330}};
        int n;
        scanf("%d",&n);
        int aq = 0;
        for (int i = 0;i<6;i++) {
            if (pl[i][0]*pl[i][1] >=n) {
                aq++;
            }
        }
        printf("Jumlah aquarium yang memenuhi syarat adalah sebanyak %d aquarium.",aq);
}
