/* ************************************************************************
 *  (c) by Karl-Heinz Kuebbeler, Projekt Tranzistor Tester
 *  
 *  File:       langBRASIL.h
 *  Funktion:   language selection
 * 
 * History:     Date        Sign    Kommentar 
 *              2021-01-12
 * ************************************************************************ */
#if defined(LANG_BRASIL)					// Brazilian Portuguese
   const unsigned char TestRunning[] MEM_TEXT = "Testando";
   const unsigned char BatWeak[] MEM_TEXT = "fraca"; 
   const unsigned char BatEmpty[] MEM_TEXT = "acabou!"; 
   const unsigned char TestFailed2[] MEM_TEXT = "ou danificado..."; 
   const unsigned char Bauteil[] MEM_TEXT = "peca"; 
//   const unsigned char Diode[] MEM_TEXT = "Diodo: ";
   const unsigned char Triac[] MEM_TEXT = "Triac";
   const unsigned char Thyristor[] MEM_TEXT = "Tiristor";
   const unsigned char Unknown[] MEM_TEXT = " O que? "; 
   const unsigned char TestFailed1[] MEM_TEXT = "Componente ruim,";
   const unsigned char Detected[] MEM_TEXT = " detectado";
   const unsigned char TestTimedOut[] MEM_TEXT = "Tempo esgotado!";
   #define Cathode_char 'K'
 #ifdef WITH_SELFTEST
   const unsigned char SELFTEST[] MEM_TEXT = "Autoteste...";
   const unsigned char RELPROBE[] MEM_TEXT = "Isole Pontas!";
   const unsigned char ATE[] MEM_TEXT = "Fim do teste";
 #endif
 #ifdef WITH_MENU
   const unsigned char SELECTION_str[] MEM2_TEXT = "Selecao:";
   const unsigned char TESTER_str[] MEM2_TEXT = "Transistor";
  #ifndef NO_FREQ_COUNTER
   const unsigned char FREQ_str[] MEM2_TEXT = "Frequencimetro";
 #ifdef WITH_FREQUENCY_DIVIDER
   const unsigned char FScaler_str[] MEM2_TEXT = "F-Scaler";
 #endif
  #endif
   const unsigned char VOLTAGE_str[] MEM2_TEXT = "Voltimetro";
   const unsigned char SHOW_str[] MEM2_TEXT = "Informacoes";	// "Show data"
   const unsigned char OFF_str[] MEM2_TEXT = "Desligar";
   const unsigned char F_GEN_str[] MEM2_TEXT = "F-Generador";
  #ifdef PWM_SERVO
   const unsigned char PWM_10bit_str[] MEM2_TEXT = "PWM Servo";
  #else
   const unsigned char PWM_10bit_str[] MEM2_TEXT = "PWM 10-bit";
  #endif
  #ifdef WITH_ROTARY_CHECK
   const unsigned char RotaryEncoder_str[] MEM2_TEXT = "Encoder rotativo";
  #endif
   const unsigned char SetCapCorr_str[] MEM2_TEXT = {'C','(',LCD_CHAR_U,'F',')','C','o','r','r','e','c','t','i','o','n',0};
   const unsigned char TURN_str[] MEM2_TEXT = "Girar!";
   const unsigned char FULLCHECK_str[] MEM2_TEXT = "Autoteste";
   const unsigned char SHORT_PROBES_str[] MEM2_TEXT = "Conecte pontas!";
  #if (WITH_FREQUENCY_SWITCH == 1)
   const unsigned char HFREQ_str[] MEM2_TEXT = "Frequencia > 2MHz";
   const unsigned char H_CRYSTAL_str[] MEM2_TEXT = "Cristal HF";
   const unsigned char L_CRYSTAL_str[] MEM2_TEXT = "Cristal LF";
  #endif
  #if ((LCD_ST_TYPE == 7565) || (LCD_ST_TYPE == 1306) || (LCD_ST_TYPE == 8812) || (LCD_ST_TYPE == 8814) || (LCD_ST_TYPE == 8814) || defined(LCD_DOGM))
   const unsigned char CONTRAST_str[] MEM2_TEXT = "Contraste";
  #endif
 #endif  /* WITH_MENU */
 #ifdef WITH_XTAL
   const unsigned char cerres_str[] MEM_TEXT = "Cer. resonator  ";
   const unsigned char xtal_str[] MEM_TEXT = "Cristal  ";
 #endif
 #define LANG_SELECTED
#endif  /* LANG BRASIL */
/* ****************************** EOF ***************************************** */
