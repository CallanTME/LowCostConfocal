// Code to create a square
// Run at 10K pps
// 20Hz Square
// 500 points per square
// 125 points per egde

double stepsPerPoint;
unsigned long current_time;
unsigned long prev_time;
int counter;
int x;
int y;
int start_point;

void setup() {

  //Serial.begin(9600);
  stepsPerPoint = 4;
  analogWriteResolution(12);

  start_point = 1792;
  x = start_point;
  y = start_point;

  // DAC0 is x-mirror
  analogWrite(DAC0, x);
  // DAC1 is y-mirror
  analogWrite(DAC1, y);

  prev_time = micros();
  counter = 0;
    
}

void loop() {

//  x = 500;
//  y = 500;
//
//  for (int i=1;i++;i<=125){
//    x += stepsPerPoint;
//    analogWrite(DAC0, x);
//    delayMicroseconds(100);
//  }
//
//    for (int i=1;i++;i<=125){
//    y += stepsPerPoint / 8;
//    analogWrite(DAC1, y);
//    delayMicroseconds(100);
//  }
//
//    for (int i=1;i++;i<=125){
//    x -= stepsPerPoint;
//    analogWrite(DAC0, x);
//    delayMicroseconds(100);
//  }
//
//    for (int i=1;i++;i<=125){
//    y -= stepsPerPoint / 8;
//    analogWrite(DAC1, y);
//    delayMicroseconds(100);
//  }

    
  
  current_time = micros();

  if (current_time - prev_time > 50){

    prev_time = current_time;

    if (counter < 125){
      x += stepsPerPoint * 4;
    }
    else if (counter < 250){
      y += stepsPerPoint;
    }
    else if (counter < 375){
      x -= stepsPerPoint * 4;   
    }
    else if (counter < 500){
      y -= stepsPerPoint;
    } else {
      counter = 0;
      x = start_point;
      y = start_point;


    }

    if (x < start_point) {x = start_point;}

    analogWrite(DAC0, x);
    analogWrite(DAC1, y);

//    Serial.println('x');
//    Serial.println(x);
//    Serial.println('y');
//    Serial.println(y);
    counter++;
  }
}
