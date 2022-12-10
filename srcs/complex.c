/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaji <snaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 00:24:33 by snaji             #+#    #+#             */
/*   Updated: 2022/12/10 01:39:27 by snaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

t_complex	c_add(t_complex a, t_complex b)
{
	return ((t_complex){a.r + b.r, a.i + b.i});
}

t_complex	c_multiply(t_complex a, t_complex b)
{
	return ((t_complex){a.r * b.r - a.i * b.i, a.r * b.i + a.i * b.r});
}

t_complex	c_substraction(t_complex a, t_complex b)
{
	return ((t_complex){a.r - b.r, a.i - b.i});
}
