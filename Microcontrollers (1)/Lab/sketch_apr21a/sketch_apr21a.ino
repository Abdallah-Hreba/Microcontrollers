void setup(){
  pinMode(30, 1);
  pinMode(31, 1);
  pinMode(32, 1);
  pinMode(33, 1);
  pinMode(34, 0);
  pinMode(35, 0);
  pinMode(36, 0);
  pinMode(37, 0);
}
void loop(){
  int Column;
  int LOC_u8Row;
   for (Column = 30; Column < 34; Column++)
	  {
	    digitalWrite(Column, 0);
	    for (LOC_u8Row = 34; LOC_u8Row < 38; LOC_u8Row++)
	    {
	      if (!digitalRead(LOC_u8Row))
	      {
	        while (!digitalRead(LOC_u8Row));
	        delay(10);
          if(LOC_u8Row == 37 && Column == 33){
            digitalWrite(42, 1);
            digitalWrite(43, 0);
            digitalWrite(44, 0);
            digitalWrite(45, 0);
          }
          else if(LOC_u8Row == 37 && Column == 32){
            digitalWrite(43, 1);
            digitalWrite(42, 0);
            digitalWrite(44, 0);
            digitalWrite(45, 0);
          }
          else if(LOC_u8Row == 37 && Column == 31){
            digitalWrite(43, 1);
            digitalWrite(42, 1);
            digitalWrite(44, 0);
            digitalWrite(45, 0);
          }
          else if(LOC_u8Row == 37 && Column == 30){
            digitalWrite(44, 1);
            digitalWrite(42, 0);
            digitalWrite(43, 0);
            digitalWrite(45, 0);
          }
          else if(LOC_u8Row == 36 && Column == 33){
            digitalWrite(44, 1);
            digitalWrite(43, 0);
            digitalWrite(42, 1);
            digitalWrite(45, 0);
          }
          else if(LOC_u8Row == 36 && Column == 32){
            digitalWrite(44, 1);
            digitalWrite(43, 1);
            digitalWrite(42, 0);
            digitalWrite(45, 0);
          }
          else if(LOC_u8Row == 36 && Column == 31){
            digitalWrite(44, 1);
            digitalWrite(43, 1);
            digitalWrite(42, 1);
            digitalWrite(45, 0);
          }
          else if(LOC_u8Row == 36 && Column == 30){
            digitalWrite(45, 1);
            digitalWrite(44, 0);
            digitalWrite(43, 0);
            digitalWrite(42, 0);
          }
          else if(LOC_u8Row == 35 && Column == 33){
            digitalWrite(45, 1);
            digitalWrite(44, 0);
            digitalWrite(43, 0);
            digitalWrite(42, 1);
          }
          else if(LOC_u8Row == 35 && Column == 32){
            digitalWrite(46, 0);
            digitalWrite(45, 1);
            digitalWrite(44, 0);
            digitalWrite(43, 1);
            digitalWrite(42, 0);
          }
          else if(LOC_u8Row == 35 && Column == 31){
            digitalWrite(46, 0);
            digitalWrite(45, 1);
            digitalWrite(44, 0);
            digitalWrite(43, 1);
            digitalWrite(42, 1);
          }
          else if(LOC_u8Row == 35 && Column == 30){
            digitalWrite(46, 0);
            digitalWrite(45, 1);
            digitalWrite(44, 1);
            digitalWrite(43, 0);
            digitalWrite(42, 0);
          }
          else if(LOC_u8Row == 34 && Column == 33){
            digitalWrite(46, 0);
            digitalWrite(45, 1);
            digitalWrite(44, 1);
            digitalWrite(43, 0);
            digitalWrite(42, 1);
          }
          else if(LOC_u8Row == 34 && Column == 32){
            digitalWrite(46, 0);
            digitalWrite(45, 1);
            digitalWrite(44, 1);
            digitalWrite(43, 1);
            digitalWrite(42, 0);
          }
         
          else if(LOC_u8Row == 34 && Column == 31){
            digitalWrite(46, 0);
            digitalWrite(45, 1);
            digitalWrite(44, 1);
            digitalWrite(43, 1);
            digitalWrite(42, 1);
          }
          else if(LOC_u8Row == 34 && Column == 30){
            digitalWrite(46, 1);
            digitalWrite(45, 0);
            digitalWrite(44, 0);
            digitalWrite(43, 0);
            digitalWrite(42, 0);
          }

	      }
	    }
	    digitalWrite(Column, 1);
	  }
}

