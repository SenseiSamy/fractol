/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaji <snaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 00:10:40 by snaji             #+#    #+#             */
/*   Updated: 2022/12/10 04:23:57 by snaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"
#define MAX_ITER 30

static t_complex	map_point(int x, int y, double zoom)
{
	t_complex	z;
	int			l;

	if (W < H)
		l = W;
	else
		l = H;
	z.r = 2 / zoom * (x - W / 2.0) / l;
	z.i = 2 / zoom * (y - H / 2.0) / l;
	return (z);
}

static int	suite(t_complex z, int c)
{
	int	i;

	i = 0;
	while ((z.i * z.i + z.r * z.r < 4) && i < MAX_ITER)
	{
		z = c_substraction(c_multiply(z, z), (t_complex){c, 0});
		++i;
	}
	if (i == MAX_ITER)
		return (-1);
	return (i);
}

t_image	julia(t_info info, double zoom)
{
	t_image	frame;
	int		x;
	int		y;
	int		iter;

	frame = new_frame(info, W, H);
	y = 0;
	while (y < H)
	{
		x = 0;
		while (x < W)
		{
			iter = suite(map_point(x, y, zoom), 1);
			if (iter == -1)
				put_pixel_to_frame(&frame, x, y, trgb(0, 255, 255, 255));
			else
				put_pixel_to_frame(&frame, x, y, trgb(0, 0, 0, 0));
			++x;
		}
		++y;
	}
	return (frame);
}