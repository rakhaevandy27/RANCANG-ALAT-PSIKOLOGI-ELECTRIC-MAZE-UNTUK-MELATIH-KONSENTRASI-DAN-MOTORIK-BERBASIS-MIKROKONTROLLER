#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <Keypad.h>

#define lcd_width 20
#define lcd_height 4
LiquidCrystal_I2C lcd(0x27,20,4);

//
const byte ROWS = 4; // four rows
const byte COLS = 4; // four columns
char keys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};
byte rowPins[ROWS] = {2, 3, 4, 5}; // Connect to the row pinouts of the keypad
byte colPins[COLS] = {6, 7, 8, 9}; // Connect to the column pinouts of the keypad
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

//input
#define handlePin  2
#define reed_sw_1  3
#define reed_sw_2  4

//output
#define led_red    5
#define led_green  6
#define buzzer  7

//variable
char key;
int handle_state;
int reed_1;
int reed_2;
int count;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  lcd_setup();


}

void loop() {
  // put your main code here, to run repeatedly:

}


////////////////////////////////////////////////////////////////////////////////////////////////////////

void lcd_setup(){
  lcd.init();
  lcd.begin(lcd_width,lcd_height);
}

void keypad_input(){

}

void pin_init(){
  pinMode(led_red, OUTPUT);
  pinMode(led_green, OUTPUT);
  pinMode(handlePin, INPUT_PULLUP);
}