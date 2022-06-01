# OpenGL Build2 Package

[![build2](https://github.com/build2-packaging/opengl-meta/actions/workflows/build2.yml/badge.svg)](https://github.com/build2-packaging/opengl-meta/actions/workflows/build2.yml)

This project defines a build2 meta package for including OpenGL into your build2 project. It only sets the linker flags as needed by your platform and does not compile any actual code.

The packaging code is licensed under the MIT License.

## Usage

You can simply add this package as dependency to your project by specifying it in your `manifest`:

```
depends: opengl-meta ^1.0.0
```

Then just pick the targets that you need:

```
# just OpenGL
import opengl_gl_libs = opengl-meta%lib{opengl-gl}
# OpenGL GLU
import opengl_glu_libs = opengl-meta%lib{opengl-glu}
# OpenGL GLUT
import opengl_glut_libs = opengl-meta%lib{opengl-glut}
# OpenGL EGL
import opengl_egl_libs = opengl-meta%lib{opengl-egl}
# OpenGL GLES
import opengl_gles_libs = opengl-meta%lib{opengl-gles}
```
