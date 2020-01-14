/*
** EPITECH PROJECT, 2019
** tree
** File description:
** tree
*/

void    my_putchar(char c);

/* counts stars in a single level */
int     count_stars_in_lvl(int max_line, int ret, int stars)
{
    int current_line = 1;
    while (current_line < max_line) {
            stars += 2;
        current_line++;
    }
    return (stars);
}
/* adds up stars from all levels */
int     count_lvl(int max_lvl)
{
    int ret = 0;
    int stars = 1;
    int lvl = 1;
    while (lvl <= max_lvl) {
        stars = count_stars_in_lvl(lvl + 3, ret, stars);
        if (lvl % 2 == 1)
            ret += 2;
        lvl++;
        if (lvl - 1 != max_lvl)
            stars -= ret;
    }
    return (stars);
}

/* displays a line of * with spaces accordingly */
int    display_line(int base_len, int lvl, int ret, int stars)
{
    int current_line = 1;
    int max_line = lvl + 3;
    while  (current_line <= max_line) {
        for (int n = base_len / 2 - stars / 2 ; n > 0; n--)
            my_putchar(' ');
        for (int n = stars; n > 0; n--)
            my_putchar('*');
        my_putchar('\n');
        if (current_line == max_line)
            stars -= ret;
        else
            stars += 2;
        current_line++;
    }
    return (stars);
}

/* displays the trunk fully */
void    display_trunk(int width, int base_len)
{
    int height = width;
    int save = width;
    while (height) {
        width = save;
        if (width % 2 == 0)
            width++;
        for (int i = 0; i < base_len / 2 - width / 2 ; i++)
            my_putchar(' ');
        for (width; width > 0; width--)
            my_putchar('|');
        my_putchar('\n');
        height--;
    }
}

/* calls the main functions, and does a part of display_line to fit the CS */
void    tree(int size)
{
    int base_len = count_lvl(size);
    int lvl = 1;
    int ret = 2;
    int stars = 1;
    while (lvl <= size) {
    stars = display_line(base_len, lvl, ret, stars);
    if (lvl % 2 == 1)
        ret += 2;
    lvl++;
    }
    display_trunk(size, base_len);
}