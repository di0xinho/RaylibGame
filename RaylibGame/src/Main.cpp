#include "raylib.h"
#include "Game.h"
#include "MainMenu.h"

enum GameState {
    MAIN_MENU,
    GAME_PLAY
};

int main() {
    InitWindow(800, 600, "Gra platformowa - Raylib");
    SetTargetFPS(60);

    GameState currentState = MAIN_MENU;

    Game game;
    MainMenu mainMenu;

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        switch (currentState) {
        case MAIN_MENU:
            mainMenu.update();
            mainMenu.draw();
            if (mainMenu.startGame) {
                currentState = GAME_PLAY;
            }
            break;
        case GAME_PLAY:
            game.update();
            game.draw();
            if (game.exitToMenu) {
                currentState = MAIN_MENU;
            }
            break;
        }

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
