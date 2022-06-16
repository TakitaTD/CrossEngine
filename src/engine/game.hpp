#pragma once
#include "../include/GLFW/glfw3.h"
#include "window.hpp"
#include <stdio.h>

namespace engine {
class Game {
private:
  engine::Window *window;
  const char *windowTitle;
  int windowWidth, windowHeight;
  void Update();
  void Render();
  void Dispose();

public:
  Game(int height, int width, const char *title);
  engine::Window *getWindow() { return this->window; };
  void GameLoop();
};
} // namespace engine