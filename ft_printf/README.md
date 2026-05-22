*Este proyecto ha sido creado como parte del currículo de 42 por Francysa.*

# Printf - Implementar el comportamiento de esta función.

## Descripción
Este proyecto consiste en reimplementar el comportamiento de la función `printf`, aprendiendo a utilizar funciones variadicas y optimizando la estructura del código.

El proyecto exige el desarrollo de la función `ft_printf`, la cual debe replicar al original en el número de caracteres impresos y en el formato de salida.

## Convertidores (Parte Obligatoria)

| Convertidor | Descripción |
| :---: | :--- |
| `%c` | Imprime un único carácter. |
| `%s` | Imprime una cadena de caracteres (string). Si es `NULL`, imprime `(null)`. |
| `%p` | Imprime la dirección de un puntero en formato hexadecimal. |
| `%d` / `%i` | Imprime un número entero con signo en base 10. |
| `%u` | Imprime un número entero sin signo en base 10. |
| `%x` | Imprime un número hexadecimal en minúsculas (base 16). |
| `%X` | Imprime un número hexadecimal en mayúsculas (base 16). |
| `%%` | Imprime el signo del porcentaje de manera literal. |

## Los Bonus

* **Flag `+`**: Fuerza a que los números enteros positivos o cero muestran el signo más (`+`) delante de sus dígitos.
* **Flag ` ` (Espacio)**: Deja un espacio en blanco antes de un número positivo si no se va a imprimir ningún signo. Si se usan `+` y ` ` juntos, el flag `+` tiene prioridad absoluta.
* **Flag `#`**: Añade el prefijo `0x` (para `%x`) o `0X` (para `%X`) a los números hexadecimales, **únicamente si el valor es diferente de cero**.

## Instrucciones

El proyecto ha sido diseñado de manera modular, incluyendo un `Makefile` con las reglas estándar. Para compilar la librería clona el repositorio y ejecuta:

```make``` o ```make all```: Compila los archivos base y genera libft.a.

```make bonus```: Compila los archivos adicionales necesarios para incluir la gestión de los flags `+`, `#` y ` ` en la librería.

```make clean```: Elimina los archivos objeto (.o).

```make fclean```: Elimina los objetos y el archivo de la librería (libft.a).

```make re```: Limpia y vuelve a compilar todo.

## Recursos

* Documentación oficial de GNU C Library.

* Manual de programador de Linux (man pages).

* Tutoriales sobre punteros y funciones variadicas en C.

* Manual de IBM y Geeksforgeeks

* Uso de IA
Para este proyecto se ha utilizado inteligencia artificial (como Gemini/Chat GPT) para las siguientes tareas:

* Para comprender a fondo la lógica de las funciones variádicas y cómo se desplazan los argumentos en la pila de memoria

* Para interpretar algunos `warning` del compilador.