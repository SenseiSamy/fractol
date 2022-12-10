/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaji <snaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 00:22:15 by snaji             #+#    #+#             */
/*   Updated: 2022/12/10 01:39:56 by snaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMPLEX_H
# define COMPLEX_H

typedef struct s_complex
{
	double	r;
	double	i;
}	t_complex;
t_complex	c_add(t_complex a, t_complex b);
t_complex	c_multiply(t_complex a, t_complex b);
t_complex	c_substraction(t_complex a, t_complex b);
#endif