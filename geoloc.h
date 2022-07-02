#define LAT_OMISION 1
#define LON_OMISION 1
#define H_OMISION 1

class geoloc{
	
	double lat;
	double lon;
	double h;
	
	public:
		
		geoloc(double l1 = LAT_OMISION, double l2 = LON_OMISION, double h1 = H_OMISION){
			
			lat = l1;
			lon = l2;
			h = h1;
			
		}
		
		double obtLat(){
			
			return lat;
			
		}
		
		double obtLon(){
			
			return lon;
			
		}
		
		double obtH(){
			
			return h;
			
		}
	
};
