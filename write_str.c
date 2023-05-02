/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatta <amatta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 12:15:27 by amatta            #+#    #+#             */
/*   Updated: 2023/05/02 12:57:03 by amatta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	write_str(char *str)
{
	int	len;

	if (!str)
	{
		str = "(null)";
		len = 6;
	}
	len = 0;
	while (*str)
	{
		write_char(*str++);
		len++;
	}
	return (len);
}
