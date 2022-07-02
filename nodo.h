#include "geoloc.h"

#define T_OMISION 1

class nodo{
	
	geoloc g;
	short tipo;
	
	public:
		
		nodo(geoloc g1, short t1 = T_OMISION){
			
			g = g1;
			tipo = t1;
			
		}
		
		geoloc obtGeo(){
			
			return g;
			
		}
		
		short obtTipo(){
			
			return tipo;
			
		}	
	
};
