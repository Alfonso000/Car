# Practicas Asignatura CAR


### Utilizar CMakeLists

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