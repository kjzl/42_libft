/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_slice.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwurster <kwurster@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 12:02:22 by kwurster          #+#    #+#             */
/*   Updated: 2024/06/20 15:56:20 by kwurster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_SLICE_H
# define STR_SLICE_H

# include "../../libft.h"

t_str_slice	cstr_view(const char *str);
t_str_slice	cstr_slice(const char *str, size_t len);
t_str_slice	str_view(const t_str *str);
t_str_slice	str_slice(const t_str *str, size_t start, size_t end);
char		*cstr_clone_from(t_str_slice s);

t_str_slice	strsl_null(void);
t_str_slice	strsl_move(t_str_slice s, size_t n);
t_bool		strsl_move_inplace(t_str_slice *s, size_t n);
const char	*strsl_ref_move(t_str_slice *s, size_t n);
const char	*strsl_move_ref(t_str_slice *s, size_t n);
char		strsl_pop(t_str_slice *s);
t_str_slice	strsl_trunc(t_str_slice s, size_t new_len);
t_bool		strsl_trunc_inplace(t_str_slice *s, size_t new_len);
t_str_slice	strsl_trim(t_str_slice s);
t_str_slice	strsl_trim_end(t_str_slice s);
t_str_slice	strsl_trim_start(t_str_slice s);
void		strsl_trim_inplace(t_str_slice *s);
void		strsl_trim_end_inplace(t_str_slice *s);
void		strsl_trim_start_inplace(t_str_slice *s);

t_str_slice	base2(void);
t_str_slice	base8(void);
t_str_slice	base10(void);
t_str_slice	base16(void);
t_str_slice	base16_upper(void);
t_str_slice	base64(void);
t_str_slice	base64_url(void);

const char	*strsl_chr(t_str_slice s, char c);
const char	*strsl_rchr(t_str_slice s, char c);
t_bool		strsl_eq(t_str_slice s1, t_str_slice s2);
t_bool		strsl_ends_with(t_str_slice s, t_str_slice pattern);
t_bool		strsl_starts_with(t_str_slice s, t_str_slice pattern);
t_bool		strsl_atoi(t_str_slice s, t_str_slice base, int *out,
				t_overflow_behavior ofb);
t_vec		strsl_split_where(t_str_slice s, size_t (*pattern)(t_str_slice s));
t_vec		strsl_split(t_str_slice s, t_str_slice pattern);

#endif
