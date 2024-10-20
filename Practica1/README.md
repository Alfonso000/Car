# PRACTICA 1 DE COMPUTACION DE ALTO RENDIMIENTO
## Integrantes del grupo: GONZALO PARRA y ALFONSO SANCHÍS

Cada ejercicio esta en un carpeta independiente.

Esta dividido cada ejercicio en tres archivos, main, funciones y definicion de funciones y librerias.

### Ejecucion

Utiliza cmake para compilar y ejecutarse.
Tambien se puede ejecutar normalmente incluyendo los archivos para ejecutarlos.

Para poder ejecutar cmake primero hay que tenerlo instalado.

```c
sudo apt update
sudo apt install cmake
```
Una vez se tiene instalado se puede hay que hacer los siguientes comandos en la carpeta que se quiera ejecutar y tenga un archivo CMakeLists.txt

Los siguientes comando solo se ejecutan una vez:
```c
mkdir build
cd build
cd cmake ..
```
Para compilar y ejecutar cada vez, estando en la carpeta build se hacen los siguientes comandos:
```c
make
./casa //Nombre que se le haya puesto al ejecutable en el archivo CMakeLists.txt, en mi caso es 'casa'
```


