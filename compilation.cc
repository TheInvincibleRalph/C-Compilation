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



//user-defined function

int z = 5;

void setup() {
  // put your setup code here, to run once:
 Serial.begin(115200);
int x = sq_of_num(3);
 Serial.println(x);
int y =sq_of_num(5);
 Serial.println(y);
 Serial.println(z);

String m = "RAPHAEL";
int res = lengthOf(m);
 Serial.println(res);

//string manipulation

String firstname = "Boluwatife";
String newstr;

  newstr = firstname.substring(0,4);
  Serial.println(newstr);
}

void loop() {
  // put your main code here, to run repeatedly:
//  String name = "bolu";
//   Serial.println(name[4] =='\0'); //'\0' is a null character
}

//user-defined function that takes in an integer "num", and returns an integer value
int sq_of_num(int num) {
  int x = (num * num);
  Serial.println(x);
  return 5;
  Serial.println(z);
 
}

//finding the length of an array
int lengthOf(String m) {
 int count = 0;
  while (m != '\0') {
    m.remove(0, 1);
    count++;
  }
  return count;
}

//OR

int lengthOf(String m) {
 int count = 0;
  while (m[count] != '\0') {
    count++;
  }
  return count;
}


//   continue just skips the current step imposed by a condition
//   break ignores every other thing