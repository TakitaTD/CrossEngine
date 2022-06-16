#include "game.hpp"
#include "window.hpp"
#include <GL/gl.h>
#include <cstdlib>

void glfwErr(const char *msg) {
  printf("ERROR: %s\n", msg);
  exit(EXIT_FAILURE);
}

namespace engine {
Game::Game(int width, int height, const char *title) {
  if (!glfwInit()) {
    glfwErr("GLFW failed to initialise");
  }
  this->windowWidth = width;
  this->windowHeight = height;
  this->windowTitle = title;
  printf("bean");
  this->window = new engine::Window(windowWidth, windowHeight, windowTitle);
  this->GameLoop();
  glfwDestroyWindow(window->getWindow());
  glfwTerminate();
}
void Game::Update() { window->Update(); }
void Game::Render() {
  glClear(GL_COLOR_BUFFER_BIT);
  glClearColor(1.0f, 0.0f, 0.0f, 1.0f);
  window->Render();
}
void Game::Dispose() {
  glfwDestroyWindow(window->getWindow());
  glfwTerminate();
}
void Game::GameLoop() {
  printf("a");
  while (!glfwWindowShouldClose(window->getWindow())) {
    this->Update();
    this->Render();
  }
  this->Dispose();
}
} // namespace engine