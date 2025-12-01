# TP_prog_orientada_objetos
En este repo se encuentra la información de los codigos utilizados para este TP. se incluye un esquematico generado en TinkerCad aunque el codigo ha sido puesto a prueba en un arduino real del cual también se adjunta una foto

1

1.1	Se generó un header (.h) y un Implementation (.cpp) para poder manejar las clases de sensores.

 ![alt text](https://github.com/lu0franco/TP_prog_orientada_objetos/blob/main/Capturas%20para%20readme/image.png)
 ![alt text](https://github.com/lu0franco/TP_prog_orientada_objetos/blob/main/Capturas%20para%20readme/image-1.png)
 ![alt text](https://github.com/lu0franco/TP_prog_orientada_objetos/blob/main/Capturas%20para%20readme/image-2.png)
 ![alt text](https://github.com/lu0franco/TP_prog_orientada_objetos/blob/main/Capturas%20para%20readme/image-3.png)
 
1.2	
En Main se definen más sensores y se printean los datos de los mismos

![alt text](https://github.com/lu0franco/TP_prog_orientada_objetos/blob/main/Capturas%20para%20readme/image-4.png)

En sensor.cpp se agregan los constructores de las clases hijas e inicializan a la clase padre con las características de cada sensor para definir el tipo

![alt text](https://github.com/lu0franco/TP_prog_orientada_objetos/blob/main/Capturas%20para%20readme/image-5.png)

En sensor.h se agrega la definición de las clases hijas y se hace un override del método generarMedicion() para que no se pisen datos randomizados de una llamada anterior

![alt text](https://github.com/lu0franco/TP_prog_orientada_objetos/blob/main/Capturas%20para%20readme/image-6.png)

1.3
El código expresado en las capturas anteriores cumple con la consigna, mostrando por monitor serial los siguientes datos:
![alt text](https://github.com/lu0franco/TP_prog_orientada_objetos/blob/main/Capturas%20para%20readme/image-7.png)

1.4
Para poder adoptar las características de medición del sensor, en este caso un HC-SR04, se tuvo que agregar un solo método que reemplazaba la simulación de mediciones y se formuló una clase hija que corresponda a los datos de trabajo del sensor agregando atributos como pinTrig y pinEcho además del filtrado de datos recibidos

![alt text](https://github.com/lu0franco/TP_prog_orientada_objetos/blob/main/Capturas%20para%20readme/image-8.png)

![alt text](https://github.com/lu0franco/TP_prog_orientada_objetos/blob/main/Capturas%20para%20readme/image-9.png)

![alt text](https://github.com/lu0franco/TP_prog_orientada_objetos/blob/main/Capturas%20para%20readme/image-10.png)


