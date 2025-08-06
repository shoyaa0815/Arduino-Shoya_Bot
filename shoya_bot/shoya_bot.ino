const int motor_Left = 8;
const int motor_backLeft = 9;
const int motor_Right = 10;
const int motor_backRight = 11;

const int sensor_Left = 26;
const int sensor_Right = 27;

const int stop_bot = 20;

const int baseSpeed = 200;
const int turnDiff = 100;

ิbalanceL = 0;
balanceR = 0;

//ปรับตามสนาม
int sensor_middle[2] = { 500, 370 };

void setup() {
  pinMode(motor_Left, OUTPUT);
  pinMode(motor_backLeft, OUTPUT);
  pinMode(motor_Right, OUTPUT);
  pinMode(motor_backRight, OUTPUT);

  pinMode(stop_bot, INPUT);

  Serial.begin(9600);

  waitForStart();
}

void loop() {
  stop_Bot();
  // calibrate();
  working();
}





// int motor_backLeft = 9;
// int motor_backRight = 11;
// int motor_Left = 8;
// int motor_Right = 10;
// int stop_bot = 20;

// int base = 200;
// int low = 100;

// int sensor_white_value[2] = {900,650};
// int sensor_black_value[2] = {100,90};
// int sensor_middle[2] = {(sensor_white_value[0] + sensor_black_value[0])/2, (sensor_white_value[1] + sensor_black_value[1])/2 };


// void setup() {
//   pinMode(motor_backLeft, OUTPUT);
//   pinMode(motor_backRight, OUTPUT);
//   pinMode(motor_Left, OUTPUT);
//   pinMode(motor_Right, OUTPUT);

//   pinMode(stop_Bot, INPUT );

//   Serial.begin(9600);
// }

// void loop() {
//   stop();
//   //calibrate();
//   working();
// }
