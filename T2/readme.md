# T2 - Testando o OpenGL Moderno 

No incio alguns erros foram apresentados durante os testes, como o triangulo sendo aprensentado totalmente branco ou todo rosa claro como mostrado nas figuras abaixo. Corrigimos o erros adicionando os seguintes comandos no arquivo MakeFile do diretorio: 

  export LIBGL_ALWAYS_SOFTWARE=1
  
  export MESA_GL_VERSION_OVERRIDE=3.3
 
  export MESA_GLSL_VERSION_OVERRIDE=330
  
  
### Resultado do primero teste:  
<p align="center">
  <img src="https://github.com/GuilhermeMRodrigues/Computacao_Grafica/blob/master/imagens/traingulo_branco.png" />
</p>
  
  
### Resultado do segundo teste:  

<p align="center">
  <img src="https://github.com/GuilhermeMRodrigues/Computacao_Grafica/blob/master/imagens/triangulorosa.png" />
</p>

### Resultado Final: 

<p align="center">
  <img src="https://github.com/GuilhermeMRodrigues/Computacao_Grafica/blob/master/imagens/triangulocolorido.png" />
</p>

# Abaixo podemos ver o projeto sendo executado 


<p align="center">
  <img src="https://github.com/GuilhermeMRodrigues/Computacao_Grafica/blob/master/imagens/cg_gravacao.gif" />
</p>
