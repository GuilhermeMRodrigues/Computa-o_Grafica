#ifndef MYGL_H
#define MYGL_H

#include "math.h"
#include "stdio.h"

#include "core.h"
#include "frame_buffer.h"

// Declaração da função que chamará as funções implementadas pelo aluno
void MyGlDraw(void);


//
// >>> Declare aqui as funções que você implementar <<<
//

void PutPixel(int x, int y, int rgba[]);
//void DrawLine(int x0, int y0, int x1, int y1, int rgbaP0[], int rgbaP1[]);

//void  DrawLine ( int x0, int y0, int x1, int y1, int rgbaP0 [], int rgbaP1 []);

#endif  // MYGL_H
