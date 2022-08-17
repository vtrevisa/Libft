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
| [**ft\_atoi**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_atoi.c) | ```int ft_atoi(const char *str);``` | Converts the initial numbers of the string (ignoring isspace) pointed to by **str** to int and returns it. |
| [**ft\_bzero**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_bzero.c) | ```void	ft_bzero(void *s, size_t n);``` | Overwrite **n** bytes of the memory pointed by **s** with zeros ('\0').|
| [**ft\_calloc**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_calloc.c) | ```void	*ft_calloc(size_t nmemb, size_t size);``` |  Allocates memory for **nmemb** x **size** bytes, overwrite the memory with zeros ('\0') and returns a pointer to the allocated memory. |
| [**ft\_isalnum**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_isalnum.c) | ```int ft_isalnum(int c);``` | Checks for an alphanumeric character. |
| [**ft\_isalpha**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_isalpha.c) | ```int ft_isalpha(int c);``` | Checks for an alphabetic character. |
| [**ft\_isascii**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_isascii.c) | ```int ft_isascii(int c);``` | Checks if **c** fits into the ASCII character set. |
| [**ft\_isdigit**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_isdigit.c) | ```int ft_isdigit(int c);``` | Checks for a digit.|
| [**ft\_isprint**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_isprint.c) | ```int ft_isprint(int c);``` | Checks for any printable character. |
| [**ft\_memchr**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_memchr.c) | ```void *ft_memchr(const void *s, int c, size_t n);``` | Scans **n** bytes of the memory area pointed by **s** for the first occurrence of **c**. |
| [**ft\_memcmp**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_memcmp.c) | ```int ft_memcmp(const void *s1, const void *s2, size_t n);``` | Lexicographically compares **n** bytes (each interpreted as unsigned char) of the memory areas poited by s1 and s2 and return its difference. |
| [**ft\_memcpy**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_memcpy.c) | ```void	*ft_memcpy(void *dest, const void *src, size_t n);``` | Copies **n** bytes from memory area poited by **src** to memory area poited by **dest**. The memory areas must not overlap.  Use ft_memmove if they do. |
| [**ft\_memmove**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_memmove.c) | ```void	*ft_memmove(void *dest, const void *src, size_t n);``` | Copies **n** bytes from memory area poited by **src** to memory area poited by **dest**. The two strings may overlap. |
| [**ft\_memset**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_memset.c) | ```void	*ft_memset(void *s, int c, size_t n);``` | Fills **n** bytes of the memory area pointed by **s** with the constant byte **c**. |
| [**ft\_strchr**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_strchr.c) | ```char	*ft_strchr(const char *s, int c);``` | Search and returns a pointer to the first occurrence of the character **c** in the string **s**. |
| [**ft\_strdup**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_strdup.c) |```char	*ft_strdup(const char *s);``` | Mallocs and create a new string which is a duplicate of the string **s** and returns it. |
| [**ft\_strlcat**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_strlcat.c) | ```size_t	ft_strlcat(char *dest, const char *src, size_t size);``` |  Appends **size** - strlen(**dst**) - 1 bytes of the NUL-terminated string **src** to the end of **dst**, NUL-terminating the result. |
| [**ft\_strlcpy**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_strlcpy.c) | ```size_t	ft_strlcpy(char *dst, const char *src, size_t size);``` | Copies up to **size** - 1 characters from the NUL-terminated string **src** to **dst**, NUL-terminating the result. |
| [**ft\_strlen**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_strlen.c) | ```size_t	ft_strlen(const char *s);``` | Counts and returns the length in bytes of the string **s**. |
| [**ft\_strncmp**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_strncmp.c) | ```int		ft_strncmp(const char *s1, const char *s2, size_t n);``` | Lexicographically compares **n** bytes of the the NUL-terminated strings **s1** and **s2** and returns its difference. The comparison is done using unsigned characters. |
| [**ft\_strnstr**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_strnstr.c) | ```char	*ft_strnstr(const char *big, const char *little, size_t len);``` | Searches **n** bytes and locates the first occurrence of the NUL-terminated string **little** in the string **big**. |
| [**ft\_strrchr**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_strrchr.c) | ```char	*ft_strrchr(const char *s, int c);``` | Search and returns a pointer to the last occurrence of the character **c** in the string **s**. |
| [**ft\_tolower**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_tolower.c) | ```int ft_tolower(int c);``` | Convert uppercase to lowercase. |
| [**ft\_toupper**](https://github.com/vtrevisa/Libft/blob/master/Src/ft_toupper.c) | ```int ft_toupper(int c);``` | Convert lowercase to uppercase. |

***MORE INCOMING***
