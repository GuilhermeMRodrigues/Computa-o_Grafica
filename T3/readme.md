# T3 -  Pipeline Gráfico

Este trabalho, tem como objetivo principal implementar transformações geométricas que compõem a estrutura do pipeline. Todas as implementações serão feitas com o auxilio da biblioteca GLM sendo executadas pelos shaders do OpenGL Moderno. 

## Dependencias

O código disponibilizado depende de software de terceiros, como as bibliotecas GLM [1] e GLEW [2]. 

## Compilação 
```` 
 $ g++ -Wall -Wextra -Wpedantic -std=c++17 -O0 -g3 -DDEBUG main.cpp -lglut -lGLEW -lGLU -lGL -o transform gl
````

Contudo, basta acessar o repositorio do projeto e executar.
````        
$ make all
````

Quando compilado, caso tudo esteja correto, o programa apresentará a seguinte janela como saída: 

<p align="center">
  <img src="https://github.com/GuilhermeMRodrigues/Computacao_Grafica/blob/master/imagens/saida1.png" />
</p>

## Atividade

A atividade consiste em alterar, no programa template, os conteúdos das matrizes MODEL, VIEW e PROJECTION, que estão listadas abaixo, de forma que o programa gere as imagens listadas nos exercicios abaixo.

#### Matriz Model
````        
float model_array[16] = {1.0f, 0.0f, 0.0f, 0.0f, 
                         0.0f, 1.0f, 0.0f, 0.0f, 
                         0.0f, 0.0f, 1.0f, 0.0f, 
                         0.0f, 0.0f, 0.0f, 1.0f};
glm::mat4 model_mat = glm::make_mat4(model_array);
````
#### Matriz View
````        
float view_array[16] = {1.0f, 0.0f, 0.0f, 0.0f, 
                        0.0f, 1.0f, 0.0f, 0.0f, 
                        0.0f, 0.0f, 1.0f, 0.0f, 
                        0.0f, 0.0f, 0.0f, 1.0f};
glm::mat4 view_mat = glm::make_mat4(view_array);
````
#### Matriz Projection
````        
float proj_array[16] = {1.0f, 0.0f, 0.0f, 0.0f, 
                        0.0f, 1.0f, 0.0f, 0.0f, 
                        0.0f, 0.0f, 1.0f, 0.0f, 
                        0.0f, 0.0f, 0.0f, 1.0f};
glm::mat4 proj_mat = glm::make_mat4(proj_array);

````


## Exercício 1 - Escala
Este exercicio tem como objetivo modificar a matriz MODEL de forma que a imagem original geerada pelo programa seja transformada na imagem abaixo: 

<p align="center">
  <img src="https://github.com/GuilhermeMRodrigues/Computacao_Grafica/blob/master/imagens/exercicio1.png" />
</p>

Temos os fatores escala em (x, y, z) = ( 3/1 , 3/2 , 1). Com isso a matriz modificada fica da seguinte forma:

````        
float model_array[16] = {0.333f, 0.0f, 0.0f, 0.0f, 
                         0.0f, 1.5f, 0.0f, 0.0f, 
                         0.0f, 0.0f, 1.0f, 0.0f, 
                         0.0f, 0.0f, 0.0f, 1.0f};
glm::mat4 model_mat = glm::make_mat4(model_array);
````
E temos a seguinte saída:

<p align="center">
  <img src="https://github.com/GuilhermeMRodrigues/Computacao_Grafica/blob/master/imagens/respostas_exercicio1.png.png" />
</p>

## Exercício 2 - Translação

Aqui devemos modificar, mais uma vez, a matriz MODEL de forma que a imagem gerada pelo programa fique como a imagem abaixo:

<p align="center">
  <img src="https://github.com/GuilhermeMRodrigues/Computacao_Grafica/blob/master/imagens/exercicio2.png" />
</p>


Temos os fatores de Translação (x, y, z) = (1, 0, 0). Com isso a matriz modificada fica da seguinte forma:

````        
    float model_array[16] = {1.0f, 0.0f, 0.0f, 0.0f, 
                             0.0f, 1.0f, 0.0f, 0.0f, 
                             0.0f, 0.0f, 1.0f, 0.0f, 
                             1.0f, 0.0f, 0.0f, 1.0f};
    glm::mat4 model_mat = glm::make_mat4(model_array);
````
E o programa gera a seguinte saída:

<p align="center">
  <img src="https://github.com/GuilhermeMRodrigues/Computacao_Grafica/blob/master/imagens/resposta_exercicio2.png" />
</p>

## Exercício 3 - Projeção Perspectiva 
Aqui devemos modificar a matriz PROJECTION de forma que a imagem gerada pelo programa fique como a da figuara abaixo:

<p align="center">
  <img src="https://github.com/GuilhermeMRodrigues/Computacao_Grafica/blob/master/imagens/exercicio3.png" />
</p>

A matriz de projeção PROJECTION a ser utilizada é a que foi estudada em aula e que considera a câmera na origem do seu sistema de coordenadas:

<p align="center">
  <img src="https://github.com/GuilhermeMRodrigues/Computacao_Grafica/blob/master/imagens/matrizprojecao.png" />
</p>

onde d é a distãncia do centro de projeção até a origem do sistema de coordenadas da câmera.

Ainda temos como parametro d = 1/2, modificando a matriz projection com esse parametro obtivemos o seguinte resultado:

````        
float proj_array[16] = {1.0f, 0.0f, 0.0f, 0.0f, 
                        0.0f, 1.0f, 0.0f, 0.0f, 
                        0.0f, 0.0f, 1.0f, -2.0f, 
                        0.0f, 0.0f, -0.5f, 1.0f};
glm::mat4 proj_mat = glm::make_mat4(proj_array);
````

<p align="center">
  <img src="https://github.com/GuilhermeMRodrigues/Computacao_Grafica/blob/master/imagens/resposta_EXERCICIO3.png" />
</p>

## Exercício 4 - Posição da Câmera

Aqui devemos modificiar a matriz VIEW de forma que a imagem gerada pelo programa fique como a da figura abaixo:

<p align="center">
  <img src="https://github.com/GuilhermeMRodrigues/Computacao_Grafica/blob/master/imagens/exercicio4.png" />
</p>

Diante disso, faz-se necessário a transformação do Espaço do Universo para o da Câmera representando uma mudança de sistemas de coordenadas que irá levar os vértices do objeto para o da câmera, realizando-se assim a mudança de base. Nesse processo precisa-se definir a posição da câmera no espaço através dos vetores: Posição da Câmera, Direção da Câmera , Up Vector. Lembrando que eles devem estar no sistema ortogonal e retornando assim a Mview que será a matriz resultante da multiplicação da base transposta pela matriz de translação.

<p align="center">
  <img src= "imagem 1" />
</p>

<p align="center">
  <img src= "imagem 2" />
</p>


## Exercício 5 - Transformações Livres

Aqui devemos modificar as três matrizes, afim de gerar uma cena diferente das apresentadas anteriormente. Com isso temos as seguintes transformações nas matrizes:

Matriz Model
````        
float model_array[16] = {2.0f, 0.0f, 0.0f, 0.0f, 
                         0.0f, 1.7f, 0.0f, 0.0f, 
                         0.0f, 0.0f, 1.0f, 0.0f, 
                         0.0f, 0.0f, 0.0f, 1.0f};
glm::mat4 model_mat = glm::make_mat4(model_array);
````

Matriz View
````        
float view_array[16] = {-1.0f, 0.0f, 0.0f, 0.0f, 
                         0.0f, -1.0f, 0.0f, 0.0f, 
                         0.0f, 0.0f, 1.0f, 0.0f, 
                         0.0f, 0.0f, 0.0f, 1.0f};
glm::mat4 view_mat = glm::make_mat4(view_array);
````

Matriz Projection
````        
float proj_array[16] = {1.0f, 0.0f, 0.0f, 0.0f, 
                        0.0f, 1.0f, 0.0f, 0.0f, 
                        0.0f, 0.0f, 1.0f, -2.0f, 
                        0.0f, 0.0f, -0.5f, 1.0f};
glm::mat4 proj_mat = glm::make_mat4(proj_array);
````
Com essas modificações obtemos o seguinte resultado: 

<p align="center">
  <img src="https://github.com/GuilhermeMRodrigues/Computacao_Grafica/blob/master/imagens/exercicio5.png" />
</p>
