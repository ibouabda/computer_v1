/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <ibouabda@42.students.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 14:47:22 by ibouabda          #+#    #+#             */
/*   Updated: 2022/11/18 17:16:32 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/computer_v1.h"

int		main(int argc, char **argv)
{
	double x0;
	double x1;
	double x2;
	double res;

	if (argc == 2)
	{
		x0 = 0;
		x1 = 0;
		x2 = 0;
		res = 0;
		if (ft_parseur(argv[1], &x0, &x1, &x2, &res) == 1)
		{
				ft_putendl("Error");
				exit(1);
		}
	}
	else
	{
		ft_putendl("Error");
		exit(1);
	}
	printf("x0 = %f x1 = %f x2 = %f res = %f\n", x0, x1, x2, res);
	simplificator(x0, x1, x2, res);
	return (0);
}
