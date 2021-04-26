// Ode to Joy
// Megalovania

#define NOTE_C5 523
#define NOTE_D5 587
#define NOTE_E5 659
#define NOTE_F5 698
#define NOTE_G5 784
#define NOTE_A5 880
#define NOTE_As5 932
#define NOTE_B5 988
#define NOTE_C6 1047
#define NOTE_Cs6 1109
#define NOTE_D6 1175
#define NOTE_Ds6 1245
#define NOTE_E6 1319
#define NOTE_F6 1397
#define NOTE_Fs6 1480
#define NOTE_G6 1568
#define NOTE_Gs6 1661
#define NOTE_A6 1760
#define NOTE_B6 1976
#define NOTE_C7 2093
#define NOTE_Cs7 2217
#define NOTE_D7 2349

struct Note {
    unsigned int frequency, duration, delay;

    Note(){}
    Note(unsigned int frequency, unsigned int duration, unsigned int delay) {
        this->frequency = frequency; 
        this->duration = duration; 
        this->delay = delay;
        this->duration = min(this->duration, this->delay);
    }
};

const int buzzerPin = 9, OtJ_len = 62, MG_len = 276;

//Note OtJ[OtJ_len];
Note MG[MG_len];


/*void constructSong_OtJ() Ode to Joy { // Ode to Joy
    int idx = -1;
    OtJ[idx += 1] = Note(NOTE_E6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_E6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_F6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_G6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_G6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_F6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_E6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_D6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_C6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_C6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_D6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_E6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_E6, 500, 750);
    OtJ[idx += 1] = Note(NOTE_D6, 250, 250);
    OtJ[idx += 1] = Note(NOTE_D6, 500, 1000);

    OtJ[idx += 1] = Note(NOTE_E6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_E6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_F6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_G6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_G6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_F6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_E6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_D6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_C6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_C6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_D6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_E6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_D6, 500, 750);
    OtJ[idx += 1] = Note(NOTE_C6, 250, 250);
    OtJ[idx += 1] = Note(NOTE_C6, 500, 1000);

    OtJ[idx += 1] = Note(NOTE_D6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_D6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_E6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_C6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_D6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_E6, 250, 250);
    OtJ[idx += 1] = Note(NOTE_F6, 250, 250);
    OtJ[idx += 1] = Note(NOTE_E6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_C6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_D6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_E6, 250, 250);
    OtJ[idx += 1] = Note(NOTE_F6, 250, 250);
    OtJ[idx += 1] = Note(NOTE_E6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_D6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_C6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_D6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_G5, 500, 1000);

    OtJ[idx += 1] = Note(NOTE_E6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_E6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_F6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_G6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_G6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_F6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_E6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_D6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_C6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_C6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_D6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_E6, 500, 500);
    OtJ[idx += 1] = Note(NOTE_D6, 500, 750);
    OtJ[idx += 1] = Note(NOTE_C6, 250, 250);
    OtJ[idx += 1] = Note(NOTE_C6, 500, 2500);
}
*/

void constructSong_MG() { // Megalovania
    int idx = -1, beat = 150;

    MG[idx += 1] = Note(NOTE_D6, beat, beat);
    MG[idx += 1] = Note(NOTE_D6, beat, beat);
    MG[idx += 1] = Note(NOTE_D7, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_A6, beat, beat * 3);
    MG[idx += 1] = Note(NOTE_Gs6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_G6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_F6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_D6, beat, beat);
    MG[idx += 1] = Note(NOTE_F6, beat, beat);
    MG[idx += 1] = Note(NOTE_G6, beat, beat);

    MG[idx += 1] = Note(NOTE_C6, beat, beat);
    MG[idx += 1] = Note(NOTE_C6, beat, beat);
    MG[idx += 1] = Note(NOTE_D7, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_A6, beat, beat * 3);
    MG[idx += 1] = Note(NOTE_Gs6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_G6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_F6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_D6, beat, beat);
    MG[idx += 1] = Note(NOTE_F6, beat, beat);
    MG[idx += 1] = Note(NOTE_G6, beat, beat);

    MG[idx += 1] = Note(NOTE_B5, beat, beat);
    MG[idx += 1] = Note(NOTE_B5, beat, beat);
    MG[idx += 1] = Note(NOTE_D7, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_A6, beat, beat * 3);
    MG[idx += 1] = Note(NOTE_Gs6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_G6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_F6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_D6, beat, beat);
    MG[idx += 1] = Note(NOTE_F6, beat, beat);
    MG[idx += 1] = Note(NOTE_G6, beat, beat);

    MG[idx += 1] = Note(NOTE_As5, beat, beat);
    MG[idx += 1] = Note(NOTE_As5, beat, beat);
    MG[idx += 1] = Note(NOTE_D7, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_A6, beat, beat * 3);
    MG[idx += 1] = Note(NOTE_Gs6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_G6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_F6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_D6, beat, beat);
    MG[idx += 1] = Note(NOTE_F6, beat, beat);
    MG[idx += 1] = Note(NOTE_G6, beat, beat);


    MG[idx += 1] = Note(NOTE_D6, beat, beat);
    MG[idx += 1] = Note(NOTE_D6, beat, beat);
    MG[idx += 1] = Note(NOTE_D7, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_A6, beat, beat * 3);
    MG[idx += 1] = Note(NOTE_Gs6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_G6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_F6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_D6, beat, beat);
    MG[idx += 1] = Note(NOTE_F6, beat, beat);
    MG[idx += 1] = Note(NOTE_G6, beat, beat);

    MG[idx += 1] = Note(NOTE_C6, beat, beat);
    MG[idx += 1] = Note(NOTE_C6, beat, beat);
    MG[idx += 1] = Note(NOTE_D7, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_A6, beat, beat * 3);
    MG[idx += 1] = Note(NOTE_Gs6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_G6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_F6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_D6, beat, beat);
    MG[idx += 1] = Note(NOTE_F6, beat, beat);
    MG[idx += 1] = Note(NOTE_G6, beat, beat);

    MG[idx += 1] = Note(NOTE_B5, beat, beat);
    MG[idx += 1] = Note(NOTE_B5, beat, beat);
    MG[idx += 1] = Note(NOTE_D7, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_A6, beat, beat * 3);
    MG[idx += 1] = Note(NOTE_Gs6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_G6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_F6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_D6, beat, beat);
    MG[idx += 1] = Note(NOTE_F6, beat, beat);
    MG[idx += 1] = Note(NOTE_G6, beat, beat);

    MG[idx += 1] = Note(NOTE_As5, beat, beat);
    MG[idx += 1] = Note(NOTE_As5, beat, beat);
    MG[idx += 1] = Note(NOTE_D7, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_A6, beat, beat * 3);
    MG[idx += 1] = Note(NOTE_Gs6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_G6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_F6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_D6, beat, beat);
    MG[idx += 1] = Note(NOTE_F6, beat, beat);
    MG[idx += 1] = Note(NOTE_G6, beat, beat);


    MG[idx += 1] = Note(NOTE_F6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_F6, beat, beat);
    MG[idx += 1] = Note(NOTE_F6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_F6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_F6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_D6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_D6, beat, beat * 3);
    MG[idx += 1] = Note(NOTE_D6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_F6, beat, beat);
    MG[idx += 1] = Note(NOTE_F6, beat, beat);
    MG[idx += 1] = Note(NOTE_F6, beat, beat);
    MG[idx += 1] = Note(NOTE_F6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_G6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_Gs6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_G6, beat, beat);
    MG[idx += 1] = Note(NOTE_F6, beat, beat);
    MG[idx += 1] = Note(NOTE_D6, beat, beat);
    MG[idx += 1] = Note(NOTE_F6, beat, beat);
    MG[idx += 1] = Note(NOTE_G6, beat, beat * 3);

    MG[idx += 1] = Note(NOTE_F6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_F6, beat, beat);
    MG[idx += 1] = Note(NOTE_F6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_G6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_Gs6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_A6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_C7, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_A6, beat, beat * 3);
    MG[idx += 1] = Note(NOTE_D7, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_D7, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_D7, beat, beat);
    MG[idx += 1] = Note(NOTE_A6, beat, beat);
    MG[idx += 1] = Note(NOTE_D7, beat, beat);
    MG[idx += 1] = Note(NOTE_C7, beat * 5, beat * 9);

    MG[idx += 1] = Note(NOTE_A6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_A6, beat, beat);
    MG[idx += 1] = Note(NOTE_A6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_A6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_A6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_G6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_G6, beat * 2, beat * 5);

    MG[idx += 1] = Note(NOTE_A6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_A6, beat, beat);
    MG[idx += 1] = Note(NOTE_A6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_A6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_G6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_A6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_D7, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_A6, beat, beat);
    MG[idx += 1] = Note(NOTE_G6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_D7, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_A6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_G6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_F6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_C7, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_A6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_G6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_F6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_As5, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_C6, beat, beat);
    MG[idx += 1] = Note(NOTE_D6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_F6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_C7, beat * 5, beat * 17);


    MG[idx += 1] = Note(NOTE_F6, beat, beat);
    MG[idx += 1] = Note(NOTE_D6, beat, beat);
    MG[idx += 1] = Note(NOTE_F6, beat, beat);
    MG[idx += 1] = Note(NOTE_G6, beat, beat);
    MG[idx += 1] = Note(NOTE_Gs6, beat, beat);
    MG[idx += 1] = Note(NOTE_G6, beat, beat);
    MG[idx += 1] = Note(NOTE_F6, beat, beat);
    MG[idx += 1] = Note(NOTE_D6, beat, beat);
    MG[idx += 1] = Note(NOTE_Gs6, beat, beat);
    MG[idx += 1] = Note(NOTE_G6, beat, beat);
    MG[idx += 1] = Note(NOTE_F6, beat, beat);
    MG[idx += 1] = Note(NOTE_D6, beat, beat);
    MG[idx += 1] = Note(NOTE_F6, beat, beat);
    MG[idx += 1] = Note(NOTE_G6, beat * 5, beat * 9);

    MG[idx += 1] = Note(NOTE_Gs6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_A6, beat, beat);
    MG[idx += 1] = Note(NOTE_C7, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_A6, beat, beat);
    MG[idx += 1] = Note(NOTE_Gs6, beat, beat);
    MG[idx += 1] = Note(NOTE_G6, beat, beat);
    MG[idx += 1] = Note(NOTE_F6, beat, beat);
    MG[idx += 1] = Note(NOTE_D6, beat, beat);
    MG[idx += 1] = Note(NOTE_E6, beat, beat);
    MG[idx += 1] = Note(NOTE_F6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_G6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_Gs6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_C7, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_Cs7, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_Gs6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_Gs6, beat, beat);
    MG[idx += 1] = Note(NOTE_G6, beat, beat);
    MG[idx += 1] = Note(NOTE_F6, beat, beat);
    MG[idx += 1] = Note(NOTE_G6, beat * 5, beat * 8);

    MG[idx += 1] = Note(NOTE_F5, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_G5, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_A5, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_F6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_E6, beat * 2, beat * 4);
    MG[idx += 1] = Note(NOTE_D6, beat * 2, beat * 4);
    MG[idx += 1] = Note(NOTE_E6, beat * 2, beat * 4);
    MG[idx += 1] = Note(NOTE_F6, beat * 2, beat * 4);
    MG[idx += 1] = Note(NOTE_G6, beat * 2, beat * 4);
    MG[idx += 1] = Note(NOTE_E6, beat * 2, beat * 4);
    MG[idx += 1] = Note(NOTE_A6, beat * 5, beat * 8);

    MG[idx += 1] = Note(NOTE_A6, beat, beat);
    MG[idx += 1] = Note(NOTE_Gs6, beat, beat);
    MG[idx += 1] = Note(NOTE_G6, beat, beat);
    MG[idx += 1] = Note(NOTE_Fs6, beat, beat);
    MG[idx += 1] = Note(NOTE_F6, beat, beat);
    MG[idx += 1] = Note(NOTE_E6, beat, beat);
    MG[idx += 1] = Note(NOTE_Ds6, beat, beat);
    MG[idx += 1] = Note(NOTE_D6, beat, beat);
    MG[idx += 1] = Note(NOTE_Cs6, beat * 5, beat * 10);

    MG[idx += 1] = Note(NOTE_D6, beat * 5, beat * 10);

    MG[idx += 1] = Note(NOTE_D6, beat, beat);
    MG[idx += 1] = Note(NOTE_D6, beat, beat);
    MG[idx += 1] = Note(NOTE_D7, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_A6, beat, beat * 3);
    MG[idx += 1] = Note(NOTE_Gs6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_G6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_F6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_D6, beat, beat);
    MG[idx += 1] = Note(NOTE_F6, beat, beat);
    MG[idx += 1] = Note(NOTE_G6, beat, beat);

    MG[idx += 1] = Note(NOTE_D6, beat, beat);
    MG[idx += 1] = Note(NOTE_D6, beat, beat);
    MG[idx += 1] = Note(NOTE_D7, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_A6, beat, beat * 3);
    MG[idx += 1] = Note(NOTE_Gs6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_G6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_F6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_D6, beat, beat);
    MG[idx += 1] = Note(NOTE_F6, beat, beat);
    MG[idx += 1] = Note(NOTE_G6, beat, beat);

    MG[idx += 1] = Note(NOTE_As5, beat, beat);
    MG[idx += 1] = Note(NOTE_As5, beat, beat);
    MG[idx += 1] = Note(NOTE_D7, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_A6, beat, beat * 3);
    MG[idx += 1] = Note(NOTE_Gs6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_G6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_F6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_D6, beat, beat);
    MG[idx += 1] = Note(NOTE_F6, beat, beat);
    MG[idx += 1] = Note(NOTE_G6, beat, beat);

    MG[idx += 1] = Note(NOTE_C6, beat, beat);
    MG[idx += 1] = Note(NOTE_C6, beat, beat);
    MG[idx += 1] = Note(NOTE_D7, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_A6, beat, beat * 3);
    MG[idx += 1] = Note(NOTE_Gs6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_G6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_F6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_D6, beat, beat);
    MG[idx += 1] = Note(NOTE_F6, beat, beat);
    MG[idx += 1] = Note(NOTE_G6, beat, beat);
    
    MG[idx += 1] = Note(NOTE_D6, beat, beat);
    MG[idx += 1] = Note(NOTE_D6, beat, beat);
    MG[idx += 1] = Note(NOTE_D7, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_A6, beat, beat * 3);
    MG[idx += 1] = Note(NOTE_Gs6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_G6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_F6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_D6, beat, beat);
    MG[idx += 1] = Note(NOTE_F6, beat, beat);
    MG[idx += 1] = Note(NOTE_G6, beat, beat);

    MG[idx += 1] = Note(NOTE_D6, beat, beat);
    MG[idx += 1] = Note(NOTE_D6, beat, beat);
    MG[idx += 1] = Note(NOTE_D7, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_A6, beat, beat * 3);
    MG[idx += 1] = Note(NOTE_Gs6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_G6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_F6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_D6, beat, beat);
    MG[idx += 1] = Note(NOTE_F6, beat, beat);
    MG[idx += 1] = Note(NOTE_G6, beat, beat);

    MG[idx += 1] = Note(NOTE_As5, beat, beat);
    MG[idx += 1] = Note(NOTE_As5, beat, beat);
    MG[idx += 1] = Note(NOTE_D7, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_A6, beat, beat * 3);
    MG[idx += 1] = Note(NOTE_Gs6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_G6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_F6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_D6, beat, beat);
    MG[idx += 1] = Note(NOTE_F6, beat, beat);
    MG[idx += 1] = Note(NOTE_G6, beat, beat);

    MG[idx += 1] = Note(NOTE_C6, beat, beat);
    MG[idx += 1] = Note(NOTE_C6, beat, beat);
    MG[idx += 1] = Note(NOTE_D7, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_A6, beat, beat * 3);
    MG[idx += 1] = Note(NOTE_Gs6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_G6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_F6, beat, beat * 2);
    MG[idx += 1] = Note(NOTE_D6, beat, beat);
    MG[idx += 1] = Note(NOTE_F6, beat, beat);
    MG[idx += 1] = Note(NOTE_G6, beat, beat * 16);
}


void Play(Note song[], int song_len) {
    for(int i = 0; i < song_len; i++) {
        tone(buzzerPin, song[i].frequency, song[i].duration);
        delay(song[i].delay);
    }
}


void setup() {
    pinMode(buzzerPin, OUTPUT);
    //constructSong_OtJ();
    constructSong_MG();
}

void loop() {
    Play(MG, MG_len);
    //Play(OtJ, OtJ_len);
}