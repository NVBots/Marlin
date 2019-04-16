// /*
//   Control a DC motor with 2 endstops

//   Requires a full bridge driver such as STM's L6202

//   Supports timed moves with endstop detection

// */

// #ifndef dcmotor_h
// #define dcmotor_h

// #define DCMOTOR_FORWARD  0
// #define DCMOTOR_BACKWARD 1

// //Ejector macros
// #define DCMOTOR_ENABLE(v) digitalWrite(DCMOTOR_ENABLE_PIN, v)

// #define WRITE_DCMOTOR(y) {DCMOTOR_ENABLE(HIGH); digitalWrite(DCMOTOR_PIN1, y); digitalWrite(DCMOTOR_PIN2, (!y)); }
// //#define WRITE_DCMOTOR(y) { digitalWrite(DCMOTOR_PIN1,y); digitalWrite(DCMOTOR_PIN2, (!y)); }
// //#define WRITE_DCMOTOR_FORWARD { WRITE(DCMOTOR_PIN1,HIGH); WRITE(DCMOTOR_PIN2,LOW); }
// //#define WRITE_DCMOTOR_BACKWARD { WRITE(DCMOTOR_PIN1,LOW); WRITE(DCMOTOR_PIN2,HIGH);}
// #define WRITE_DCMOTOR_OFF { digitalWrite(DCMOTOR_PIN1,LOW); digitalWrite(DCMOTOR_PIN2,LOW); }

// #define READ_DCMOTOR(p) (digitalRead(p) == ((p==DCMOTOR_MIN_PIN & DCMOTOR_MIN_INVERTING) | (p==DCMOTOR_MAX_PIN & DCMOTOR_MAX_INVERTING)))
// //#define READ_DCMOTOR_MAX (READ(DCMOTOR_MAX_PIN) != DCMOTOR_ENDSTOPS_INVERTING)
// //#define READ_DCMOTOR_MIN (READ(DCMOTOR_MIN_PIN) != DCMOTOR_ENDSTOPS_INVERTING)

// /*!!!!!!!! Analog Pin Mapping !!!!!!!!*/
// #define DCMOTOR_CURRENT_PIN 3

// /*!!!!!!!! ALWAYS USE digitalRead FOR BOTTOM_LIMIT_PIN, DCMOTOR_MIN/MAX_PIN, or E_STOP_PIN !!!!!!!! */

// //#define BOTTOM_LIMIT_PIN    10 //bottom stop
// #define E_STOP_PIN          37 //E-stop

// //pins for endstops
// #define DCMOTOR_MIN_PIN     11 //31 //backstop
// #define DCMOTOR_MAX_PIN      9 //30 //frontstop

// //pins for motor control
// #define DCMOTOR_ENABLE_PIN   45 //29
// #define DCMOTOR_PIN1    43 //28      //This pin high moves the blade forward
// #define DCMOTOR_PIN2    42 //27      //This pin high moves the blade backwards

// #ifdef MAD
// //pins for psu
// #define STM32_NSS 8			 	//EXP2:PE0 two from bottom right
// #define PSU_ENABLE_PIN 10 	// EXP2:PC0 one from bottom right
// #define PSU_FIRING_PIN	18  // EXP2:PC2  bottom right (fastio pin!)
// #define PSU_CONTACT_PIN 42  	//EXP1:A2 bottom left (fastio pin!)
// #define PSU_STALL_PIN 43  	//EXP1:A3 one from bottom left (fastio pin!)
// #endif

// //DCMotor endstop settings
// const bool DCMOTOR_MIN_INVERTING = false; //set to true to invert the logic of the endstops
// const bool DCMOTOR_MAX_INVERTING = false; //set to true to invert the logic of the endstops

// //initialize and start dcmotor motor subsystem
// void dcmotor_init();

// void dcmotor_enable();

// void dcmotor_disable();

// //run motor until endstop is hit or time (ms) runs out
// void dcmotor_move(bool dir, const unsigned long &time, const unsigned long &sample_pe);

// //turn of the dcmotor subsystem
// void finishAndDisableEjector();

// #endif
