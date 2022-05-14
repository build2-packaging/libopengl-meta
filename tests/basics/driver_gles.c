#ifdef __APPLE__
#include <OpenGLES/ES3/gl.h>
#else
#include <GLES3/gl3.h>
#include <EGL/egl.h>
#include <EGL/eglext.h>
#endif

int main (int argc, char** argv)
{
    EGLConfig config;
    EGLDisplay  eglDisplay;
    EGLint contextAttribs[] = { EGL_CONTEXT_CLIENT_VERSION, 3, EGL_NONE };

    EGLContext eglContext = eglCreateContext(eglDisplay, config, EGL_NO_CONTEXT, contextAttribs);

    return 0;
}