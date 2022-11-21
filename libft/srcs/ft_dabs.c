/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dabs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <ibouabda@42.students.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 00:42:17 by ibouabda          #+#    #+#             */
/*   Updated: 2022/11/21 14:21:44 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	ft_dabs(double value)
{
	return (value < 0 ? value * -1 : value);
}