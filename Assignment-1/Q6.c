#include <stdio.h>

int main(){
    int X,Y;
    printf("Enter X and Y coordinates: ");
    scanf("%d %d", &X, &Y);
    if (X > 0 && Y > 0)
    {
        printf("The point lies in the First Quadrant\n");
    }
    else if (X < 0 && Y > 0)
    {
        printf("The point lies in the Second Quadrant\n");
    }
    else if (X < 0 && Y < 0)
    {
        printf("The point lies in the Third Quadrant\n");
    }
    else if (X > 0 && Y < 0)
    {
        printf("The point lies in the Fourth Quadrant\n");
    }
    else if (X == 0 && Y == 0)
    {
        printf("The point lies at the origin\n");
    }
    else if (X == 0 && Y != 0)
    {
        printf("The point lies on the Y-axis\n");
    }
    else if (X != 0 && Y == 0)
    {
        printf("The point lies on the X-axis\n");
    }
    return 0;
}