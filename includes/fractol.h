/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaji <snaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 22:01:09 by snaji             #+#    #+#             */
/*   Updated: 2022/12/10 04:08:31 by snaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H
typedef struct s_info
{
	void	*mlx_ptr;
	void	*window_ptr;
}	t_info;
# include <stdlib.h>
//debug
#include <stdio.h>
# include "../minilibx/mlx.h"
# include "frames.h"
# include "colors.h"
# include "complex.h"
# define W 1024
# define H 720

t_image	julia(t_info info, double zoom);
#endif