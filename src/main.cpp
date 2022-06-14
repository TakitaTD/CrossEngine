#include "include/GLFW/glfw3.h"
#include <GL/gl.h>
#include <iostream>

int main() {
  if (!glfwInit()) {
    printf("ERROR: GLFW failed to intialize\n");
    return -1;
  };

  GLFWwindow *window;
  // Make window float in i3
  glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
  window = glfwCreateWindow(1280, 720, "Cross test", nullptr, nullptr);
  while (!glfwWindowShouldClose(window)) {
    glfwPollEvents();
    glfwSwapBuffers(window);
  }
  return 0;
}