class BaseClass{
	
	void whoAmI(){
System.out.println("I am an object of BaseClass\n");
}

}

class FirstClass extends BaseClass{
	
	public void whoAmI(){
		
	System.out.println("nope");
	}
}

class SecondClass extends BaseClass{
	
	public void whoAmI(){
		
	System.out.println("yes");
	}
}

public class H5T1 {	
	public static void main (String[] args){
		
		BaseClass olio = new BaseClass();
		printInfo(olio);
		FirstClass olio2 = new FirstClass();
        printInfo(olio2);
        SecondClass oli3 = new SecondClass();
        printInfo(oli3);		
	}
		static void printInfo(BaseClass baseClassObject){
baseClassObject.whoAmI();
}
		
}
