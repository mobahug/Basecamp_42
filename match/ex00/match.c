/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 18:37:37 by ghorvath          #+#    #+#             */
/*   Updated: 2021/06/07 09:07:17 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	match(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '*')
		return (match(s1, s2 + 1));
	if (*s1 != '\0' && *s2 == '*')
		return ((match(s1 + 1, s2)) || (match(s1, s2 + 1)));
	if (*s1 == *s2 && *s2 != '\0')
		return (1);
	return (0);
}

int main()
{
	char *s1;
	char *s2;
	char *s3;
	char *s4;
	char *s5;
	char *s6;
	char *s7;
	char *s8;
	char *s9;
	char *s10;
	char *s11;
	char *s12;
	char *s13;
	char *s14;
	char *s15;
	char *s16;
	char *s17;
	char *s18;
	char *s19;
	char *s20;
	char *s21;
	char *s22;
	char *s23;
	char *s24;
	char *s25;
	char *s26;
	char *s27;
	char *s28;
	

	s1 = "Helloo";
	s2 = "*";
	
	s3 = "Hello World!";
	s4 = "* World!";
	
	s5 = "Hello World!";
	s6 = "Heww*orld!";
	
	s7 = "Hello World!";
	s8 = "*****ello World****";
	
	s9 = "Hello World!";
	s10 = "Hel*******o******ld!";

	s11 = "Hello World!";
	s12 = "************";
	
	s13 = "Hello World!";
	s14 = "He*wo Wo*d!";

	s15 = "Hello World!";
	s16 = "**H**e**l**l**o** **W**o**r**l**d**!**";
	
	s17 = "Hello World!";
	s18 = "He*g*lo Wo*r*d*d*!";

	s19 = "Hello World!";
	s20 = "*a";

	s21 = "Hello World!";
	s22 = "*o";

	s23 = "Hello World!";
	s24 = "*!";

	s25 = "main.c";
	s26 = "*.c";

	s27 = "Hello World!*";
	s28 = "Hello World!*";
	
	printf("s1  and s2  = %d", match(s1, s2));
	printf("\n");
	printf("s3  and s4  = %d", match(s3, s4));
	printf("\n");
	printf("s5  and s6  = %d", match(s5, s6));
	printf("\n");
	printf("s7  and s8  = %d", match(s7, s8));
	printf("\n");
	printf("s9  and s10 = %d", match(s9, s10));
	printf("\n");
	printf("s11 and s12 = %d", match(s11, s12));
	printf("\n");
	printf("s13 and s14 = %d", match(s13, s14));
	printf("\n");
	printf("s15 and s16 = %d", match(s15, s16));
	printf("\n");
	printf("s17 and s18 = %d", match(s17, s18));
	printf("\n");
	printf("s19 and s20 = %d", match(s19, s20));
	printf("\n");
	printf("s21 and s22 = %d", match(s21, s22));
	printf("\n");
	printf("s23 and s24 = %d", match(s23, s24));
	printf("\n");
	printf("s25 and s26 = %d", match(s25, s26));
	printf("\n");
	printf("s27 and s28 = %d", match(s27, s28));
	printf("\n");
	
	return (0);
}