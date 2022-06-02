int im_freq;
int range;
int total_range;
int total_steps;
int resolution;
double period_us;
int start_point;
int x;
int y;
int total_count;
bool reverse;
double pps;
unsigned long period;

unsigned long start_time;
unsigned long prev_time;
unsigned long current_time;


void setup() {

  // Input variables to set the speed, range, and dividing factor
  // pps - points per second
  pps = 20000;
  // range is between 0 and 1 for proportion of available range used
  // keep at values of 1/2^n to start
  range = 1;
  // set the number of bits the DAC will use
  resolution = 12;

  analogWriteResolution(resolution);
  total_range = pow(2,resolution);
  range = floor(total_range * range);
 
  period = (1 / pps) * 1000000;

  start_point = (total_range / 2) - (range / 2);
  total_steps = pow(range, 2);

  total_count = 0;
  reverse = false;
  
  y = start_point;
  x = start_point;

  // Control the Y mirror (slow)
  analogWrite(DAC0, start_point);
  // Control the X mirror (fast)
  analogWrite(DAC1, start_point);

  // Get start time to reference for other parts of program
  prev_time = micros();
}

void loop() {

  current_time = micros();

  //if ((current_time - (period * (total_count)) - start_time) > period){
  if (current_time - prev_time > period){
    prev_time = current_time;
    total_count++;
    
    if(total_count % range == 0){
      
      reverse = !reverse;
      
      if(y >= (start_point + range)){
        y = start_point;
      } else {
        y++;
      }
     
      analogWrite(DAC0, y);
      
    } else {
      if(!reverse){
        x++;
      } else {
        x--;
      }
      analogWrite(DAC1, x);
    }
  }
}
