// #include <stdio.h>
// int main()
// {
// 	char *a="amet";
// 	char *b="amet";
// 	printf("%p\n",a);
// 	printf("%p\n",b);
// 	b="zzzz";
// 	printf("%p\n",a);
// 	printf("%p\n",b);
// }
int main()
{
	char *son = " sa 98 50 12 as ";
	int a;
	int b;
	int c;
	char *trim;
	char **split;
	char *set = " s a";
	trim = ft_strtrim(son,set);
	split = ft_split(trim,' ');
	a = ft_atoi(split[0]);
	b = ft_atoi(split[1]);
	c = ft_atoi(split[2]);
	printf("%d ",a);
	printf("%d ",b);
	printf("%d ",c);
}

int main()
{
	t_list *head = (t_list *)malloc(sizeof(t_list));
	head->content = "tugberk";
	t_list *second = (t_list *)malloc(sizeof(t_list));
	second->content = "second";
	head->next = second;
	second->next = NULL;

	t_list *a = (t_list *)malloc(sizeof(t_list));
	a->content = "aa";

	ft_lstadd_back(&head, a);

}
int main()
{
	t_list *list1 = (t_list *)malloc(sizeof(t_list));
	t_list *list2 = (t_list *)malloc(sizeof(t_list));
	
	list1->content = "a";
	list2->content = "b";
	list1->next= NULL;
	list2->next= NULL;
	ft_lstadd_front(&list1,list2);
	t_list *temp = (t_list *)malloc(sizeof(t_list));

	temp = list1;
	while (temp)
	{
			printf("%s", temp->content);
			temp = temp->next;
	}

	
}

int main()
{
	t_list *l1 = ft_lstnew(1);
	t_list *l2 = ft_lstnew(2);
	ft_lstadd_front(&l1,l2);
	t_list *t = ft_lstnew("");
	while(t)
	{
		printf()
	}
}

void *f(void *cnt)
{
	cnt = "";
	return (cnt);
}
void del(void *cnt)
{
	free(cnt);
}
int	main()
{
	t_list *lst;

	lst = ft_lstnew("");

	lst = ft_lstmap(lst, f, del);
	printf("%s",lst->content);
 
	return (0);
}

int main()
{
	t_list *list1;
	list1=ft_lstnew("evo");
	printf("%s",list1->content);
}

int main()
{
	int a[]={1, 30, 256};
	ft_memset(a,0,sizeof(long)*3);
	
	ft_memset(&a[0],42,1);
	printf("%d", a[0]);
	ft_memset(&a[1],42,1);
	printf("%d", a[1]);
	ft_memset(&a[2],42,1);
	printf("%d", a[2]);
}

void *f(void *cnt)
{
	cnt = "zart";
	return (cnt);
}
void del(void *cnt)
{
	free(cnt);
}
int main()
{
	t_list *a=ft_lstnew("a");
	t_list *b=ft_lstnew("b");
	t_list *c=ft_lstnew("c");
	
	a->next=b;
	b->next=c;
	c->next=NULL;
	
t_list *lst;

	lst = ft_lstmap(a,f,del);
	printf("%s",lst->content);
	printf("%s",lst->next->content);
	printf("%s",lst->content);
}

int main()
{
	char *s="42istanbul";
	int fd;
	
	fd = open("text.txt",O_CREAT | O_RDWR, 0777);
	printf("%d",fd);
	ft_putendl_fd(s,fd);
}

int main()
{
	char *s="akif";
	printf("%s",ft_strchr(s,'i'));
}

int main()
{
	char *h="ali aliye adliyeye goturdu";
	char *n="aliye";
	printf("%s",ft_strnstr(h,n,12));
}

int main()
{
	char a[]="istanbul";
	ft_memcpy(a+2,a,4);
	printf("%s",a);
}

int main()
{
	int a[]={1,42,300};
	ft_memset(a,31,1);
	ft_memset(a+1,3,1);
	ft_memset(a+2,3,1);
	printf("%d %d %d",a[0],a[1],a[2]);
}

int main()
{
	int fd;
	fd=open("yusuf.txt", O_CREAT | O_RDWR,0777);
	ft_putchar_fd('b',fd);
}

int main()
{
	char **a=ft_split("akif,emre,demir",',');
	printf("%s %s %s",a[0],a[1],a[2]);
}

int main()
{
	char d[5]="";
	char s[8]="12345678";
	ft_strlcpy(d,s,5);
	printf("%s",d);
}
char f(unsigned int t, char a)
{
	
	return(a+1);
}
int main()
{
	char *c="abc";
	printf("%s",ft_strmapi(c,f));
	
}

int main()
{
	char *s="akifemre";
	
	printf("%s",ft_substr(s,4,4));
}