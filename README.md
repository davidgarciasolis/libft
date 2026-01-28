*Este proyecto ha sido creado como parte del currículo de 42 por davgarc4.*


# Descripcion


`libft` es una biblioteca en C con funciones útiles reutilizables implementadas desde cero. El objetivo del proyecto es reescribir funciones de la biblioteca estándar de C y crear una base sólida que pueda reutilizarse en futuros proyectos.

Este proyecto forma parte del currículo de 42 y es fundamental para entender el funcionamiento interno de muchas funciones básicas del lenguaje C.



## 📁 Contenido del repositorio

El repositorio contiene:

- `Makefile`
- `libft.h`
- Archivos `.c` con la implementación de todas las funciones

## 🛠️ Intrucciones

Para compilar la librería:

`make`

### Comandos disponibles

- `make` o `make all` - Compila la librería
- `make clean` - Elimina los archivos objeto (.o)
- `make fclean` - Elimina los archivos objeto y la librería
- `make re` - Recompila completamente el proyecto

## 📚 Funciones incluidas

### 🔹 Funciones tipo Libc

### Parte 1 - Funciones de libc

Funciones de verificación de caracteres:
- `ft_isalpha` - Verifica si es una letra
- `ft_isdigit` - Verifica si es un dígito
- `ft_isalnum` - Verifica si es alfanumérico
- `ft_isascii` - Verifica si está en el rango ASCII
- `ft_isprint` - Verifica si es un carácter imprimible

Funciones de manipulación de strings:
- `ft_strlen` - Calcula la longitud de una cadena
- `ft_strchr` - Busca un carácter en una cadena
- `ft_strrchr` - Busca un carácter desde el final
- `ft_strncmp` - Compara dos cadenas hasta n caracteres
- `ft_strnstr` - Busca una subcadena en otra cadena
- `ft_strlcpy` - Copia cadenas de forma segura
- `ft_strlcat` - Concatena cadenas de forma segura
- `ft_toupper` - Convierte a mayúscula
- `ft_tolower` - Convierte a minúscula

Funciones de manipulación de memoria:
- `ft_memset` - Llena memoria con un valor constante
- `ft_bzero` - Pone a cero un área de memoria
- `ft_memcpy` - Copia un área de memoria
- `ft_memmove` - Copia memoria manejando solapamientos
- `ft_memchr` - Busca un byte en memoria
- `ft_memcmp` - Compara áreas de memoria

Funciones de conversión y asignación:
- `ft_atoi` - Convierte string a entero
- `ft_calloc` - Asigna memoria inicializada a cero
- `ft_strdup` - Duplica una cadena

---

### 🔹 Funciones adicionales

- `ft_substr` - Extrae una subcadena
- `ft_strjoin` - Concatena dos cadenas en una nueva
- `ft_strtrim` - Recorta caracteres al inicio y final
- `ft_split` - Divide una cadena usando un delimitador
- `ft_itoa` - Convierte un entero a string
- `ft_strmapi` - Aplica una función a cada carácter (con índice)
- `ft_striteri` - Itera sobre cada carácter aplicando una función
- `ft_putchar_fd` - Escribe un carácter en un file descriptor
- `ft_putstr_fd` - Escribe una cadena en un file descriptor
- `ft_putendl_fd` - Escribe una cadena con salto de línea
- `ft_putnbr_fd` - Escribe un número en un file descriptor

---

### 💠 Funciones listas enlazadas

- `ft_lstnew` - Crea un nuevo nodo
- `ft_lstadd_front` - Añade un nodo al principio
- `ft_lstadd_back` - Añade un nodo al final
- `ft_lstsize` - Cuenta los nodos de la lista
- `ft_lstlast` - Devuelve el último nodo
- `ft_lstdelone` - Libera un nodo
- `ft_lstclear` - Libera toda la lista
- `ft_lstiter` - Itera la lista aplicando una función
- `ft_lstmap` - Crea una nueva lista aplicando una función

## Recursos

 Documentación 
- [Manual de C (man pages)](https://linux.die.net/man/)
- [Documentacion IBM](https://www.ibm.com/docs/es/)

## 👤 Autor

**David Garcia Solis**  
Proyecto `libft`
