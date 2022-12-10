/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaji <snaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:17:55 by snaji             #+#    #+#             */
/*   Updated: 2022/12/09 23:51:42 by snaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int	main(void)
{
	void	*mlx;
	void	*window;
	t_image	frame;

	mlx = mlx_init();
	window = mlx_new_window(mlx, W, H, "Fract-ol");
	frame = new_frame(mlx);
	for (size_t i = 0; i < W; i++)
		put_pixel_to_frame(&frame, i, 200, trgb(0, 255, 0, 0));
	mlx_put_image_to_window(mlx, window, frame.img, 0, 0);
	mlx_loop(mlx);
	
	return (0);
}
