import java.util.Random;

public class RandTable {
  
   //attribuutit
   int[] table;
   int curPos;
   int maxNum;
   //konstruktorit eli muodostimet
   public RandTable(final int size, final int max){
	   table = new int[size];
	   curPos = 0;
	   Random rand = new Random();
	   maxNum = max;
	   //Arvotaan table täyteen satunnaislukuja
	for (int i=0; i<table.length; i++){
		table [i]= rand.nextInt (max);
	}
   }
   
   //metodit
   public int nextNumber(){
	   int ebin;
	   
	   if(curPos>=table.length){
		   ebin=-1;
	   
   }else{
	   ebin=table[curPos];
	   curPos++;
   }
return ebin;
   }

}


