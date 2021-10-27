#include <stdio.h>
#include <math.h>

int main() {
    double step, interval[2], step_2, interval_2[2], fault, results, sum;
    printf("Enter the function 1 and function 2 steps(0.02 0.05)\n");
    scanf("%lf %lf", &step, &step_2);
    printf("Enter the function 1 and function 2 intervals(0.5 0.9 0.5 0.7 )\n");
    scanf("%lf %lf %lf", &interval[0], &interval[1], &interval_2[0], &interval_2[1]);
    printf("Enter the function 2 fault value(0.001)\n");
    scanf("%lf", &fault);
    printf(" \n");
    for (double x = interval[0]; x < 0.6; x += step) {
        results = cos(sqrt(x));
        printf("Result 1 : %lf \n", results);
    }
    printf(" \n");
    for (double x = 0.6; x < 0.7; x += step) {
        results = 1 / tan(pow(x, 2));
        printf("Result 2 : %lf\n", results);
    }
    printf(" \n");
    for (double x = 0.7; x <= 0.9; x += step) {
        results = atan(pow(x, 3));
        printf("Result 3 : %lf\n", results);
    }
    printf(" \n");
    for (double k, x = interval_2[0]; x <= interval_2[1]; x += step_2) {
        k = 1;
        sum = (x + 2) / (k * (k + 2));
        results = sum;
        while (sum > fault) {
            sum = (x + 2) / (k * (k + 2));
            k++;
            results += sum;
        }
        printf("Result function 2: %lf\n", results);
    }
    return 0;
}