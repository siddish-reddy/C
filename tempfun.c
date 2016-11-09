#include <stdio.h>

void tem_f_to_c(void);

int main()
{

    tem_f_to_c();
    return 0;
}

void tem_f_to_c(void)
{
    float tc;
    float tf;
    printf("enter temperature in Fahrenheit\n");
    scanf("%f",&tf);

    tc=5*(tf-32)/9;

    printf("in Celsius is %f",tc);
}
