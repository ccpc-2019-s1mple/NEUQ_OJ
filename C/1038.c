//1038

#include <stdio.h>
#define PI 3.14

int main() {
	float r = 0.0;
	float h = 0.0;
	float C1 = 0.0, Sa = 0.0, Sb = 0.0, Va = 0.0, Vb = 0.0;
    scanf("%f %f", &r, &h);
    
    C1 = PI * r * 2;
    Sa = PI * r * r;
    Sb = 4 * Sa;
    Va = 4 / 3 * PI * r * r * r;
    Vb = Sa * h;
	
    printf("C1=%.2f\n", C1);
    printf("Sa=%.2f\n", Sa);
    printf("Sb=%.2f\n", Sb);
    printf("Va=%.2f\n", Va);
    printf("Vb=%.2f\n", Vb);
    
    return 0;
}
