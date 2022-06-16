#pragma once
#include "../include/GLFW/glfw3.h"
#include <iostream>
#include <stdio.h>
#include <string>

namespace engine {
class Window {
private:
  GLFWwindow *window;
  const char *title;
  int width, height;

public:
  Window(int width, int height, const char *title);
  GLFWwindow *getWindow() { return this->window; };
  void Init();
  void Update() { glfwPollEvents(); }
  void Render() { glfwSwapBuffers(window); }
};
} // namespace engine