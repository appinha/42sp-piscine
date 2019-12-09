#include "rshbas.h"
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_atoi(char nbr);
int		ft_msg_error(void);

#include "rshini.h"
void	ft_free(int *clues_arr, int **clues_mtx);
void	ft_initialization(char *argv);

#include "rshchk.h"
void	ft_cluescheck(char *clues_str, int *clues_int);
void	ft_cluestomtx(int *clues_arr, int **clues_mtx);

#include "rshmtx.h"
int		**create_mtx(int value, int row, int col);
int		***ft_poss_val_ini(int ***possible_val);