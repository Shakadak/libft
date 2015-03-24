#ifndef MEM_H
# define MEM_H

void				ft_freesplit(void **array);
void				ft_bzero(void *src, size_t length);
void				*ft_memchr(const void *ptr, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *s1, const void *s2, size_t n);
void				*ft_memccpy(void *s1, const void *s2, int c, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memset(void *dest, int c, size_t length);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);

#endif
