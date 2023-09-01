#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

int main(void) {
    //inicialização das váriaveis
    int r = 2;
    int s = 5;
    int t = -1;
    int x = 3;
    int y = 1;
    int z = 0;

    //Inicialização das váriaveis booleanas
    bool A;
    bool B;
    bool C;
    bool D;

    A = ((r>=5) || (t>z) && (x-y+r > 3 * z));
    B = ((fabs(t) + 3 >= 4) && !(3*r/2<s*3));
    C = ((x=2) || (y=1) && ((z=0) || (r > 3) && (s<10)));
    D = ((r != s) || !(sqrt(r) < sqrt(x)) && (4327*x*s*z==0));

    printf("A eh %s\n", A ? "true" : "false");
    printf("B eh %s\n", B ? "true" : "false");
    printf("C eh %s\n", C ? "true" : "false");
    printf("D eh %s\n", D ? "true" : "false");

    return 0;
}