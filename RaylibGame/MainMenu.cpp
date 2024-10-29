#include "MainMenu.h"
#include "raylib.h"

void MainMenu::update() {
    if (IsKeyPressed(KEY_ENTER)) {
        startGame = true;
    }
}

void MainMenu::draw() {
    DrawText("MAIN MENU", 300, 200, 40, DARKGRAY);
    DrawText("Press ENTER to Start Game", 250, 300, 20, GRAY);
}
