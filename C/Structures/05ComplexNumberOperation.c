#include <stdio.h>
typedef struct
{
    double real;
    double imag;
} Complex;
Complex addComplex(Complex num1, Complex num2)
{
    Complex result;
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    return result;
}
Complex multiplyComplex(Complex num1, Complex num2)
{
    Complex result;
    result.real = (num1.real * num2.real) - (num1.imag * num2.imag);
    result.imag = (num1.real * num2.real) + (num1.imag * num2.imag);
    return result;
}
int main()
{
    Complex num1, num2;
    printf("Input Detail of First Number : ");
    scanf("%lf%lf", &num1.real, &num1.imag);
    printf("Input Detail of Second Number : ");
    scanf("%lf%lf", &num2.real, &num2.imag);
    Complex r1 = addComplex(num1, num2);
    Complex r2 = multiplyComplex(num1, num2);
    printf("After adding : %.2lf + %.2lfi\n", r1.real, r1.imag);
    printf("After multiplication : %.2lf + %.2lfi\n", r2.real, r2.imag);
    return 0;
}