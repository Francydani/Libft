*Este proyecto ha sido creado como parte del currículo de 42 por francysa.*


# Get_next_line - Leer una línea de un descriptor de archivo.


## Descripción
El objetivo de este proyecto es programar una función que devuelva una línea desde un descriptor de archivo (file descriptor).


El proyecto es simple pero desafiante, crear esta función en C que, al ser llamada dentro de un bucle, permita leer un archivo línea por línea (hasta que encuentre un salto de línea '\n' o el final del archivo).


Nos introduce al uso profundo de una variable estática, y la gestión de la memoria dinámica para evitar fugas.


## Instrucciones


Para probar y ejecutar este proyecto, sigue los siguientes pasos:


### 1. Crear un archivo:
Crea un archivo de texto llamado `archivo.txt` con el texto que se quiera leer.


### 2. Descomentar la función principal.
En el archivo get_next_line.c, está comentado un main sencillo con el que puedes probar el programa.


### 3. Compilacion y ejecucion


Para compilar el proyecto se debe definir el flag `-D BUFFER_SIZE=n` para indicar a la función cuántos bytes leer por cada llamada a `read()`.


Comando para compilar: `gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c`


Y para ejecutar: ./a.out


## Recursos


* Documentación de UNIX (man read): Consulta oficial sobre el comportamiento, los valores de retorno de la funci función de lectura del sistema operativo y la gestión de errores con -1.


* Tutoriales sobre variables estáticas en C: Guías de referencia para comprender el ciclo de vida de los datos almacenados en el segmento de datos persistentes en lugar de la pila (stack).


* Manual de IBM y Geeksforgeeks


* Uso de IA
Para este proyecto se ha utilizado inteligencia artificial (como Gemini/Chat GPT) para las siguientes tareas:  Para comprender detalladamente los cálculos aritméticos necesarios para calcular los tamaños de reserva en las funciones auxiliares de gestión de memoria.


## Explicación y justificación del algoritmo


El algoritmo de get_next_line se fundamenta en un diseño estructurado de tres etapas consecutivas e independientes asistidas por un buffer estático:


### 1. Lectura y Acumulación en Bucle:
Se pide memoria temporal para un búfer de tamaño BUFFER_SIZE + 1. Se inicia un bucle while cuya condición evalúa que la lectura no haya fallado, que queden bytes por leer (byts > 0) y que el búfer estático no contenga aún un salto de línea (\n). En cada iteración se invoca a read().
Si la lectura es exitosa, se añade un terminador nulo, y el fragmento se concatena al búfer estático mediante la función ft_strjoin. Si la lectura falla (-1), se libera la memoria estática de inmediato y el bucle termina de manera natural para evitar estados corruptos.


### 2. Extracción de la Línea Actual (ft_obtener_linea):
Una vez fuera del bucle, la función analiza el contenido acumulado en el búfer estático. Cuenta los caracteres que existen hasta el primer \n (inclusive) o hasta el final del archivo. Se realiza un malloc con la medida exacta y se duplica únicamente ese segmento de texto. Esta copia es la cadena que se retornará de forma definitiva al usuario.


### 3. Limpieza del Residuo (ft_clean):
Para preparar la siguiente llamada de la función, es obligatorio conservar los caracteres que se leyeron de más (el residuo que quedó por detrás del \n). La función mide la longitud restante, reserva un nuevo bloque de memoria, copia el residuo y libera inmediatamente el bloque de memoria viejo del búfer estático. De esta forma se previene cualquier fuga de memoria y el búfer estático queda listo y actualizado para la siguiente llamada.
