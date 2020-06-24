#include "mygl.h"
#include "math.h"
#include "stdio.h"
//#include "cstdlib"
//
// >>> Defina aqui as funções que você implementar <<< 
//

void PutPixel(int x, int y, int rgba[]) {

    //Verifica se x e y são posições válidas para ponto
    //Desenha cada um dos 4 canais de cor do ponto desejado
    fb_ptr[4*y*IMAGE_WIDTH+4*x]       = rgba[0];
    fb_ptr[4*y*IMAGE_WIDTH+4*x + 1]   = rgba[1];
    fb_ptr[4*y*IMAGE_WIDTH+4*x + 2]   = rgba[2];
    fb_ptr[4*y*IMAGE_WIDTH+4*x + 3]   = rgba[3];

}

/*void DrawLine(int x0, int y0, int x1, int y1, int rgbaP0[], int rgbaP1[]) {

    int dx, dy, x, y, c;
    float r, g, b, a, ir, ig, ib, ia, D, distance, t_distance, coe_ang;

    dx = (x0 - x1);
    dy = (y0 - y1);
    
    c = -x0 * y1 + x1 * y1

    coe_ang = (float)dy/dx;

}*/


// Definição da função que chamará as funções implementadas pelo aluno
void MyGlDraw(void){

   //cores
   int corRED[4] = {255, 0, 0, 255};
   int corGREN[4] = {0, 255, 0, 255};  
   int corBLUE[4] = {0, 0, 255, 255}; 
   
   PutPixel(256, 106, corBLUE);

   //DrawLine(480, 200, 30, 500, corRED, corGREN);

  // DrawLine(306, 206, 256, 106,corRED,corGREN);
}

