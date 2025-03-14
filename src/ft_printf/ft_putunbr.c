/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyim <joyim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:01:22 by joyim             #+#    #+#             */
/*   Updated: 2025/02/06 19:19:25 by joyim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_printf.h"

int	ft_putunbr(unsigned int n)
{
	unsigned int	len;
	char			*base;

	base = "0123456789";
	len = 0;
	if (n >= 10)
	{
		len += ft_putunbr(n / 10);
		len += ft_putunbr(n % 10);
	}
	else
	{
		ft_putchar(base[n]);
		len++;
	}
	return (len);
}
/*
int main()
{
	unsigned int test = 4294967295;
	int result = ft_putunbr(test);
	printf("\n%d\n", result);

}
*/
