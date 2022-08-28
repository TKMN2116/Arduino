int val_read;
int val_sum;
float val_ave;
float V_val;
float T_val;
float Temp;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);
  //analogReference(INTERNAL);
  //pinMode(2, INPUT);
}

// the loop function runs over and over again forever
void loop() { 
  val_read = analogRead(A0);
  val_sum = 0;
  for(int i = 0; i < 100; i++){
    val_sum += val_read;
  }
  //Serial.println(val_sum);
  val_ave = val_sum / 100.0;
  V_val = val_ave /1024.0 * 5.0;
  Temp = (V_val - 0.5) * 100.0;
  //Serial.println("Reading");
  Serial.println(Temp,5);
  delay(1000);
}
