#include <iostream>
#include "nodo.h"

using namespace std;

int main(){
	
	geoloc g1(2.2, 4.7, 10);
	geoloc g2(4.4, 5.6, 1.5);
	nodo n1(g1, 8);
	nodo n2(g2, 3);
	
	cout << "Latitud g1:" << g1.obtLat() << endl << "Longitud g1:" <<  g1.obtLon() << endl << "Altura g1:" << g1.obtH() << endl;
	
	cout << "Latitud g2:" << g2.obtLat() << endl << "Longitud g2:" <<  g2.obtLon() << endl << "Altura g2:" << g2.obtH() << endl;
	
	cout << "Localizaci�n n1 " << endl << "Latitud: " << n1.obtGeo().obtLat() << endl << "Longitud: " << n1.obtGeo().obtLon() << endl << "Altura: " << n1.obtGeo().obtH() << endl << "Tipo: " << n1.obtTipo() << endl;
	
		
	return 0;
}
