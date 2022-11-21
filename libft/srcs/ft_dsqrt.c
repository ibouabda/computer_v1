/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dsqrt.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <ibouabda@42.students.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 00:49:00 by ibouabda          #+#    #+#             */
/*   Updated: 2022/11/21 15:26:25 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h> // uint64_t

double  ft_dsqrt(double number)
{
	union {
		double      d;
		uint64_t    i;
	} conv = { .d = number };
	conv.i  = 0x5fe6eb50c7b537a9 - (conv.i >> 1);
	conv.d *= 1.5 - (number * 0.5 * conv.d * conv.d);
	return (1.0 / conv.d);
}
