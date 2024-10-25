#include "raylib.h"
#include <iostream>

int main(void)
{
    int width = 800;
    int height = 450;
    InitWindow(width, height, "Gra platformowa - Raylib");

    // Coordinates of circle
    int circle_x = width * 0.5;
    int circle_y = height * 0.5;

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);
        DrawCircle(circle_x, circle_y, 25, BLUE);

        if (IsKeyDown(KEY_LEFT)) {
            circle_x -= 10;
        }

        if (IsKeyDown(KEY_RIGHT)) {
            circle_x += 10;
        }

        if (IsKeyDown(KEY_DOWN)) {
            circle_y += 10;
        }

        if (IsKeyDown(KEY_UP)) {
            circle_y -= 10;
        }



        EndDrawing();
    }

    CloseWindow();

    return 0;

}