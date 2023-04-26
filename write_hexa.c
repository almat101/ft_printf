/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatta <amatta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:51:21 by amatta            #+#    #+#             */
/*   Updated: 2023/04/26 16:39:05 by amatta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	write_hexa(unsigned int n, char *hexa)
{
	int	i;

	i = 0;
	if (n >= 16)
		i += write_hexa(n / 16, hexa);
	i += write_char(hexa[n % 16]);
	return (i);
}
