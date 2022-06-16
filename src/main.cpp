#include "engine/game.hpp"
#include "include/GLFW/glfw3.h"
#include "stdio.h"
#include <iostream>

int main() {
  engine::Game *game = new engine::Game(1280, 720, "Hello, World!");
  return 0;
}