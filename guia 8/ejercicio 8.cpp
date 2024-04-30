#include <stdio.h>

int main() {
    int A = 3500000;
    int B = 5000000;
    int AC = 15;
    int BC = 7;
    int AA = A * AC / 100;
    int AB = B * BC / 100;
    int tota = AA + A;
    int totb = AB + B;
    int x = 1;

    for (x=1; <= 100;x++) {
        if (tota > totb) {
            int tot = 1980 + x;
            printf("En el año %d la población A supera la población B\n", tot);
            printf("x: %d\n", x);
            printf("tota: %d\n", tota);
            printf("totb: %d\n", totb);
            printf("AA: %d\n", AA);
            printf("AB: %d\n", AB);
            printf("AC: %d\n", AC);
            break;
        } else {
            tota += AA;
            totb += AB;
        }


    }

    return 0;
}
