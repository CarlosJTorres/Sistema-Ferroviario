# Sistema-Ferroviario
Proyecto 2,  Técnicas de programación 3.

Para el desarrollo del Plan Ferroviario Nacional es necesario contar con un 
sistema que permita la simulación de un sistema ferroviario con las siguientes 
características: 

• La interfaz del usuario debe ser tan intuitiva como sea posible. El mapa de la 
red ferroviaria debe ser presentado en pantalla y todas las operaciones del 
sistema deben ser relacionadas al mapa. 

• El mapa de la red ferroviaria debe mostrar los nombres de las estaciones y las 
conexiones entre ellas. 

• El usuario estará en capacidad de modificar el mapa de la red ferroviaria con las 
siguientes operaciones: 

-> añadir y eliminar estaciones.
-> añadir y eliminar vías férreas. 
-> añadir y eliminar trenes. 
-> Añadir y eliminar jornadas de un tren. 
-> El usuario podrá suspender y reiniciar la simulación en cualquier momento. 

• Para realizar modificaciones al mapa es necesario que la simulación este 
suspendida o interrumpida. 

• Existen 2 tipos de trenes: de carga y pasajeros. Para los trenes de carga es 
necesario almacenar las TM de carga transportada y la cantidad de vagones 
disponibles, y para los de pasajeros el número de pasajeros transportados. Los 
trenes de pasajeros tendrán prioridad sobre los trenes de carga en el uso de las 
vías férreas. Es necesario identificar en pantalla si un tren es de carga o de 
pasajeros 

• Las rutas de los trenes son definidas por la estación inicial, estación final y las 
estaciones intermedias. Cada ruta estará definida por un máximo de 3 
estaciones intermedias. 

• Las jornadas de los trenes están definidas por una ruta con una hora de salida y 
una hora de llegada a la estación final 

• Durante toda la simulación se debe mostrar la posición actual y dirección de 
todos los trenes. 

• La Carga y Actualización de la data del sistema puede ser realizada de 2 
formas: 
-- Por lectura de un archivo en formato predefinido tipo texto. 
-- Directamente del teclado. 

• El sistema debe presentar un resumen al finalizar la simulación que incluya 
como mínimo:
-- Jornadas realizadas por tren y tiempo promedio de jornada global. 
-- Jornada más larga. 
-- Jornada más corta. 
-- Retraso por jornada y promedio de retraso global 
-- Retraso más largo. 

• Hasta un máximo de 10 trenes pueden estar en el sistema al mismo tiempo 

• Las tareas deben ser manejadas por el reloj. Por ejemplo el reloj debería enviar 
ticks en intervalos regulares para activar tareas como la actualización de la 
posición de los trenes. 

• Algunas tareas serán activadas por el usuario. Por ejemplo Iniciar/Parar, 
Suspender/ reiniciar simulación. 

• Las líneas férreas pueden ser de track sencillos (sólo pueden circular trenes en 
una sola dirección en un momento dado) o track dobles (pueden circular trenes 
en ambas direcciones). 

• Un tren no puede entrar en un track sencillo si éste está ocupado por un tren 
circulando en la dirección opuesta. El tren debe esperar en la estación hasta 
que el track se libere. Si un tren de carga va a entrar a un track y existe un tren 
de pasajeros esperando en el otro extremo, este debe esperar hasta que pase 
el tren de pasajeros. 

• Cada vez que un tren entra a un track y existe un tren circulando en la misma 
dirección más lento, el tren que esta entrando debe recalcular su velocidad (en 
caso de que sea necesario), para evitar chocar con el tren más lento. 

• El rendimiento del sistema debe ser tal que hasta 10 trenes puedan ser 
mostrados en la pantalla y animados simultáneamente. 

Este proyecto debe ser realizado utilizando técnicas de diseño y programación 
orientada a objetos con UML y el mismo estará dividido en 2 entregas. En la 
primera entrega deberá proveer el análisis y diseño del sistema utilizando una 
herramienta case en UML y en la segunda entrega la programación del mismo 
utilizando el lenguaje seleccionado por usted (C++ o Java).
