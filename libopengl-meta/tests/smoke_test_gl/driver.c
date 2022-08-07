#ifdef _WIN32
#include <windows.h>
#endif

#include <GL/gl.h>

// just create a non-static function to check if linking works
// but don't call it as we are missing a GLFW context which leads to segfault
void smokeTest()
{
    glClearColor(0.0, 0.0, 0.0, 1.0);

    glColor3f(0.0, 1.0, 0.0);

    glPointSize(1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POINTS);
}

int main ()
{
    return 0;
}
