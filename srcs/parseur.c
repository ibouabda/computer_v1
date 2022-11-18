/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parseur.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <ibouabda@42.students.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:46:11 by ibouabda          #+#    #+#             */
/*   Updated: 2022/11/18 17:15:20 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/computer_v1.h"

int ft_verif(char *str, int i)
{
	if (str[i] != '*')
		return (-1);
	if (str[++i] != 'X')
		return (-1);
	if (str[++i] != '^')
		return (-1);
	if (str[++i] != '0')
		return (-1);
	i++;
	return (i);
}

int ft_verif1(char *str, int i)
{
	if (str[i] != '*')
		return (-1);
	if (str[++i] != 'X')
		return (-1);
	if (str[++i] != '^')
		return (-1);
	if (str[++i] != '1')
		return (-1);
	i++;
	return (i);
}

int ft_verif2(char *str, int i)
{
	if (str[i] != '*')
		return (-1);
	if (str[++i] != 'X')
		return (-1);
	if (str[++i] != '^')
		return (-1);
	if (str[++i] != '2')
		return (-1);
	if ((str[++i] != '='))
		return (-1);
	i++;
	return (i);
}

int ft_verif3(char *str, int i)
{
	if (str[i] != '*')
		return (-1);
	if (str[++i] != 'X')
		return (-1);
	if (str[++i] != '^')
		return (-1);
	if (str[++i] != '0')
		return (-1);
	if (str[++i] != '\0')
		return (-1);
	return (i);
}

int	ft_parseur(char *str, double *x0, double *x1, double *x2, double *res)
{
	int i;

	i = 0;
	str = ft_strdelc(str, ' ');
	*x0 = atof(str + i);
	i = ft_isnumber(str, i);
	i = ft_verif(str, i);
	if (i == - 1)
	{
		ft_strdel(&str);
		return (1);
	}
	*x1 = atof(str + i);
	i = ft_isnumber(str, i);
	i = ft_verif1(str, i);
	if (i == - 1)
	{
		ft_strdel(&str);
		return (1);
	}
	*x2 = atof(str + i);
	i = ft_isnumber(str, i);
	i = ft_verif2(str, i);
	if (i == - 1)
	{
		ft_strdel(&str);
		return (1);
	}
	*res = atof(str + i);
	i = ft_isnumber(str, i);
	i = ft_verif3(str, i);
	if (i == - 1)
	{
		ft_strdel(&str);
		return (1);
	}
	ft_strdel(&str);
	return (0);
}
