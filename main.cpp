#include <iostream>
#include <GLFW/glfw3.h>

static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods){
    if(key == GLFW_KEY_ESCAPE && action== GLFW_PRESS) {
        glfwSetWindowShouldClose(window, GLFW_TRUE);
    }
}

int main() {
    //Initizlize GLFW
   if(! glfwInit()){
      return -1;
   };

    GLFWwindow* window = glfwCreateWindow(640,480,"MyTitle", nullptr, nullptr);
    if(!window){
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    glfwSetKeyCallback(window,key_callback);

    while(!glfwWindowShouldClose(window)){
        glfwPollEvents();

    }
    glfwTerminate();
    return 0;
}

