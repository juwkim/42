/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 10:54:44 by juwkim            #+#    #+#             */
/*   Updated: 2022/04/25 14:39:45 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*cp;
	char	*s1;
	char	*s2;

	cp = str;
	if (*to_find == '\0')
		return (str);
	while (*cp)
	{
		s1 = cp;
		s2 = to_find;
		while (*s1 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return (cp);
		cp++;
	}
	return (0);
}
