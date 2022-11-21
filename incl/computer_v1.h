/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   computer_v1.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <ibouabda@42.students.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 13:45:07 by ibouabda          #+#    #+#             */
/*   Updated: 2022/11/21 15:00:06 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMPUTER_V1_H

# define COMPUTER_V1_H

#include "../libft/incl/libft.h"
#include<stdio.h>
#include<complex.h> 
#include<math.h>

int ft_verif(char *str, int i);
int ft_verif2(char *str, int i);
int ft_verif3(char *str, int i);
int	ft_parseur(char *str, double *x0, double *x1, double *x2, double *res);
int calculator(double c, double b, double a, double res);
double simplificator(double c, double b, double a, double res);

#endif
