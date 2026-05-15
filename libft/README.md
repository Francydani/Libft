*Este proyecto ha sido creado como parte del currículo de 42 por Francysa.*

# Libft - Mi primera libreria de funciones en C.

## Descripción
Este proyecto consiste en la creación de una librería estática en C llamada `libft.a`. El objetivo principal es replicar el funcionamiento de una serie de funciones estándar de la biblioteca de C, así como otras funciones de utilidad que no están presentes en ella.

Este proyecto es fundamental, ya que me ha permitido entender cómo funciona la manipulación de memoria y strings, la gestión de punteros, gestion de listas enlazadas y la estructura de una librería en C.

## Instrucciones

El proyecto incluye un `Makefile` con las reglas estándar. Para compilar la librería, clona el repositorio y ejecuta:

```make``` o ```make all```: Compila los archivos base y genera libft.a.

```make clean```: Elimina los archivos objeto (.o).

```make fclean```: Elimina los objetos y el archivo de la librería (libft.a). 

```make re```: Limpia y vuelve a compilar todo.

## Recursos

* Documentación oficial de GNU C Library

* Manual de programador de Linux (man pages)

* Tutoriales sobre el uso de Makefile y punteros en C.

* Uso de IA
Para este proyecto se ha utilizado inteligencia artificial (como Gemini/ChatGPT) para las siguientes tareas:

* Explicación de conceptos: Clarificación sobre el funcionamiento de la memoria en funciones como memmove vs memcpy. Y ademas definiciones explicativas sobre listas enlazadas.

* Casteo de tipos: Guía sobre cuándo y por qué realizar el casteo a unsigned char * para manipular memoria byte a byte.

## Descripción detallada de la librería

La libft se divide en varias:

| Funciones de: | Nombre:       | Descripcion:                 |
|---------------|---------------|------------------------------|
| <ctype.h>     | ft_isalpha    | Comprueba si el carácter es una letra (mayúscula o minúscula). |
| <ctype.h>     | ft_isdigit    | Comprueba si el carácter es un dígito del '0' al '9'. |
| <ctype.h>     | ft_isalnum    | Comprueba si el carácter es alfanumérico (letra o dígito). |
| <ctype.h>     | ft_isascii    | Comprueba si el carácter pertenece a la tabla ASCII (valor entre 0 y 127). |
| <ctype.h>     | ft_isprint    | Comprueba si el carácter es imprimible (incluyendo el espacio). |
| <string.h>    | ft_strlen     | Calcula la longitud de una cadena (sin contar el nulo terminador). | 
| <string.h>    | ft_memset     | Llena los primeros n bytes del área de memoria con un byte constante. |
| <string.h>    | ft_bzero      | Escribe ceros (\0) en una cadena de bytes. |
| <string.h>    | ft_memcpy     | Copia un área de memoria de un origen a un destino (las áreas no deben solaparse). |
| <string.h>    | ft_memmove    | Copia un área de memoria permitiendo que el origen y el destino se solapen de forma segura. |
| <string.h>    | ft_strlcpy    | Copia una cadena a un tamaño específico, garantizando que termine en nulo. |
| <string.h>    | ft_strlcat    | Concatena una cadena al final de otra hasta un tamaño máximo especificado. |
| <string.h>    | ft_toupper    | Convierte una letra minúscula a su equivalente en mayúscula. |
| <string.h>    | ft_tolower    | Convierte una letra mayúscula a su equivalente en minúscula. |
| <string.h>    | ft_strchr     | Localiza la primera aparición de un carácter en una cadena. |
| <string.h>    | ft_strrchr    | Localiza la última aparición de un carácter en una cadena. |
| <string.h>    | ft_strncmp    | Compara dos cadenas hasta un número máximo de caracteres. |
| <string.h>    | ft_memchr     | Busca un byte específico dentro de un bloque de memoria. |
| <string.h>    | ft_memcmp     | Compara dos bloques de memoria byte a byte. |
| <string.h>    | ft_strnstr    | Localiza una subcadena dentro de otra cadena, limitando la búsqueda a n caracteres. |
| <string.h>    | ft_strdup     | Crea una copia de una cadena reservando memoria dinámicamente con malloc. |
| <stdlib.h>    | ft_atoi       | Convierte una cadena de caracteres que representa un número en un entero (int). |
| <stdlib.h>    | ft_calloc     | Reserva memoria para un array de elementos, inicializando todos los bytes a cero. |
| adcionales    | ft_substr     | Reserva memoria (malloc) y devuelve una subcadena de caracteres de la cadena ‘s’. La subcadena comienza en el índice ‘start’ y tiene una longitud máxima ‘len’. |
| adcionales    | ft_strjoin    | Reserva memoria (malloc) y devuelve una nueva cadena de caracteres, formada por la concatenación de ‘s1’ y ‘s2’. |
| adcionales    | ft_strtrim    | Reserva memoria (malloc) y devuelve una copia de ‘s1’ con los caracteres de ‘set ’ eliminados al principio y al final. |
| adcionales    | ft_split      | Reserva memoria (malloc) y devuelve un array de cadenas obtenido al dividir la cadena ‘s’ en subcadenas utilizando el carácter ‘c’ como delimitador. Cada cadena del arreglo devuelto se reserva de manera independiente. El arreglo de punteros también se reserva dinámicamente. El arreglo devuelto debe terminar con un puntero a NULL. |
| adcionales    | ft_itoa       | Reserva memoria (malloc) y devuelve una cadena que represente el valor del número entero recibido como argumento. Debe ser capaz de manejar números negativos. |
| adcionales    | ft_strmapi    | Aplica la función ‘f’ a cada carácter de la cadena ‘s’, pasando su índice como primer argumento y el propio carácter como segundo argumento. Se crea una nueva cadena (utilizando malloc(3)) para almacenar los resultados de las sucesivas aplicaciones de ‘f’. |
| adcionales    | ft_striteri   | Aplica la función ‘f’ a cada carácter de la string ‘s’, pasando como parámetros el índice de cada carácter dentro de ‘s’ y la dirección del propio carácter, que puede modificarse si es necesario. |
| adcionales    | ft_putchar_fd | Envía el carácter ‘c’ al descriptor de archivo (file descriptor ) especificado. |
| adcionales    | ft_putstr_fd  | Envía la cadena ‘s’ al descriptor de archivo especificado. |
| adcionales    | ft_putendl_fd | Envía la cadena ‘s’ al descriptor de archivo dado, seguido de un salto de línea. |
| adcionales    | ft_putnbr_fd  | Escribe el número entero ‘n’ en el descriptor de archivo dado. |
