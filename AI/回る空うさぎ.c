int speakerPin1 = 9; // Set speaker1 pin
int speakerPin2 = 10; // Set speaker2 pin

void setup() {
pinMode(speakerPin1, OUTPUT); // Set speaker1 pin as output
pinMode(speakerPin2, OUTPUT); // Set speaker2 pin as output
}

void loop() {
// The code below plays "回る空うさぎ" song

// Create an array to store the song's note and time information
int song[] = {NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4,
NOTE_AS3, NOTE_AS4, 0,
NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4,
NOTE_AS3, NOTE_AS4, 0,
NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4,
NOTE_DS3, NOTE_DS4, 0,
NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4,
NOTE_DS3, NOTE_DS4, 0,
NOTE_DS4, NOTE_CS4, NOTE_D4,
NOTE_CS4, NOTE_DS4,
NOTE_DS4, NOTE_GS3,
NOTE_G3, NOTE_CS4,
NOTE_C4, NOTE_FS4, NOTE_F4, NOTE_E3, NOTE_AS4, NOTE_A4,
NOTE_GS4, NOTE_DS4, NOTE_B3};
// Create an array to store the song's note duration information
int duration[] = {12, 12, 12, 12,
12, 12, 6,
12, 12, 12, 12,
12, 12, 6,
12, 12, 12, 12,
12, 12, 6,
12, 12, 12, 12,
12, 12, 6,
9, 9, 9,
12, 12, 12,
12, 12, 6,
6, 18, 18, 18, 18, 18,
10, 10, 10};

// Store the total number of notes in the song
int numOfNotes = sizeof(song) / sizeof(song[0]);

// Play the song
for (int i = 0; i < numOfNotes; i++) {
// Output signal to speaker1 and speaker2 for the duration of the note
tone(speakerPin1, song[i], duration[i] * 250);
tone(speakerPin2, song[i], duration[i] * 250);
delay(duration[i] * 250); // Wait for the duration of the note
}

// Repeat the song
delay(1000);
}
