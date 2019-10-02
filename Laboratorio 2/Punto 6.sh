!#/bin/bash
clear
opc="-1"
while [ opc <> 3]
do
        echo "Opciones: "
        echo "1 revisar ultimo acceso de un usuario del sistema"
        echo "2 revisar intentos de acceso no permitidos al usuario root"
        echo "3 terminar"
        read opc
        clear
        case &opc in
                1)
                        echo "escriba el uisuario"
                        read usuario
                        lastlog --user &usuario
                ;;
                2)
                        utmpdump /var/log/btmp > infoUtmp.txt
                        cut -d ] -f 8- infoUtmp.txt > infoIntentos.txt
                        cat infoIntentos.txt
                        num=$(wc -1 infoIntentos.txt)
                        echo "cantidad de intentos ilegales"
                        echo &num
                ;;
                3)
                        exit
                ;;

        esac
done