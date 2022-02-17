#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int px = 0;
	int py = 0;
	int qx = 0;
	int qy = 0;
	scanf("%d %d %d %d", &px, &py, &qx, &qy);
	int distance = (abs(px - qx) + abs(py - qy)) * (abs(px - qx) + abs(py - qy));
	printf("%d \n", distance);
	return 0;
}