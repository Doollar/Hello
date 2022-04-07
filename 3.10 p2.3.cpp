#define _CRT_SECURE_NO_WARNINGS

//This is also an optimization of the exhaustive method.
//Using the same function but reduce the number of cases discussed.
//(While this problem can also be solved with simple circulation.)

//unsolved...

#include <stdio.h>

int MyArea(int, int, int, int);
int MyAbs(int, int);
int MyBorder1(int, int, int);
int MyBorder2(int, int, int);
int MyBorder3(int, int, int);
int MyBorder4(int, int, int);
int MyFolder(int, int, int, int, int, int, int, int, int, int, int, int);

int main()
{
    int xa1, ya1, xa2, ya2, xb1, yb1, xb2, yb2, xc1, yc1, xc2, yc2;
    int area1 = 0, area2 = 0, target = 0;
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d", &xa1, &ya1, &xa2, &ya2,
        &xb1, &yb1, &xb2, &yb2, &xc1, &yc1, &xc2, &yc2);

    if ((xb2 > xa1 && xb1 <= xa1) || (xb1 < xa2 && xb2 >= xa2) || (yb1 > ya2 && yb2 <= ya2) || (yb2 < ya1 && yb1 >= ya1))
        area1 = MyArea(MyBorder1(xb1, xb2, xa1), MyBorder4(yb1, yb2, ya1), MyBorder2(xb1, xb2, xa2), MyBorder3(yb1, yb2, ya2));
    if ((xc2 > xa1 && xc1 <= xa1) || (xc1 < xa2 && xc2 >= xa2) || (yc1 > ya2 && yc2 <= ya2) || (yc2 < ya1 && yc1 >= ya1))
        area2 = MyArea(MyBorder1(xc1, xc2, xa1), MyBorder4(yc1, yc2, ya1), MyBorder2(xc1, xc2, xa2), MyBorder3(yc1, yc2, ya2));
    target = MyArea(xa1, ya1, xa2, ya2) - area1 - area2
        + MyFolder(xa1, ya1, xa2, ya2, xb1, yb1, xb2, yb2, xc1, yc1, xc2, yc2);
    printf("%d", target);
    return 0;
}

int MyArea(int x1, int y1, int x2, int y2)
{
    int area = 0;
    area = MyAbs(x1, x2) * MyAbs(y1, y2);
    return area;
}

int MyAbs(int a, int b)
{
    int value = a - b;
    if (a <= b)
        value = b - a;
    return value;
}

int MyBorder1(int xc1, int xc2, int xa1)
{
    int border1 = xc1;
    if (xc2 > xa1 && xc1 <= xa1)
        border1 = xa1;
    return border1;
}

int MyBorder2(int xc1, int xc2, int xa2)
{
    int border2 = xc2;
    if (xc1 < xa2 && xc2 >= xa2)
        border2 = xa2;
    return border2;
}

int MyBorder3(int yc1, int yc2, int ya2)
{
    int border3 = yc2;
    if (yc1 > ya2 && yc2 <= ya2)
        border3 = ya2;
    return border3;
}

int MyBorder4(int yc1, int yc2, int ya1)
{
    int border4 = yc1;
    if (yc2 < ya1 && yc1 >= ya1)
        border4 = ya1;
    return border4;
}

int MyFolder(int xa1, int ya1, int xa2, int ya2, int xb1, int yb1, int xb2, int yb2, int xc1, int yc1, int xc2, int yc2)
{
    int folder = 0;
    xb1 = MyBorder1(xb1, xb2, xa1);
    yb1 = MyBorder4(yb1, yb2, ya1);
    xb2 = MyBorder2(xb1, xb2, xa2);
    yb2 = MyBorder3(yb1, yb2, ya2);
    xc1 = MyBorder1(xc1, xc2, xa1);
    yc1 = MyBorder4(yc1, yc2, ya1);
    xc2 = MyBorder2(xc1, xc2, xa2);
    yc2 = MyBorder3(yc1, yc2, ya2);
    if ((xc2 > xb1 && xc1 <= xb1) || (xc1 < xb2 && xc2 >= xb2) || (yc1 > yb2 && yc2 <= yb2) || (yc2 < yb1 && yc1 >= yb1))
        folder = MyArea(MyBorder1(xc1, xc2, xb1), MyBorder4(yc1, yc2, yb1), MyBorder2(xc1, xc2, xb2), MyBorder3(yc1, yc2, yb2));
    return folder;
}