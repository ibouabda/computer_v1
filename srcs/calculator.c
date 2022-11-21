/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculator.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <ibouabda@42.students.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:59:43 by ibouabda          #+#    #+#             */
/*   Updated: 2022/11/21 15:31:08 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/computer_v1.h"

int calculatorx2(double c, double b, double a)
{
    double delta;
    double x1;
    double x2;
    double complex i1;
    double complex i2;

    printf("Polynomial degree 2\n");
    delta = (b * b) - (4 * a * c);
    printf("delta = %f\n", delta);
    if (delta == 0.0)
    {
        x1 = -b / (2 * a);
        printf("There is one solution x1 = %f\n", x1);
    }
    else if (delta > 0.0)
    {
        x1 = (-b + ft_dsqrt(delta)) / (2 * a);
        x2 = (-b - ft_dsqrt(delta)) / (2 * a);
        printf("The solution is x1 = %f x2 = %f\n", x1, x2);
    }
    else
    {
        i1 = (-b - I * ft_dsqrt(ft_dabs(delta))) / (2 * a);
        i2 = (-b + I * ft_dsqrt(ft_dabs(delta))) / (2 * a);
        printf("The Complex Solution is : x1 = %.2f + %.2fi x2 = %.2f %+.2fi\n", creal(i1), cimag(i1), creal(i2), cimag(i2));
    }
    return (0);
}

int calculatorx1(double c, double b)
{
    printf("Polynomial degree 1\n");
    printf("The Solution is %f\n", -c / b);
    return (0);

}

double simplificator(double c, double b, double a, double res)
{
    c = c - res;
    printf("Simplified Version : %f * X^0 + %f * X^1 + %f * X^2 = 0\n", c, b, a);
    if (a == 0.0 && b == 0.0)
    {
        if (c == 0.0)
            printf("All numbers are solutions");
        else
            printf("There is no solution\n");
    }
    else if (a == 0)
        calculatorx1(c,b);
    else
        calculatorx2(c, b, a);
    return (c);
}