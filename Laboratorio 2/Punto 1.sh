#!bin/sh
clear
resultado=$(wc -l /etc/profile)
echo "El numero de lineas del archivo /etc/profile es:"$resultado
