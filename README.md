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

- TIME REMAINING  
Mostra a schermo il tempo rimasto di stampa, sia in base a output precisi di Cura, che da altri Slicer con calcoli approssimati del tempo.

- CUSTOM COMANDS
Una sezione nuova che racchiude dei comandi personalizzati da eseguire con un semplice click.
è una sezione solo dimostrativa per ora, non c'è niente di utile dentro, ma lo potrebbe facilmente diventare.

- EEPROM MEMORY
Memorizzazione di tutti i config sulla scheda e non più sulla SD, questo implica che con l'aggiornamento del firmware in futuro le configurazioni restano invariate.

- Custom Logo And Bootscreen
Ho modificato alcuni degli elementi della UI, aggiungendo un Custom Bootloader e modificando una immagine della schermata Info. In corso d'opera sto lavorando a un Bootloader animato ma con risultati fallimentari e a quanto pare un consumo ecessivo della memoria.
So cazzeggiare col codice ma non sono un artista, 
Nella cartella U30UI sono presenti tutte le immagini realizzate, faccio richiesta ai più talentuosi tra di voi per creare una nuova UI per il firmware.

POSSIBILI ERRORI:
   - Err: EEPROM version
   soluzione: Configuration->Initialize EEPROM / Inizializzazione Memoria EEPROM
   
   

