// C++ code
#include <iostream>

//Grade determinant
void setup()
{
  Serial.begin(9600); 
}

void loop()
{
 int score = 50;
 if (score < 49) {
   Serial.println("Your grade is F");
 } else if (score <= 59 && score > 49) {
   Serial.println("Your grade is D");
                   }
}

//printing even number
void setup() {
	Serial.begin(9600);
  }
  
  void loop() {
	int y = 10;
	  
	while (y >= 0) {
	  if (y%2 == 0) {
	  Serial.println(y);
	  }
		y--;
	}
  }


  //printing odd number

  void setup() {
	Serial.begin(9600);
  }
  
  void loop() {
   // int y = 10;
	  
	for (int y=0; y<=10; y++) {
	  if (y%2 == 1) {
	  Serial.println(y);
	  }
	}
  }

//Use of continue keyword
void setup() {
  Serial.begin(9600);
  
   int y = 11;
  
  while (y>0) {
     y--;
  if (y==5) {
    continue;
  }
    Serial.println(y);
  }
  Serial.println("finished");

}

void loop() {
 
}

//   continue just skips the current step imposed by a condition
//   break ignores every other thing