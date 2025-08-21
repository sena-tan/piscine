/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-jong <ede-jong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 12:06:11 by ede-jong          #+#    #+#             */
/*   Updated: 2025/08/17 12:29:27 by ede-jong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_set
{
	char	*key;
	char	*value;
}				t_set;

typedef t_set*	t_dict;

typedef struct s_printvars
{
	int		size;
	int		i1;
	int		i2;
	char	triple[4];
}				t_printvars;

t_dict	make_dict(char *data, int size);
char	*get_value(t_dict dict, char *key);
