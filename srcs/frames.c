/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frames.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaji <snaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 22:32:56 by snaji             #+#    #+#             */
/*   Updated: 2022/12/10 01:31:10 by snaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

t_image	new_frame(t_info info, int w, int h)
{
	t_image	frame;

	frame.img = mlx_new_image(info.mlx_ptr, w, h);
	frame.addr = mlx_get_data_addr(frame.img, &frame.bits_per_pixel,
		&frame.line_length,	&frame.endian);
	return (frame);
}

void	put_pixel_to_frame(t_image *frame, int x, int y, int color)
{
	char	*dst;

	dst = frame->addr + (y * frame->line_length + x
		* (frame->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}
