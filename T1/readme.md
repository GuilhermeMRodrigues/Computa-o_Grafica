

# T1 - Rasterização de Pontos e Linhas 

#### Alunos: Guilherme Moreira Rodrigues e Lucas Santos Alves

#### Relatório sobre o primeiro trabalho da disciplina de introdução à computação gráfica. 
* Nesta atividades foi implementado algoritmos para a rasterização de pontos e linhas. Além de desenhar triangulos atráves da rasterização das linhas para compor suas arestas. Todas as primitivas foram rasterizadas simulando-se o acesso direto a memória de vídeo.


<p align="center">
  <img src="https://github.com/GuilhermeMRodrigues/Computacao_Grafica/blob/master/imagens/acessomemoria.png" />
</p>


Um framework (https://github.com/capagot/icg/tree/master/mygl_framework) foi fornecido pelo professor Christian Azambuja Pagot, afim de facilitar o acesso à memória de vídeo.

 # Rasterização de Pontos 
* Para fazermos a rasterização de pontos utilizamos o framework, mostrado acima, e implementamos nele a função que posiciona e colore um pixel, chamamos a função de "*PutPixel*". Abaixo podemos ver a função inplementada na linguagem C. 

``` 
void PutPixel(int x, int y, int *rgba){
    
    for(int i = 0; i < 4; i++){
        fb_ptr[4*y*IMAGE_WIDTH + 4*x + i] = rgba[i];
    }

}
```
Passando a função implementada na função "*Display()*" do framework, através da função "*MyGlDrwan*" com os parametros pré-definidos, como mostrado na figura abaixo. 
```
void MyGlDrawn(void){
PutPixel(100, 200, color0);
PutPixel(200, 100, color1);
PutPixel(200, 300, color2);
}
```
compilando, obtemos a seguinte saída:

<p align="center">
  <img src="https://github.com/GuilhermeMRodrigues/Computacao_Grafica/blob/master/imagens/pontos.png" />
</p>
