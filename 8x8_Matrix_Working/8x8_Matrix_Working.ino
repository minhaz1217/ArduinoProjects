//http://embed.plnkr.co/3VUsekP3jC5xwSIQDVHx/preview
int row[] = {6, 7, 8, 9, 10, 11, 12, 13};
int col[] = {A0, A1, A2, A3, A4, A5, 4, 5};
int row2[] = {6, 7, 8, 9, 10, 11, 12, 13};
int col2[] = {A0, A1, A2, A3, A4, A5, 4, 5};


const byte rows[] = {
  row[0], row[1], row[2], row[3], row[4], row[5], row[6], row[7]
};

// The display buffer
// It's prefilled with a smiling face (1 = ON, 0 = OFF)
byte TODOS[] = {B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111};
byte EX[] = {B00000000, B00010000, B00010000, B00010000, B00010000, B00000000, B00010000, B00000000};
byte A[] = {B00000000, B00011000, B00100100, B00100100, B00111100, B00100100, B00100100, B00000000};
byte B[] = {B01111000, B01001000, B01001000, B01110000, B01001000, B01000100, B01000100, B01111100};
byte C[] = {B00000000, B00011110, B00100000, B01000000, B01000000, B01000000, B00100000, B00011110};
byte D[] = {B00000000, B00111000, B00100100, B00100010, B00100010, B00100100, B00111000, B00000000};
byte E[] = {B00000000, B00111100, B00100000, B00111000, B00100000, B00100000, B00111100, B00000000};
byte F[] = {B00000000, B00111100, B00100000, B00111000, B00100000, B00100000, B00100000, B00000000};
byte G[] = {B00000000, B00111110, B00100000, B00100000, B00101110, B00100010, B00111110, B00000000};
byte H[] = {B00000000, B00100100, B00100100, B00111100, B00100100, B00100100, B00100100, B00000000};
byte I[] = {B00000000, B00111000, B00010000, B00010000, B00010000, B00010000, B00111000, B00000000};
byte J[] = {B00000000, B00011100, B00001000, B00001000, B00001000, B00101000, B00111000, B00000000};
byte K[] = {B00000000, B00100100, B00101000, B00110000, B00101000, B00100100, B00100100, B00000000};
byte L[] = {B00000000, B00100000, B00100000, B00100000, B00100000, B00100000, B00111100, B00000000};
byte M[] = {B00000000, B00000000, B01000100, B10101010, B10010010, B10000010, B10000010, B00000000};
byte N[] = {B00000000, B00100010, B00110010, B00101010, B00100110, B00100010, B00000000, B00000000};
byte O[] = {B00000000, B00111100, B01000010, B01000010, B01000010, B01000010, B00111100, B00000000};
byte P[] = {B00000000, B00111000, B00100100, B00100100, B00111000, B00100000, B00100000, B00000000};
byte Q[] = {B00000000, B00111100, B01000010, B01000010, B01000010, B01000110, B00111110, B00000001};
byte R[] = {B00000000, B00111000, B00100100, B00100100, B00111000, B00100100, B00100100, B00000000};
byte S[] = {B00000000, B00111100, B00100000, B00111100, B00000100, B00000100, B00111100, B00000000};
byte T[] = {B00000000, B01111100, B00010000, B00010000, B00010000, B00010000, B00010000, B00000000};
byte U[] = {B00000000, B01000010, B01000010, B01000010, B01000010, B00100100, B00011000, B00000000};
byte V[] = {B00000000, B00100010, B00100010, B00100010, B00010100, B00010100, B00001000, B00000000};
byte W[] = {B00000000, B10000010, B10010010, B01010100, B01010100, B00101000, B00000000, B00000000};
byte X[] = {B00000000, B01000010, B00100100, B00011000, B00011000, B00100100, B01000010, B00000000};
byte Y[] = {B00000000, B01000100, B00101000, B00010000, B00010000, B00010000, B00010000, B00000000};
byte Z[] = {B00000000, B00111100, B00000100, B00001000, B00010000, B00100000, B00111100, B00000000};

float timeCount = 0;
int i, coun, temp;
void setup() {

  for(i=0;i<8;i++){
    
  }

  
  // Open serial port
  Serial.begin(9600);

  // Set all used pins to OUTPUT
  // This is very important! If the pins are set to input
  // the display will be very dim.
  for (byte i = 2; i <= 13; i++)
    pinMode(i, OUTPUT);
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
}

void loop() {
  // This could be rewritten to not use a delay, which would make it appear brighter
  delay(5);
  timeCount += 1;
  if (timeCount <  70) {
    drawScreen(A);
  } else if (timeCount <  1) {
    // do nothing
  } else if (timeCount <  150) {
    drawScreen(R);
  } else if (timeCount <  1) {
    // nothing
  } else if (timeCount <  270) {
    drawScreen(D);
  } else if (timeCount <  1) {
    // nothing
  } else if (timeCount <  350) {
    drawScreen(U);
  } else if (timeCount <  1) {
    // nothing
  } else if (timeCount <  430) {
    drawScreen(I);
  } else if (timeCount <  1) {
    // nothing
  } else if (timeCount <  510) {
    drawScreen(N);
  } else if (timeCount <  1) {

  } else if (timeCount <  550) {
    drawScreen(O);
  } else if (timeCount <  1) {
    // do nothing
  } else if (timeCount <  590) {
    drawScreen(EX);
  } else if (timeCount <  1) {
    // nothing
  } else if (timeCount <  630) {
    drawScreen(EX);
  } else if (timeCount <  1) {

    //} else if (timeCount <  670) {
    //drawScreen(A);
    //} else if (timeCount <  1) {

    //} else if (timeCount <  710) {
    //drawScreen(R);
    //} else if (timeCount <  1) {

    //} else if (timeCount <  750) {
    //drawScreen(D);
    //} else if (timeCount <  1) {

    //} else if (timeCount <  790) {
    //drawScreen(U);
    //} else if (timeCount <  1) {

    //} else if (timeCount <  830) {
    //drawScreen(I);
    //} else if (timeCount <  1) {

    //} else if (timeCount <  870) {

    //} else if (timeCount <  1) {

    //} else if (timeCount <  910) {
    //  drawScreen(O);
    //} else if (timeCount <  1) {

  } else {
    // back to the start
    timeCount = 0;
  }
}
void  drawScreen(byte buffer2[]) {


  // Turn on each row in series
  for (byte i = 0; i < 8; i++) {
    setColumns(buffer2[i]); // Set columns for this specific row

    digitalWrite(rows[i], HIGH);
    delay(2); // Set this to 50 or 100 if you want to see the multiplexing effect!
    digitalWrite(rows[i], LOW);

  }
}
void setColumns(byte b) {
  digitalWrite(col[0], (~b >> 0) & 0x01); // Get the 1st bit: 10000000
  digitalWrite(col[1], (~b >> 1) & 0x01); // Get the 2nd bit: 01000000
  digitalWrite(col[2], (~b >> 2) & 0x01); // Get the 3rd bit: 00100000
  digitalWrite(col[3], (~b >> 3) & 0x01); // Get the 4th bit: 00010000
  digitalWrite(col[4], (~b >> 4) & 0x01); // Get the 5th bit: 00001000
  digitalWrite(col[5], (~b >> 5) & 0x01); // Get the 6th bit: 00000100
  digitalWrite(col[6], (~b >> 6) & 0x01); // Get the 7th bit: 00000010
  digitalWrite(col[7], (~b >> 7) & 0x01); // Get the 8th bit: 00000001

  // If the polarity of your matrix is the opposite of mine
  // remove all the '~' above.
}

