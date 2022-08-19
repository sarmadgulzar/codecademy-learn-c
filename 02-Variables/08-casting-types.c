#include <stdio.h>

int main()
{

    double testScore = 95.7;

    // implicit casting
    // int displayScore = testScore;

    // explicit casting
    int displayScore = (int)testScore;

    // No need to change below here
    printf("Great work, you got a %d%% on your test\n", displayScore);
}
