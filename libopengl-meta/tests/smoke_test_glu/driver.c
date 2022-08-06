#include <GL/glu.h>

// just create a non-static function to check if linking works
// but don't call it as we are missing a GLFW context which leads to segfault
void smokeTest()
{
    gluNewQuadric();
    gluNewTess();
    gluOrtho2D(-780, 780, -420, 420);
}

int main ()
{
    return 0;
}
