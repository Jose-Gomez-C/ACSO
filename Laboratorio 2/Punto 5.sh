!#/bin/bash
clear
opc="-1"
while [ $opc <> 5]
do
        echo "Opciones: "
        echo "1 nummero de archivos del director "
        echo "2 buscar archivo en un directorio dado y su cantidad"
        echo "3 mostrar informacion de los usuarios"
        echo "4 listar archivos y permisos del directorio dado"
        echo "5 salir"
        read opc
        clear
        case &opc in
                1)
                        sh 1.Ejecución automática de una secuencia de Punto1.sh
                ;;
                2)
                        echo "Escriba el nombre archivo:"
                        read archivo
                        echo "escribir directorio"
                        read directorioio
                        sh  2.Manejo de variables.sh $archivo $directorio
                ;;
                3)
                        sh 3.Uso de repeticiones y almacenamiento.sh
                ;;
                4)
                        echo "escriba ruta"
                        read ruta
                        echo "escriba el numero de permiso"
                        read permiso
                        sh Punto4.sh $ruta $permiso
                ;;
                5)
                        exit
                ;;
        esac
done