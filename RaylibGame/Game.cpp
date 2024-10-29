#include "Game.h"
#include "raylib.h"

void Game::update() {
    if (IsKeyPressed(KEY_ESCAPE)) {
        exitToMenu = true;
    }
}

void Game::draw() {
    DrawText("GAME PLAY", 300, 200, 40, DARKGRAY);
    DrawText("Press ESC to Return to Menu", 250, 300, 20, GRAY);
}
