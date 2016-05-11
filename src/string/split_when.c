t_list	*split_when(int (*p)(char), char *str)
{
	t_pair	t1;
	t_pair	t2;
	t_list	h;

	if (!str)
		return (NULL);
	t1 = span(p, str);
	free(fst(t1));
	if (snd(t1) == NULL)
		return (NULL);
	t2 = break(p, snd(t1));
	free(snd(t1));
	h = lst_new(fst(t2), ft_strlen(fst(t2)));
	h->next = split_when(p, snd(t2));
	free(snd(t2));
	return(h);
}
