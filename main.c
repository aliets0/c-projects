#include <stdio.h>
#include <stdlib.h>
#define true = 1
#define false = 0
#define bool = int
// Initialize variables
int secs, cubed, op, length, height, counter, to;

// Prototyping Functions
int secsNYear();
int cube();
int shapes();
int squarearea();
void evenodd();
void operation();

// Running Programs
int main(){
    operation();
    return 0;
}

// Function definitions
void operation()
{
    printf("Select what you want to do: \n");
    printf("1 = How many seconds in a year \n");
    printf("2 = Cubing Numbers \n");
    printf("3 = Area of square \n");
    printf("4 = Even and odd \n");
    scanf("%d", &op);
    if (op == 1){
        secsNYear();
    }else if (op == 2){
        cube();
    }else if (op == 3){
        squarearea();
    }else if (op == 4){
        evenodd();
    }
}
// Seconds in a year
int secsNYear(secs)
{
    printf("ENTER NUMBER OF YEARS: ");
    scanf("%d", &secs);
    int secsresult = secs * 31556952;
    printf("There are %d seconds in %d years!", secsresult, secs);
    return secsresult;
}
// Cubing numbers
int cube(cubed)
{
    printf("ENTER NUMBER TO BE CUBED: ");
    scanf("%d", &cubed);
    int cubedresult = cubed * cubed * cubed;
    printf("%d cubed is %d!",cubed, cubedresult);
    return cubedresult;
}
// Area of square
int squarearea(length, height)
{
    printf("ENTER LENGTH: ");
    scanf("%d", &length);
    printf("ENTER HEIGHT: ");
    scanf("%d", &height);
    int area = length * height;
    printf("The Area is %d!", area);
    return area;
}
// Even or odd
void evenodd(){
    int choice;
    printf("Press 1 for even numbers, Press 2 for odd...");
    scanf("%d", &choice);
    if (choice == 1)
     {
    printf("Enter number you want to count to: ");
    scanf("%d", &to);
    for (counter = 0; counter <= to; counter++)
    {
        if (counter%2 == 0){
            printf("%d ", counter);
        }

    }
    }else if (choice == 2)
    {
        printf("Enter number you want to count to: ");
        scanf("%d", &to);
        for (counter = 0; counter <= to; counter++)
        {
            if (counter%2 != 0){
                printf("%d ", counter);
            }
        }
    }
}
