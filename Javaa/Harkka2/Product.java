class Product {
   private String name;
   private double price;
   
   public Product(String name_par,double price_par){
	   name = name_par;
	   price = price_par;
	   
   }
  
   public void setName(String name_par){
	   name = name_par;
   }
   public void setPrice(double price_par){
	   price = price_par;
   }
   public String getName(){
	   return name;
   }
   public double getPrice(){
	   return price;
   }
}