import java.util.*;
import java.io.*;
import java.io.IOException;
import java.io.ObjectOutputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.FileInputStream;

class ProductRepository {
    
    private Vector <Product> sailio;
    private static ProductRepository instance = null;
   
    private ProductRepository(){
        sailio = new Vector<>(3,1);
    }
    
    public void addProduct( Product prod ){
        sailio.addElement( prod );
    }
    
    public Product removeLast(){
        
        if(!sailio.isEmpty()){
            Product dProduct;
            dProduct = sailio.lastElement();
            int indeksi= sailio.lastIndexOf( dProduct );
            sailio.removeElementAt( indeksi );
            return dProduct;
        }
        return null;
        
    }
    
    public void tulosta(){
        
        Iterator<Product> iter = sailio.iterator();
        
        while( iter.hasNext()){
            System.out.println(iter.next());
        }
        
    }
   
   public static ProductRepository getInstance(){
      if( instance == null ){
         instance = new ProductRepository();
      }
      return instance;
   }
   public boolean tallennaTiedostoon( String tiedostonNimi ){
		try (ObjectOutputStream oOut = new ObjectOutputStream(new FileOutputStream(tiedostonNimi))){
		
		
			Iterator<Product> iter = sailio.iterator();
        
        while( iter.hasNext()){
           	oOut.writeObject(iter.next());
		}
			
			}catch( IOException ioe) {
                System.out.println("True");
                ioe.printStackTrace();
                return false;
		}
		return true;
    }
	
	public boolean lueTiedostosta (String tiedostonNimi){
		File file = new File (tiedostonNimi);
		if (file.isFile()){
		try (ObjectInputStream oIn=new ObjectInputStream(new FileInputStream(tiedostonNimi))){
			sailio.clear();
			 
			 while(true){
				 Product eka = (Product)oIn.readObject();
				 sailio.addElement( eka );
				 
			 }
			 
        }catch (EOFException e2){
            System.out.println("Loppu");
            return true;
        }			
			 
		catch( IOException | ClassNotFoundException e) {
            System.out.println("true");
            e.printStackTrace();
			return false;
		}
		

	
	}else System.out.println("homo"); return false;
	


  
}
}
