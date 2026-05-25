#include <stdio.h>
#include <fcntl.h>   // Para open
#include <unistd.h>  // Para read y close
#include <stdlib.h>

int main() {
    int fd;
    char buffer[1500]; // Espacio donde guardaremos lo leído
    size_t bytes_leidos;

    // 1. Abrimos el archivo en modo lectura (O_RDONLY)
    fd = open("archivo.txt", O_RDONLY);

    if (fd == -1) {
        perror("Error al abrir el archivo");
        return 1;
    }

    // 2. Leemos un máximo de 128 bytes
    bytes_leidos = read(fd, buffer, 1500);

    if (bytes_leidos == -1) {
        perror("Error al leer el archivo");
    } else if (bytes_leidos == 0) {
        printf("El archivo está vacío.\n");
    } else {
        // Imprimimos los bytes leídos (es buena práctica asegurar el terminador de cadena)
        buffer[bytes_leidos] = '\0';
        printf("Leídos %zd bytes. Contenido: %s\n", bytes_leidos, buffer);
    }

    // 3. Cerramos el archivo
    close(fd);

    return 0;
}
