#include <GL/glut.h>

// just create a non-static function to check if linking works
// but don't call it as we are missing a GLFW context which leads to segfault
void smokeTest(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1366, 768);
    glutInitWindowPosition(0, 0);
}

int main ()
{
    return 0;
}
