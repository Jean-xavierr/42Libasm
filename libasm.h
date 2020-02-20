/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 11:15:02 by jereligi          #+#    #+#             */
/*   Updated: 2020/02/20 11:18:52 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBASM_H
# define LIBASM_H

#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

ssize_t		ft_write(int, char *, size_t);
ssize_t		ft_read(int, char *, size_t);
ssize_t		ft_strlen(char *);
char		*ft_strcpy(char *, char *);
int			ft_strcmp(char *, char *);
char		*ft_strdup(char *);

#endif
