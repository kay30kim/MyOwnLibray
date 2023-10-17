#include <stdio.h>
#include <libc.h>
#include <ctype.h>
#include <strings.h>
#include "libft.h"

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
unsigned int	ft_strlen(const char *s);
int				ft_isprint(int c);
void			*ft_memset(void *b, int c, size_x len);
void			*ft_bzero(void *s, size_x n);

void 	_isascii()
{
	unsigned char is_ascii = 0;
	printf("\033[0;34m---- is_ascii ----\n");
	while (is_ascii < 127)
	{
		if (isascii(is_ascii) != ft_isascii(is_ascii))
			{printf ("\033[0;37mis_ascii%d - \033[0;31mft error char *{%d}\n", is_ascii, is_ascii);break;}
			is_ascii++;
	}
	if (is_ascii == 127)
		printf ("\033[0;37mdecimal - \033[0;32mOK\n");
	is_ascii = 0000;
	while (is_ascii < 0177)
	{
		if (isascii(is_ascii) != ft_isascii(is_ascii))
			{printf ("\033[0;37moctal%d - \033[0;31mft error char *{%d}\n", is_ascii, is_ascii);break;}

			is_ascii++;
	}
	if (is_ascii == 0177)
		printf ("\033[0;37moctal - \033[0;32mOK\n");
	is_ascii = 0x00;
	while (is_ascii < 0x7f)
	{
		if (isascii(is_ascii) != ft_isascii(is_ascii))
			{printf ("\033[0;37mhex%d - \033[0;31mft error char *{%d}\n", is_ascii, is_ascii);break;}
			is_ascii++;
	}
	if (is_ascii == 0x7f)
		printf ("\033[0;37mhex - \033[0;32mOK\n");
	printf("\033[0;34m------------------\n");
}
void	_isalnum()
{
	int i = 0;
		char is_alnum[] = "Lorem ipsum dolor sit 012345689\t\n";
	while (is_alnum[i])
	{
		if (isalnum(is_alnum[i]) != ft_isalnum(is_alnum[i]))
			{printf ("\033[0;37mis_alnum%d - \033[0;31mft error char *{%c}\n", i, is_alnum[i]);break;}
		i++;
	}
	if (!is_alnum[i])
		printf ("\033[0;37mis_alnum - \033[0;32mOK\n");
}
void	_isdigit()
{
	int i = 0;
	char is_digit[] = "Lorem ipsum dolor sit 012345689\t\n";
	while (is_digit[i])
	{	
		if (ft_isdigit(is_digit[i]) != isdigit(is_digit[i]))
			{printf ("\033[0;37mis_digit%d - \033[0;31mft error char *{%c}\n", i, is_digit[i]);break;}
		i++;
	}
	if (!is_digit[i])
		printf ("\033[0;37mis_digit - \033[0;32mOK\n");
}
void	_isalpha()
{
	int i = 0;
	char is_alpha[] = "Lorem ipsum dolor sit amet, consecte\n\ttur adipiscing elit,";
	while (is_alpha[i])
	{	
		if (ft_isalpha(is_alpha[i]) != isalpha(is_alpha[i]))
			{printf ("\033[0;37misalpha%d - \033[0;31mft error char *{%c}\n", i, is_alpha[i]);break;}
		i++;
	}
	if (!is_alpha[i])
		printf ("\033[0;37mis_alpha - \033[0;32mOK\n");
}
void	_strlen()
{
	char s[] = " gsdf;;;sd';\n\t\v\fasda aa daw acxcx278";
	if (strlen(s) == ft_strlen(s))
		printf ("\033[0;37mstrlen - \033[0;32mOK\n");
	else
		printf ("\033[0;37mstrlen - \033[0;31mft error\n");
}
void	_isprint()
{
	int i = 0;
	char s[] = "df 3ew ssd a \t\nadfa sdas\178";
	while (s[i])
	{
		if (isprint(s[i]) != ft_isprint(s[i]))
		{printf ("\033[0;37mis_digit%d - \033[0;31mft error char *{%c}\n", i, s[i]);break;}
		i++;
	}
	if (!s[i])
		printf ("\033[0;37mis_print - \033[0;32mOK\n");
}
void	_memset()
{
	char str[] = "            ";
	char str1[] = "            ";
	memset(str, '.', 13);
	ft_memset(str1, '.', 13);
	if (strncmp(str, str1, 13))
		printf ("\033[0;37mmemset - \033[0;31mft error\n\033[0;32m%d\n", strcmp(str, str1));
	else
		printf ("\033[0;37mmemset - \033[0;32mOK\n");

}
void	_bzero()
{
	char s[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do";
	char s1[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do";
	bzero(s, 1);
	ft_bzero(s1, 1);
	if (!strcmp(s, s1))
		printf ("\033[0;37mbzero - \033[0;32mOK\n");
	else{
		printf ("\033[0;37mbzero - \033[0;31mft error\n%s - %s\n", s, s1);
		printf ("%d\n", strcmp(s, s1));
	}
}

int	main ()
{
	/* isalpha */
	_isalpha();
	/* isdigit */
	_isdigit();
	/* isalnum */
	_isalnum();
	/* isascii */
	_isascii();
	/* strlen */
	_strlen();
	/* isprint */
	_isprint();
	/* memset */
	_memset();
	/* bzero */
	_bzero();
}
