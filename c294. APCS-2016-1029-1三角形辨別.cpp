#include <stdio.h>

int main(void) {
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);
    
    // Sort the values in ascending order
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
	//note this!! This is cray!//
    printf("%d %d %d\n", a, b, c);

    if (a + b <= c) {
        printf("No");
    } else if (a * a + b * b < c * c) {
        printf("Obtuse");
    } else if (a * a + b * b == c * c) {
        printf("Right");
    } else if (a * a + b * b > c * c) {
        printf("Acute");
    }

    return 0;
}
//https://zerojudge.tw/ShowProblem?problemid=c294
