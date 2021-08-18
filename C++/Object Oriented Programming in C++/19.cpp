#include "msoftcon.h"
struct circle
{
    int xCo, yCo;
    int radius;
    color fillcolor;
    fstyle fillstyle;
};

void circ_draw(circle c)
{
    set_color(c.fillcolor);
    set_fill_style(c.fillstyle);
    draw_circle(c.xCo, c.yCo, c.radius);
}

int main()
{
    init_graphics();
    circle c1 = {15, 7, 5, cBLUE, X_FILL};
    circle c2 = {41, 12, 7, cRED, O_FILL};
    circle c3 = {65, 18, 4, cGREEN, MEDIUM_FILL};
    circ_draw(c1);
    circ_draw(c2);
    circ_draw(c3);
    set_cursor_pos(1, 25);
    return 0;
}