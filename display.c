#include <stdio.h>

int main()
{
char n, a, b, c, d, e, f, g;

printf("Digite um numero de 4 bits\n");
scanf("%c", &n);

char A = n&1, B = (n>>1)&1, C = (n>>2)&1, D = (n>>3)&1;

a = B&&C || !A&&C || A&&!D || !B&&!D || !A&&B&&D || A&&!B&&!C;
b = !B&&!D || !B&&!C || !A&&C&&D || !A&&!C&&!D || A&&!C&&D;
c = !C&&D || !A&&D || A&&!B || !A&&B || !B&&!C;
d = !A&&C&&!D || !A&&!B&&C || A&&!B&&D || B&&!C&&D || A&&B&&!D || !B&&!C&&!D;
e = C&&!D || A&&C || A&&B || !B&&!D;
f = A&&C || A&&!B || B&&!D || !C&&!D || !A&&B&&!C;
g = A&&C || !B&&C || A&&!B || B&&!C&&D || !A&&B&&!D;

printf("%d%d%d%d%d%d%d", a, b, c, d, e, f, g);

return 0;
}
