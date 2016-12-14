public static void main(String[] args)
{

   HashMap<String, String>  countrymap = createMap();
   System.out.printf("Nigeria -> %s\n", checkCountry(countrymap, "Nigeria"));
}

// AppCypher
// 27/11/16
static public HashMap<String, String> createMap(){
   String [] continent = {"Africa", "Europe", "North America"};
   String [] countries = {"Nigeria", "Swaziland", /**/ "United Kingdom", "France", "Spain", /**/ "Canada"};

   HashMap<String, String> countrymap = new HashMap<>(50);
   // Africa
   for(int i = 0; i < 2; i++) countrymap.put(countries[i], continent[0]);
   // Europe
   for(int i = 2; i < 5; i++) countrymap.put(countries[i], continent[1]);
   // North America
   for(int i = 5; i < 6; i++) countrymap.put(countries[i], continent[2]);

   return countrymap;
}

static public String checkCountry(HashMap<String, String> countrymap, String country){
   return countrymap.get(country);
}
