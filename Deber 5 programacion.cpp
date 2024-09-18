#include <iostream>
#include <cmath> 

using namespace std;

void ejercicio1() {
    
    double capital, interes;

    cout << "Ingrese el monto de dinero a invertir: ";
    cin >> capital;

    interes = capital * 0.0225;

    cout << "El interes ganado despues de un mes es: " << interes << endl;
    cout << "El total de dinero despues de un mes es: " << capital + interes << endl;

}



void ejercicio2() {

    double sueldoTecnico, sueldoConserje, sueldoAnalista;

    cout << "Ingrese el sueldo del tecnico: ";
    cin >> sueldoTecnico;
    cout << "Ingrese el sueldo del conserje: ";
    cin >> sueldoConserje;
    cout << "Ingrese el sueldo del analista: ";
    cin >> sueldoAnalista;

    double bonoTecnico = sueldoTecnico * 0.16;
    double bonoConserje = sueldoConserje * 0.16;
    double bonoAnalista = sueldoAnalista * 0.16;

    double totalTecnico = sueldoTecnico + bonoTecnico;
    double totalConserje = sueldoConserje + bonoConserje;
    double totalAnalista = sueldoAnalista + bonoAnalista;

    cout << "El sueldo total para el Tecnico es: $" << totalTecnico << endl;
    cout << "El sueldo total para el Conserje es: $" << totalConserje << endl;
    cout << "El sueldo total para el Analista es: $" << totalAnalista << endl;
}

void ejercicio3(){

    double enero, febrero, marzo;
    
    cout << "Ingrese el total de las compras del mes de enero: ";
    cin >> enero;
    cout << "Ingrese el total de las compras del mes de febrero: ";
    cin >> febrero;
    cout << "Ingrese el total de las compras del mes de marzo: ";
    cin >> marzo;
    

    double descuentoA = 0.125;
    double descuentoB = 0.15; 

    double ahorroEneroA = enero * descuentoA;
    double ahorroFebreroA = febrero * descuentoA;
    double ahorroMarzoA = marzo * descuentoA;
    double ahorroTotalA = ahorroEneroA + ahorroFebreroA + ahorroMarzoA;

    double ahorroEneroB = enero * descuentoB;
    double ahorroFebreroB = febrero * descuentoB;
    double ahorroMarzoB = marzo * descuentoB;
    double ahorroTotalB = ahorroEneroB + ahorroFebreroB + ahorroMarzoB;

    cout << "El ahorro total con el proveedor A es: $" << ahorroTotalA << endl;
    cout << "El ahorro total con el proveedor B es: $" << ahorroTotalB << endl;
	
}

void ejercicio4(){

    double notaDeberes, notaPruebas, notaExamenFinal;

    cout << "Ingrese la nota obtenida en deberes: ";
    cin >> notaDeberes;
    cout << "Ingrese la nota obtenida en pruebas: ";
    cin >> notaPruebas;
    cout << "Ingrese la nota obtenida en el examen final: ";
    cin >> notaExamenFinal;

    double porcentajeDeberes = 0.20;
    double porcentajePruebas = 0.30;
    double porcentajeExamenFinal = 0.40;

    double calificacionFinal = (notaDeberes * porcentajeDeberes) +
                               (notaPruebas * porcentajePruebas) +
                               (notaExamenFinal * porcentajeExamenFinal);

    cout << "La calificacion final es: " << calificacionFinal << endl;

}


void ejercicio5(){
	
    int alumnos, alumnas, totalEstudiantes;
    double porcentajeHombres, porcentajeMujeres;

    cout << "Ingrese el numero de alumnos: ";
    cin >> alumnos;
    cout << "Ingrese el numero de alumnas: ";
    cin >> alumnas;

    totalEstudiantes = alumnos + alumnas;
    porcentajeHombres = (double)alumnos / totalEstudiantes * 100.0;
    porcentajeMujeres = (double)alumnas / totalEstudiantes * 100.0;

    cout << "El porcentaje de hombres en el grupo es: " << porcentajeHombres << "%" << endl;
    cout << "El porcentaje de mujeres en el grupo es: " << porcentajeMujeres << "%" << endl;

}


void ejercicio6(){

    int horas;

    cout << "Ingrese el numero de horas: ";
    cin >> horas;

    int segundos = horas * 3600;

    cout << horas << " horas son " << segundos << " segundos." << endl;

}

void ejercicio7(){
	
    double costoPasaje;
    int tiempoViaje, diasSemana = 5;

    cout << "Ingrese el costo del pasaje: ";
    cin >> costoPasaje;
    cout << "Ingrese el tiempo de viaje en minutos: ";
    cin >> tiempoViaje;

    double gastoSemanal = costoPasaje * diasSemana * 2;
    int tiempoTotalSemanal = tiempoViaje * diasSemana * 2; 

    cout << "El gasto semanal en transporte es: $" << gastoSemanal << endl;
    cout << "El tiempo total semanal invertido en transporte es: " << tiempoTotalSemanal << " minutos." << endl;

}



void ejercicio8(){

    double numero;

    cout << "Ingrese un numero positivo: ";
    cin >> numero;

    if(numero <= 0) {
        cout << "El numero debe ser positivo." << endl;
    } else {
    
        double logaritmo = log(numero);

        cout << "El logaritmo natural de " << numero << " es: " << logaritmo << endl;
    }

}


void ejercicio9(){

    double altura;
    
    const double gravedad = 9.81;

    cout << "Ingrese la altura desde la que cae la piedra en metros: ";
    cin >> altura;

    double tiempo = sqrt((2 * altura) / gravedad);

    cout << "El tiempo que tarda la piedra en llegar al suelo es: " << tiempo << " segundos." << endl;

}

void ejercicio10(){
	
    int edad;
    float tiempoSegundos, pulsaciones;

    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << "Ingrese el tiempo en segundos de ejercicio: ";
    cin >> tiempoSegundos;

    pulsaciones = (220 - edad) / tiempoSegundos;

    cout << "El numero de pulsaciones que debe tener por cada " << tiempoSegundos << " segundos de ejercicio es: " << pulsaciones << endl;

}



main(){

//ejercicio1();
//ejercicio2();
//ejercicio3();
//ejercicio4();
//ejercicio5();
//ejercicio6();
//ejercicio7();
//ejercicio8();
//ejercicio9();
ejercicio10();



	return 0;
	
}
