
int p1 = A0;
int p2 = A1;
int fadeAmount = 5;
int brightness = 0;
int i,r,c;

//int row[] = {6,7,8,9,10,11,12,13};
//int col[] = {A0, A1, A2, A3, A4, A5, 4,5};

int row[] = {13, 12, 11, 10, 9, 8, 7, 6};
int col[] = {5, 4, A5, A4, A3, A2, A1,A0};

int rowCount = 8, colCount = 8;


/*
char ch[] =   "1......."
              "........"
              "........"
              "........"
              "........"
              "........"
              "........"
              ".......0"
              ;
*/

char TODOS[8][8] = {
{"11111111"},
{"11111111"},
{"11111111"},
{"11111111"},
{"11111111"},
{"11111111"},
{"11111111"},
{"11111111"}
};
char EX[8][8] = {
{"00000000"},
{"00010000"},
{"00010000"},
{"00010000"},
{"00010000"},
{"00000000"},
{"00010000"},
{"00000000"}
};
char A[8][8] = {
{"00000000"},
{"00011000"},
{"00100100"},
{"00100100"},
{"00111100"},
{"00100100"},
{"00100100"},
{"00000000"}
};
char B[8][8] = {
{"01111000"},
{"01001000"},
{"01001000"},
{"01110000"},
{"01001000"},
{"01000100"},
{"01000100"},
{"01111100"}
};
char C[8][8] = {
{"00000000"},
{"00011110"},
{"00100000"},
{"01000000"},
{"01000000"},
{"01000000"},
{"00100000"},
{"00011110"}
};
char D[8][8] = {
{"00000000"},
{"00111000"},
{"00100100"},
{"00100010"},
{"00100010"},
{"00100100"},
{"00111000"},
{"00000000"}
};
char E[8][8] = {
{"00000000"},
{"00111100"},
{"00100000"},
{"00111000"},
{"00100000"},
{"00100000"},
{"00111100"},
{"00000000"}
};
char F[8][8] = {
{"00000000"},
{"00111100"},
{"00100000"},
{"00111000"},
{"00100000"},
{"00100000"},
{"00100000"},
{"00000000"}
};
char G[8][8] = {
{"00000000"},
{"00111110"},
{"00100000"},
{"00100000"},
{"00101110"},
{"00100010"},
{"00111110"},
{"00000000"}
};
char H[8][8] = {
{"00000000"},
{"00100100"},
{"00100100"},
{"00111100"},
{"00100100"},
{"00100100"},
{"00100100"},
{"00000000"}
};
char I[8][8] = {
{"00000000"},
{"00111000"},
{"00010000"},
{"00010000"},
{"00010000"},
{"00010000"},
{"00111000"},
{"00000000"}
};
char J[8][8] = {
{"00000000"},
{"00011100"},
{"00001000"},
{"00001000"},
{"00001000"},
{"00101000"},
{"00111000"},
{"00000000"}
};
char K[8][8] = {
{"00000000"},
{"00100100"},
{"00101000"},
{"00110000"},
{"00101000"},
{"00100100"},
{"00100100"},
{"00000000"}
};
char L[8][8] = {
{"00000000"},
{"00100000"},
{"00100000"},
{"00100000"},
{"00100000"},
{"00100000"},
{"00111100"},
{"00000000"}
};
char M[8][8] = {
{"00000000"},
{"00000000"},
{"01000100"},
{"10101010"},
{"10010010"},
{"10000010"},
{"10000010"},
{"00000000"}
};
char N[8][8] = {
{"00000000"},
{"00100010"},
{"00110010"},
{"00101010"},
{"00100110"},
{"00100010"},
{"00000000"},
{"00000000"}
};
char O[8][8] = {
{"00000000"},
{"00111100"},
{"01000010"},
{"01000010"},
{"01000010"},
{"01000010"},
{"00111100"},
{"00000000"}
};
char P[8][8] = {
{"00000000"},
{"00111000"},
{"00100100"},
{"00100100"},
{"00111000"},
{"00100000"},
{"00100000"},
{"00000000"}
};
char Q[8][8] = {
{"00000000"},
{"00111100"},
{"01000010"},
{"01000010"},
{"01000010"},
{"01000110"},
{"00111110"},
{"00000001"}
};
char R[8][8] = {
{"00000000"},
{"00111000"},
{"00100100"},
{"00100100"},
{"00111000"},
{"00100100"},
{"00100100"},
{"00000000"}
};
char S[8][8] = {
{"00000000"},
{"00111100"},
{"00100000"},
{"00111100"},
{"00000100"},
{"00000100"},
{"00111100"},
{"00000000"}
};
char T[8][8] = {
{"00000000"},
{"01111100"},
{"00010000"},
{"00010000"},
{"00010000"},
{"00010000"},
{"00010000"},
{"00000000"}
};
char U[8][8] = {
{"00000000"},
{"01000010"},
{"01000010"},
{"01000010"},
{"01000010"},
{"00100100"},
{"00011000"},
{"00000000"}
};
char V[8][8] = {
{"00000000"},
{"00100010"},
{"00100010"},
{"00100010"},
{"00010100"},
{"00010100"},
{"00001000"},
{"00000000"}
};
char W[8][8] = {
{"00000000"},
{"10000010"},
{"10010010"},
{"01010100"},
{"01010100"},
{"00101000"},
{"00000000"},
{"00000000"}
};
char X[8][8] = {
{"00000000"},
{"01000010"},
{"00100100"},
{"00011000"},
{"00011000"},
{"00100100"},
{"01000010"},
{"00000000"}
};
char Y[8][8] = {
{"00000000"},
{"01000100"},
{"00101000"},
{"00010000"},
{"00010000"},
{"00010000"},
{"00010000"},
{"00000000"}
};
char Z[8][8] = {
{"00000000"},
{"00111100"},
{"00000100"},
{"00001000"},
{"00010000"},
{"00100000"},
{"00111100"},
{"00000000"}
};

void turnOn(int rr , int cc){
  digitalWrite(row[rr], HIGH);
  digitalWrite(col[cc], LOW);
}
void turnOff(int rr , int cc){
  //digitalWrite(row[rr], LOW);
  digitalWrite(col[cc], HIGH);
}
void draw(char choice){
  
   // digitalWrite(row[r], LOW);
    //delay(30);

  char myChar[8][8];
  switch(choice){
    case 'A':
    case 'a':
      memcpy(myChar, A, sizeof (char) * rowCount * colCount);
      break;
    default:
      memcpy(myChar, Z, sizeof (char) * rowCount * colCount);
      
  }

  
  for(r=0;r<8;r++){
    for(c=0;c<8;c++){
      if(myChar[r][c] == '1'){
        digitalWrite(col[c], LOW);
      }else{
        digitalWrite(col[c], HIGH);
      }
    }
    
    digitalWrite(row[r],HIGH);
    delay(2);
    digitalWrite(row[r], LOW);
  }
}

void setup() {
  // put your setup code here, to run once:

  for(int i=0;i<8;i++){
    pinMode(row[i],OUTPUT);
    pinMode(col[i], OUTPUT);
  }
  for(int i=0;i<8;i++){
    digitalWrite(col[i], HIGH);
    digitalWrite(row[i], LOW);
  }
  Serial.begin(9600);
  draw('a');
}

/*
  To make a light on need to make the row HIGH and column LOW
*/

void rowOn(int n){
  digitalWrite(row[n], HIGH);
}
void rowOff(int n){
  digitalWrite(row[n], LOW);
}
void colOn(int n){
  digitalWrite(col[n], LOW);
}
void colOff(int n){
  digitalWrite(col[n], HIGH);
}
void mydelay(){
  delay(100);
}
void loop() {

  draw('A');
  
  Serial.println("");

  
}
