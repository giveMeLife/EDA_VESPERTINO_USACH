[![MIT License][license-shield]][license-url]
[![LinkedIn][linkedin-shield]][linkedin-url]



<!-- PROJECT LOGO -->
<br />
<p align="center">
  <a href="https://github.com/giveMeLife/EDA_VESPERTINO_USACH">
    <img src="algorithm.png" alt="Logo" width="200" height="200">
  </a>

  <h2 align="center">Estructura de datos y análisis de algoritmos Vespertino</h2>
  <p align="center">
    Repositorio con el material que se trabajará en el clase a clase del laboratorio de la asignatura EDA de la Universidad de Santiago de Chile en modalidad vespertino.
  </p>
</p>



<!-- TABLE OF CONTENTS -->
<details open="open">
  <summary>Contenidos</summary>
  <ol>
    <li>
      <a href="#acerca-de-la-asignatura">Acerca de la asignatura</a>
      <ul>
        <li><a href="#objetivo-general">Objetivo general</a></li>
        <li><a href="#objetivos-específicos">Objetivos específicos</a></li>
        <li><a href="#requisitos">Requisitos</a></li>
      </ul>
    </li>
    <li>
      <a href="#evaluaciones">Evaluaciones</a>
       <ul>
        <li><a href="#promedio-final">Promedio final</a></li>
      </ul>
    </li>
    <li>
      <a href="#contenidos">Contenidos</a>
       <ul>
        <li><a href="#repaso-de-conceptos">Repaso de conceptos</a></li>
        <li><a href="#listas">Listas</a></li>
        <li><a href="#grafos">Grafos</a></li>
        <li><a href="#árboles">Árboles</a></li>
      </ul>
    </li>
    <li><a href="#contacto">Contacto</a></li>
  </ol>
</details>



<!-- ACERCA DE LA ASIGNATURA -->
## Acerca de la asignatura

### Objetivo general
Asignatura teórico-práctica que tiene como propósito resolver problemas usando algoritmos y estructuras de datos adecuados al contexto de una situación dada. 

### Objetivos específicos
En particular, se espera que el alumno aprenda a aplicar los conceptos de tiempo de ejecución y complejidad algorítmica; diseñar, implementar y modificar estructuras de datos de acuerdo a las necesidades del problema; diseñar algoritmos elementales, iterativos y recursivos; recomendar de manera fundada una estructura de datos para un problema dado.

Las estructuras de datos que se estudiarán son:
<ol>
      <li>Listas</li>
      <li>Grafos</li>
      <li>Árboles</li>
</ol>

### Requisitos

Como requisitos para el laboratorio se considera:
<ol>
      <li>Lenguaje de programación C
        <ul>
           <li>Sistema Operativo UNIX
             <ul>
               <li> Compilador GCC </li>
             </ul>
           </li>
          <li>Sistema Operativo Windows
             <ul>
               <li> Compilador MINGW </li>
             </ul>
           </li>
        </ul>
      </li>
  <li> Editor de texto a eleccion </li>
</ol>


<!-- GETTING STARTED -->
## Evaluaciones

El laboratorio constará de 3 trabajos a desarrollar a lo largo del semestre. Cada uno de estos trabajos tendrá una problemática que contendrá como temática central una estructura de datos a trabajar, la cual debe ser identificada por el estudiante. Posteriormente se deberá implementar en el lenguaje de programación C una solución al problema planteado, utilizando la estructura identificada y aplicando algoritmos específicos sobre dicha estructura.

Cada trabajo constará de dos entregables los cuales se evaluarán de la siguiente forma:
- Código con solución propuesta (60% de la nota).
  -  Estructura y orden.
  -  Comentarios.
  -  Compilación.
  -  Funcionamiento.
- Informe escrito (40% de la nota).
  - Análisis de complejidad de la solución propuesta.
  - Respuesta a preguntas planteadas en el enunciado.

### Promedio final

```javascript
promedio_final = (prom_laboratorio_1 + prom_laboratorio_2 + prom_laboratorio_3)/3
```


## Contenidos


### Repaso de conceptos lenguaje de programación C

A diferencia de lenguajes de programación de alto nivel como Python, C es un lenguaje de programación estructurado, fuertemente tipado y que compilarse previo a su ejecución. A continuación se detallan aspectos básicos de este lenguaje.

#### Tipos de datos

En el lenguaje de programación C es necesario indicar qué tipo de dato almacenará una variable, esto se consigue indicando el tipo de dato previo al nombre de la variable.
Los tipos de datos más comunes que se manejan en C son:

- Entero: int
- Flotante: float
- Flotante de doble precisión: double
- Caracter: char

A diferencia de otros lenguajes de programación, no existen los tipos de dato booleanos.

Para crear una variable, se debe seguir el formato `<tipo de dato> <nombre variable>;`. Un ejemplo de creación de variable sería:

<p align="center">
   int entero;
   int a = 0;
   char caracter = 'c';
   float flotante = 3.4;
</p>

#### Estructura de programa

Un programa en C requiere de una función `main` para ejecutarse, pues al crear un programa, se ejecutan todas las órdenes que están dentro de dicha función. Una estructura básica de programa en C sería la siguiente: 

```C
#include <stdio.h>
int main(){
  printf("Hola mundo");
  return 0;
}
```

El codigo anterior ejecuta todo lo que se encuentra dentro de la función main, es decir, imprime por pantalla "hola mundo" y con `return 0;` indicamos el término del programa. A su vez, cada línea de código debe ir seguida de un `;`.

#### Directivas
Para incluir funciones dentro de nuestro programa, se deben incluir directivas específicas del lenguaje, de manera similar a importar una biblioteca en Python. En el caso anterior, para incluir la función que permite imprimir mensajes por terminal, es necesario incluir la directiva `stdio.h`. Para incluir directivas se debe seguir la estructura `#include <nombredirectiva>`.

#### Operadores lógicos
Dentro de los operadores lógicos de c, se encuentran los siguientes:

- Menor a: <
- Mayor a: >
- Menor o igual a: <=
- Mayor o igual a: >=
- Igual a: ==
- Distinto a: !=




#### Sentencias if
En C se pueden utilizar estructuras de control que permiten condicionar el flujo de ejecución del código. La sentencia más común para lo anterior es `if`, que funciona de manera similar a dicha sentencia en Python.

La estructura para realizar condicionales es la siguiente: 
```C
#include <stdio.h>
int main(){
  int a = 2;
  if(a > 1){
    ...codigo...
  }
  else if(a < 1){
    ...codigo...
  }
  else{
    ...codigo...
  }
  
  return 0;
}
```
En el ejemplo anterior, el programa prueba la primera condicional, que corresponde al `if`, si esta cláusula es verdadera, se ejecuta su sección de código. Si no se cumple, se revisa la cláusula de la expresión `else if`, y si esta no se cumple, se ejecuta las sentencias que se encuentren en a continuación de la expresión `else`. No puede existir ni `if else` ni `else` sin declarar previamente una cláusula `if`, puede haber la cantidad de `else if` que se estime necesaria y no son mandatorios.

#### Iteradores:

En C se pueden manejar sentencias para iterar una determinada cantidad de veces, las cuales son `while` y `for`. 

La sentencia `while` ejecutará un conjunto de líneas de código siempre y cuando se cumpla una condición partícular. A continuación se presenta un ejemplo de ciclo `while`.
```C
#include <stdio.h>
int main(){
  int i = 0;
  while(i<10){
    i = i+1;
  }
  printf("%d\n", i);
  return 0;
}
```
El ejemplo anterior, ejecuta la sentencia `i = i+1` siempre y cuando `i` sea menor a `10`. Cuando dicha condición se deja de cumplir, se salta inmediatamente a las líneas de código que están fuera del ciclo `while`.

Por otro lado la sentencia `for` ejecuta directamente una cantidad de ciclos indicados por el programa. La estructura del ciclo `for` es: `for(variable; condición; operación)`. El ciclo for recibe tres argumentos, siendo el primero una variable sobre la cual operar, el segundo, una condición que indicará hasta cuándo se ejecutarán las sentencias en el ciclo `for`, y finalmente una operación que se realiza sobre la variable ingresada inicialmente. A continuación se presenta un ejemplo de ciclo `for`:
```C
#include <stdio.h>
int main(){
  int aux = 0;
  for(int i = 0; i<10; i++){
    aux = aux+0;
  }
  printf("%d\n", aux);
  return 0;
}
```
El código anterior, en el ciclo for se inicia con la variable `i = 0`. Luego se consulta si `i<10`, y de cumplirse se ejecutan las sentencias que están dentro de la sentencia, en este caso `aux=aux+1;`. Luego de ejecutarse todas las líneas correspondientes al ciclo, se incrementa la variable `i` en 1, y se vuelve a repetir el proceso de pregunta de la condición, así hasta que `i<10` deje de cumplirse.


#### Funciones

En C se pueden realizar funciones para refactorizar código que sabemos utilizaremos de forma continua.

### Listas

### Grafos

### Árboles

## Contacto

* Correo: juan.fernandez.m@usach.cl




[license-shield]: https://img.shields.io/github/license/othneildrew/Best-README-Template.svg?style=for-the-badge
[license-url]: https://github.com/othneildrew/Best-README-Template/blob/master/LICENSE.txt
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://www.linkedin.com/in/juan-antonio-fern%C3%A1ndez-mu%C3%B1oz-2973871a6/
[product-screenshot]: images/screenshot.png
