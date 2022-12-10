/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaji <snaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 00:10:40 by snaji             #+#    #+#             */
/*   Updated: 2022/12/10 01:58:09 by snaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"
#define MAX_ITER 100

int	suite(t_complex z, int c)
{
	int	i;

	while (z.r < 2 && i < MAX_ITER)
	{
		z = c_substraction(c_multiply(z, z), (t_complex){1, 0});
		++i;
	}
	if (i == MAX_ITER)
		return (-1);
	return (i);
}

t_image	julia(t_info info)
{
	t_image	frame;
	int		x;
	int		y;

	frame = new_frame(info, W, H);
	while (y < H)
	{
		while (x < W)
		{
			if (suite((t_complex){x, y}, ))
		}
		++y;
	}
}