#include <stdio.h>
#include "API.h"

void customLog(char* text) {
    fprintf(stderr, "%s\n", text);
    fflush(stderr);
}

int main(int argc, char* argv[]) {
    customLog("Running...");
    API_setColor(0, 0, 'G');
    API_setText(0, 0, "abc");
    while (1) {
        if (API_wallFront() && API_wallRight() && API_wallLeft()) {
            // Turn around if walls are in front, right, and left
            API_turnLeft();
            API_turnLeft();
        } else if (API_wallFront() && API_wallRight() && !API_wallLeft()) {
            // Turn left if walls are in front and right
            API_turnLeft();
        } else if (!API_wallRight()) {
            // Turn right if no wall to the right
            API_turnRight();
            API_moveForward();
        } else if (!API_wallFront()) {
            // Move forward if no wall in front
            API_moveForward();
        } else {
            // Default case: move forward if no specific condition matches
            API_moveForward();
        }
    }
}
