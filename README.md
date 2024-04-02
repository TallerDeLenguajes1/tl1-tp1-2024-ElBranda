# tl1-tp1-2024-ElBranda

## Investigar el archivo .gitignore
### ¿Por qué es conveniente incluirlo?
Es conveniente para no subir archivos no deseados.

### ¿Cuándo se debe hacer?
Se debe hacer cuando un archivo guarde contraseñas, por ejemplo.

### ¿Cómo configuraría el archivo .gitignore?
#### Para configurar un archivo .gitignore:
1. Abrir la terminal y elegir la ubicación del repositorio.
2. Crear un archivo .gitignore para el repositorio con el comando:
```Bash
touch .gitignore
```
3. Abrir el archivo .gitignore en un editor de texto y agregar las rutas de archivos o directorios que se quiera ignorar por cada línea. Por ejemplo:
* Ignorar la carpeta _carpeta_:
```
carpeta/
```
4. Guardar y cerrar.
5. Añadir el archivo .gitignore al área de preparación y realizar un commit:
```
git add .gitignore
git commit -m "Agregado archivo .gitignore"
```
6. Finalmente, subir los cambios al repositorio remoto:
```
git push origin main
```

## Si resolvió correctamente los apartados 2 y 3 del punto anterior notará que el resultado es el mismo
### ¿A qué se debe?
Porque la variable puntero (p) guarda la dirección de memoria de la variable (a).

### ¿Qué obtiene en el punto 4?
La dirección de memoria de la propia variable puntero (p).

### ¿Es igual a los anteriores? ¿Por qué?
NO. Porque la dirección que guarda la variable puntero (p) es distinta a su propia dirección.

## Autor
* **Martín Brandalisi** - [ElBranda](https://github.com/ElBranda)
