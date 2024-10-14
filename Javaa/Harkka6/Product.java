public class Product {

    private String name;
    private double price;
    
    public Product(final String name_par, final double price_par){
        this.name = name_par;
        this.price = price_par;
        System.out.println("Luotiin uusi olio: " + name + " hinta:" + price);
    }
    
    public void setName( final String name_par){
        this.name = name_par;
    }
    
    public String getName(){
        return this.name;
    }
    
    public void setPrice(final double price_par){
        this.price = price_par;
    }
    
    public double getPrice(){
        return this.price;
    }
   
   public String toString(){
      return "Tuote: " + this.name + " hinta: " + this.price;
   }
}