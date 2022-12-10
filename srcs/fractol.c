/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaji <snaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:17:55 by snaji             #+#    #+#             */
/*   Updated: 2022/12/10 04:10:45 by snaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int	main(void)
{
	t_info	info;
	t_image	frame;

	info.mlx_ptr = mlx_init();
	info.window_ptr = mlx_new_window(info.mlx_ptr, W, H, "Fract-ol");
	frame = julia(info, 1);
	mlx_put_image_to_window(info.mlx_ptr, info.window_ptr, frame.img, 0, 0);
	mlx_loop(info.mlx_ptr);
	
	return (0);
}
