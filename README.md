[![libft](https://user-images.githubusercontent.com/102623863/185230931-b0ae9c6d-5329-40e2-9873-8da41a4ea032.png)](https://linktr.ee/vtrevisa)


**Table of Contents**
* [Introduction](#introduction)
* [Part 1](#part-1---libc-functions)

# INTRODUCTION

The LIBFT project consists in personal library in C that contains the functions that we will use along the course. We started with some basic functions and we will adding more functions as we built them. These functions must work a the originals besides the new ones.

# PART 1 - Libc Functions

In the first part of the project we recreated these functions
| FUNCTION NAME  | PROTOTYPE | DESCRIPTION | 
| -------------- | --------- | ----------- |
| [**ft\_atoi**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_atoi.c) | ```int ft_atoi(const char *str);``` | converts the initial numbers of the string (ignoring isspace) pointed to by **str** to int and returns it. |
| [**ft\_bzero**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_bzero.c) | ```void	ft_bzero(void *s, size_t n);``` | overwrite **n** bytes of the memory pointed by **s** with zeros ('\0').|
| [**ft\_calloc**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_calloc.c) | ```void	*ft_calloc(size_t nmemb, size_t size);``` |  allocates memory for **nmemb** x **size** bytes, overwrite the memory with zeros ('\0') and returns a pointer to the allocated memory. |
| [**ft\_isalnum**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_isalnum.c) | ```int ft_isalnum(int c);``` | checks for an alphanumeric character. |
| [**ft\_isalpha**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_isalpha.c) | ```int ft_isalpha(int c);``` | checks for an alphabetic character. |
| [**ft\_isascii**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_isascii.c) | ```int ft_isascii(int c);``` | checks if **c** fits into the ASCII character set. |
| [**ft\_isdigit**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_isdigit.c) | ```int ft_isdigit(int c);``` | checks for a digit.|
| [**ft\_isprint**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_isprint.c) | ```int ft_isprint(int c);``` | checks for any printable character. |
| [**ft\_memchr**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_memchr.c) | ```void *ft_memchr(const void *s, int c, size_t n);``` | scans **n** bytes of the memory area pointed by **s** for the first occurrence of **c**. |
| [**ft\_memcmp**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_memcmp.c) | ```int ft_memcmp(const void *s1, const void *s2, size_t n);``` | function compares **n** bytes (each interpreted as unsigned char) of the memory areas poited by s1 and s2 and return its difference. |
| [**ft\_memcpy**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_memcpy.c) | ```void	*ft_memcpy(void *dest, const void *src, size_t n);``` | copies **n** bytes from memory area poited by **src** to memory area poited by **dest**. The memory areas must not overlap.  Use ft_memmove if they do. |
| [**ft\_memmove**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_memmove.c) | ```void	*ft_memmove(void *dest, const void *src, size_t n);``` | copies **n** bytes from memory area poited by **src** to memory area poited by **dest**. The two strings may overlap. |
| [**ft\_memset**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_memset.c) | ```void	*ft_memset(void *s, int c, size_t n);``` | fills **n** bytes of the memory area pointed by **s** with the constant byte **c**. |
| [**ft\_strchr**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_strchr.c) | ```char	*ft_strchr(const char *s, int c);``` | search and returns a pointer to the first occurrence of the character **c** in the string **s**. |


| [**ft\_toupper**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_toupper.c) || convert lowercase letters to uppercase|
| [**ft\_tolower**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_tolower.c) || convert uppercase letters to lowercase. |






| [**ft\_strlen**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_strlen.c) || The ft\_strlen() function computes and returns the length of the string s.|
| [**ft\_strlcpy**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_strlcpy.c) || copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result.|
| [**ft\_strlcat**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_strlcat.c) ||  appends the NUL-terminated string src to the end of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.|

| [**ft\_strrchr**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_strrchr.c) || returns a pointer to the last occurrence  of the character c in the string s.|
| [**ft\_strnstr**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_strnstr.c) || locates the first occurrence of the null-terminated string little in the string big, where not more than len characters are searched.|
| [**ft\_strncmp**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_strncmp.c) || lexicographically compares the null-terminated strings s1 and s2. Returns an integer greater than, equal to, or less than 0, according as the string s1 is greater than, equal to, or less than the string s2. Compares not more than n characters. The comparison is done using unsigned characters, so that '\200' is greater than '\0'.|
| [**ft\_strdup**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_strdup.c) |```char	*ft_strdup(const char *s);``` | mallocs and create a new string which is a duplicate of the string **s** and returns it. |


***MORE INCOMING***
