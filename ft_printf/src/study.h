#ifndef STUDY_H
#define STUDY_H
void	p_field(void);
int	ft_length(char *str);
typedef	struct s_s{
	int	minus;
	int	plus;
	int	sharp;
	int	precision;
	char	filler;
	int	number;
}t_s;
int	ft_putstr(char *str);
void	ft_field(void);
void	ft_handling_justif(t_s s);
void	ft_left_justif(t_s s, char *str);
void	ft_right_justif(t_s s, char *str);

#endif
