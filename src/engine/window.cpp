#include "window.hpp"

namespace engine {
engine::Window::Window(int width, int height, const char *title) {
  this->width = width;
  this->height = height;
  this->title = title;
  this->Init();
};
void engine::Window::Init() {
  // Make window float on i3wm
  glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
  this->window = glfwCreateWindow(this->width, this->height, this->title,
                                  nullptr, nullptr);
  glfwMakeContextCurrent(this->window);
}
} // namespace engine