#include <stdio.h>

double weight, height, yourbmi;

int main() {
    printf("BMI VALUES\n");

    printf("請輸入身高(米)與體重(公斤)，用空格分隔: ");
    scanf("%lf %lf", &height, &weight);

    yourbmi = weight / (height * height);

    printf("您的BMI值為: %.2f\n", yourbmi);

    if (yourbmi <= 18.5)
        printf("Underweight\n");
    else if (yourbmi > 18.5 && yourbmi <= 24.9)
        printf("Normal\n");
    else if (yourbmi > 24.9 && yourbmi <= 29.9)
        printf("Overweight\n");
    else
        printf("Obese\n");

    return 0;
}