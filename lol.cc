#include <GLFW/glfw3.h>
#define BUFFER_OFFSET(i) ((char *)NULL + (i))

int main(int argc, char const *argv[])
{
    /* code */
    GLFWwindow * window;
    if (!glfwInit()){
          return -1;
    }
    #ifdef __APPLE__
        /* We need to explicitly ask for a 3.2 context on OS X */
        glfwWindowHint (GLFW_CONTEXT_VERSION_MAJOR, 3);
        glfwWindowHint (GLFW_CONTEXT_VERSION_MINOR, 2);
        glfwWindowHint (GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
        glfwWindowHint (GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    #endif
    window = glfwCreateWindow( 1280, 720, " Hello ",NULL,NULL);
    if(! window){
        glfwTerminate();
        return -1;
    }
      return 0;
}
