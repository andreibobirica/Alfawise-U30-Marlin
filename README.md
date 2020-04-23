Alfawise-U30-Marlin

Only for NO-Bltouch
Only for U30 Normal
Only for LCD v1.2

Marlin 2.0.5.3 per Alfawise U30 normale senza Bl-touch.

Le caratteristiche in più rispetto al firmware originale sono:
- MESH BED LEVELING
funzione che fa il bed leveling con una matrice di 9 punti con per ciascuna un Z-offset personalizzato.
Importante impostare nello StartGCODE M420 S1 dopo G28
info: https://www.youtube.com/watch?v=vcxM7-VK44k
Ho Modifica Mesh da 3x3 a 4x4

- TIME REMAINING  
Mostra a schermo il tempo rimasto di stampa, sia in base a output precisi di Cura, che da altri Slicer con calcoli approssimati del tempo.

- CUSTOM COMANDS
Una sezione nuova che racchiude dei comandi personalizzati da eseguire con un semplice click.
è una sezione solo dimostrativa per ora, non c'è niente di utile dentro, ma lo potrebbe facilmente diventare.

- EEPROM MEMORY
Memorizzazione di tutti i config sulla scheda e non più sulla SD, questo implica che con l'aggiornamento del firmware in futuro le configurazioni restano invariate.

- Custom Logo And Bootscreen
Ho modificato alcuni degli elementi della UI, Colori, Status Image e ho aggiunto un Bootloader Animato.

- Risolto il problema del Zoffset applicato in fase di Bed leveling Corner con:
MESH_EDIT_Z_STEP  0.010
LEVEL_CORNERS_HEIGHT      0.0
LEVEL_CORNERS_Z_HOP       8.0

- Ho impostato la EEPROM autoerasable in caso la memeoria sia corrotta o daneggiata in maniera tale da non avere problemi.
tra un aggionrnamento firmware e con versioni molto diverse tra di loro piò capitare che la EEPROM si corrompa.
#define EEPROM_AUTO_INIT
Automatically reset the EEPROM when the data structure changes or the data gets corrupted.

- Ho impostato La lingua ITALIANA
#define LCD_LANGUAGE it

- EXTRA
Rimuovi Oggetto
Home e Hot End Alto
altri..

POSSIBILI ERRORI:
   - Err: EEPROM version
   soluzione: Configuration->Initialize EEPROM / Inizializzazione Memoria EEPROM
   - Touch storto
   soluzione: indivisuare la reale posizione dei pulsanti -> Configuration -> touchscreen -> calibrate

   
   

