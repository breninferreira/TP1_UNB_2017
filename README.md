# Projeto-TP1-1º/2017

Projeto que visa estudar a orientação a objeto com uso da linguagem C++

[Parte 1 - Ball](#parte-1)

[Parte 2 - SpringMass](#parte-2)

[Parte 3 - Graphics](#parte-3)

# Parte 1

## Material usado no projeto

- Compilador: g++ (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4
- Linux Ubuntu 14.04
- Bibliotecas padrões do compilador
- Arquivos do projeto encontrados no site [http://www.robots.ox.ac.uk/~victor/teaching/labs/b16/](http://www.robots.ox.ac.uk/~victor/teaching/labs/b16/)
- Ferramenta de versionamento: Git
- Biblioteca OpenGL/Glut
```
sudo apt-get install freeglut3 freeglut3-dev
```

## Projeto 1 - Ball

### Conteúdo dos arquivos
**ball.h** : Possui a definição, métodos da class Ball

**ball.cpp** : Implementa a classe Ball

**test-ball.cpp** : Inicializa um objeto do tipo Ball e roda um loop sobre ele, imprimindo as coordenadas do seu movimento na tela


### Execução do projeto

Compilar o programa com o comando 

```
$ g++ ball.cpp test-ball.cpp -o bola
$ chmod 775 bola
$ ./bola
```

### Saida Gerada

0.71 0.691222

0.72 0.671556

0.73 0.641

0.74 0.599556

0.75 0.547222

0.76 0.484

0.77 0.409889

0.78 0.324889

0.79 0.229

0.8 0.122222

0.81 0.00455556

0.82 -0.124

0.83 -0.263444

0.84 -0.413778

0.85 -0.575

0.86 -0.747111

0.87 -0.747111

0.88 -0.575

0.89 -0.413778

0.89 -0.263444

0.88 -0.124

0.87 0.00455556

0.86 0.122222

0.85 0.229

0.84 0.324889

0.83 0.409889

0.82 0.484

0.81 0.547222

0.8 0.599556

0.79 0.641

0.78 0.671556

0.77 0.691222

0.76 0.7

0.75 0.697889

0.74 0.684889

0.73 0.661

0.72 0.626222

0.71 0.580556

0.7 0.524

0.69 0.456556

0.68 0.378222

0.67 0.289

0.66 0.188889

0.65 0.0778889

0.64 -0.044

0.63 -0.176778

0.62 -0.320444

0.61 -0.475

0.6 -0.640444

0.59 -0.816778

0.58 -0.816778

0.57 -0.640444

0.56 -0.475

0.55 -0.320444

0.54 -0.176778

0.53 -0.044

0.52 0.0778889

0.51 0.188889

0.5 0.289

0.49 0.378222

0.48 0.456556

0.47 0.524

0.46 0.580556

0.45 0.626222

0.44 0.661

0.43 0.684889

0.42 0.697889

0.41 0.7

0.4 0.691222

0.39 0.671556

0.38 0.641

0.37 0.599556

0.36 0.547222

0.35 0.484

0.34 0.409889

0.33 0.324889

0.32 0.229

0.31 0.122222

0.3 0.00455556

0.29 -0.124

0.28 -0.263444

0.27 -0.413778

0.26 -0.575

0.25 -0.747111

0.24 -0.747111

0.23 -0.575

0.22 -0.413778

0.21 -0.263444

0.2 -0.124

0.19 0.00455556

0.18 0.122222

0.17 0.229

0.16 0.324889

0.15 0.409889

0.14 0.484

0.13 0.547222

0.12 0.599556

0.11 0.641

0.1 0.671556

0.09 0.691222


### Gráfico do movimento

![Gráfico](https://raw.githubusercontent.com/pablomuro/TP1_UNB_2017/master/grafico.png)

# Parte 2

### Conteúdo dos arquivos
**springmass.h** : Possui a definição e métodos das classes Mass, Spring e SpringMass

**springmass.cpp** : Implementa a classe do arquivos springmass.h

**test-springmass.cpp** : Inicializa um objeto do tipo SpringMass e roda um loop sobre ele, imprimindo as coordenadas do seu movimento, tamanho da mola e a energía do sistema na tela

### Diagrama 2

![Diagrama 2](https://raw.githubusercontent.com/pablomuro/TP1_UNB_2017/master/Diagrama_2.png)

### Execução do projeto

Compilar o programa com o comando 

```
$ g++ springmass.cpp test-springmass.cpp -o bola
$ chmod 775 bola
$ ./bola
```

### Algumas da Saida Gerada

(-0.499444,-0.0009)(0.499444,-0.0009)$0.998889 en:0.160011

(-0.497798,-0.0036)(0.497798,-0.0036)$0.995595 en:0.160014

(-0.495123,-0.0081)(0.495123,-0.0081)$0.990246 en:0.160021

(-0.49153,-0.0144)(0.49153,-0.0144)$0.98306 en:0.160033

(-0.48717,-0.0225)(0.48717,-0.0225)$0.974341 en:0.16005

(-0.482231,-0.0324)(0.482231,-0.0324)$0.964462 en:0.160071

(-0.476927,-0.0441)(0.476927,-0.0441)$0.953854 en:0.160095

(-0.47149,-0.0576)(0.47149,-0.0576)$0.942979 en:0.160118

(-0.46616,-0.0729)(0.46616,-0.0729)$0.93232 en:0.16014

(-0.461176,-0.09)(0.461176,-0.09)$0.922352 en:0.160159

(-0.456762,-0.1089)(0.456762,-0.1089)$0.913524 en:0.160173

(-0.453119,-0.1296)(0.453119,-0.1296)$0.906239 en:0.160181

(-0.450417,-0.1521)(0.450417,-0.1521)$0.900834 en:0.160185

(-0.448783,-0.1764)(0.448783,-0.1764)$0.897566 en:0.160186

# Parte 3

### Conteúdo dos arquivos
**graphics.h e graphics.cpp** : Possui a definição e implementação dos atributos e métodos das classes que utilizam OpenGL/GLUT para o desenho das figuras na tela

**test-springmass-graphics.cpp** : Implementa a classe SpringMassDrawable, que herda métodos e atributos da classe SpringMass e seta as configurações e objetos necessário para mostrar a figura e seu movimento na tela

### Diagrama 3

![Diagrama 3](https://raw.githubusercontent.com/pablomuro/TP1_UNB_2017/master/Diagrama_3.png)

### Execução do projeto

Compilar o programa com o comando 

```
$ g++ springmass.cpp graphics.cpp test-springmass-graphics.cpp -lGL - lGLU -lglu -o springmass
$ chmod 775 springmass
$ ./springmass
```

### Saida Gerada

![Exemplo1](https://raw.githubusercontent.com/pablomuro/TP1_UNB_2017/master/Saida-parte3_1.jpeg)

![Exemplo2](https://raw.githubusercontent.com/pablomuro/TP1_UNB_2017/master/Saida-parte3_2.jpeg)
