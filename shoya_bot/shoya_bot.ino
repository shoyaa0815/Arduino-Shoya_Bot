int motor_backLeft = 9;
int motor_backRight = 11;
int motor_Left = 8;
int motor_Right = 10;
int stop_bot = 20;

int base = 200;
int low = 100;

int sensor_white_value[2] = {900,650};
int sensor_black_value[2] = {100,90};
int sensor_middle[2] = {(sensor_white_value[0] + sensor_black_value[0])/2, (sensor_white_value[1] + sensor_black_value[1])/2 };


void setup() {
  pinMode(motor_backLeft, OUTPUT);
  pinMode(motor_backRight, OUTPUT);
  pinMode(motor_Left, OUTPUT);
  pinMode(motor_Right, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  stop();
  //calibrate();
  working();
}
