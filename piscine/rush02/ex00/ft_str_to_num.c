#include <stdlib.h>

int	ft_power1000(int	x)
{
	int	i;
	int	ans;

	i = 0;
	ans = 1;
	while (i < x)
	{
		ans *= 1000;
		i++;
	}
	return (ans);
}

int str_len(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return(i);
}

int *ft_str_to_num(char  *str)
{
    int i;
    int len;
    int j;
    int k;
    int *array_out;
    
    array_out = (int*) malloc(100);
    len = str_len(str);
    i = 0;
    k = 0;
    while (str[i])
    {
        j = (len - 1 - i) % 3;
        if (j == 2 && str[i] != '0')
        {
            array_out[k] = str[i] - '0';
            k++;
            array_out[k] = 100;   
            k++;    
        } 
        else if (j == 1 && str[i] != '0')
        {
            if (str[i] == '1')
            {
                array_out[k] = 10 + str[i + 1] - '0';
                k++;
                if (ft_power1000((len - 1 - i) / 3) != 1)
                {
                    array_out[k] = ft_power1000((len - 1 - i) / 3);
                    k++;
                }
                i++;
                
            }
            else
            {
                array_out[k] = (str[i] - '0') * 10;
                k++;
            }
        }
        else if (j == 0 && str[i] != '0')
        {
            array_out[k] = str[i] - '0';
            k++;
            if (ft_power1000((len - 1 - i) / 3) != 1)
            {
                array_out[k] = ft_power1000((len - 1 - i) / 3);
                k++;
            }
        }
        i++;
    }
    array_out[k] = -1;
    return (array_out);
}
