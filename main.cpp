#include <iostream>
#include <GLFW/glfw3.h>

static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods){
    if(key == GLFW_KEY_ESCAPE && action== GLFW_PRESS) {
        glfwSetWindowShouldClose(window, GLFW_TRUE);
    }
}

int main() {
    //Initizlize GLFW
    glfwInit();

    GLFWwindow* window = glfwCreateWindow(640,480,"MyTitle", nullptr, nullptr);

    glfwSetKeyCallback(window,key_callback);
    glfwMakeContextCurrent(window);

    while(!glfwWindowShouldClose(window)){


    }
    glfwTerminate();
    return 0;
}

