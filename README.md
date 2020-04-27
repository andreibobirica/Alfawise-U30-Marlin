Link Download :
https://bit.ly/2ScqIr8

Condivido il firmware Marlin 2.0.5.3 per Alfawise U30 senza Bl-Touch.
Ho compilato per tutte le combinazioni della U30, 0X04 e 0XD3 con rispettivamente per ciascuna due versioni di schermo: ver 1.2 oppure ver 1.1
Dalla mia personale esperienza consiglio di provare prima I 0XD3 e prima i V1.2.
In verità la U30 avrebbe anche una versione 1.9 ma è perfettamente compatibile con la 1.2;

Questa versione di Marlin per Alfawise U30 presenta:
- MESH BED LEVELING 4x4 con menù per la modifica della mesh.
Impostare nello StartGCODE M420 S1 dopo G28
https://youtu.be/vcxM7-VK44k
- Interfaccia State Modificata con durante la stampa : Time Remaining , Time Elapsed e al posto dei inutili X e Y la lunghezza di E in mm totalmente estrusa durante la stampa.
- Lingua ITALIANA
- Sezione Extra con comandi personalizzati e proponibili nei commenti.
- EEPROM Salvataggio delle configurazioni nella memorai eeprom.
- Custom Logo And Bootscreen Custom e Marlin Animato; Ho modificato alcuni degli elementi della UI, Colori, Status Image.
- Risolto il problema del Zoffset e Max Exstrusion: Sfortunatamente nei firmware trovati in rete ci sono parametri impostati a caso che rendono difficoltosa se non impossibile il coretto utilizzo della stampante, come per esempio il livellamento del bed o il limite della Max Exstrusion, in questo firmware corretti.
- Funzione Autostart, Stampa Automatica, questa funzione esiste già nativamente su marlin ma ha bisogno di un operatore umano per farla azionare, io l’ho modificata e ho reso la stampante più SMART.
Ipotizziamo di avere una presa smart, impostargli un timer di accensione e automaticamente la stampante una volta accesa eseguirà in successione tutti i file autoX.g che trova, con X che parte da 0.
Funzione molto utile e che se utilizzata bene aiuta ad ottimizzare i tempi.
- Aggiunta di funzioni Interessanti come S_CURVE_ACCELERATION e il Linear Advance.
Per il linear advance consiglio vivamente di fare il test e la configurazione seguendo questo video:
La funzione di LIN_ADVANCE serve per migliorare la qualità di stampa ad alte velocità, e di sicuro qualcuno più esperto di me potrà ben doccumentarla nei commenti.
https://youtu.be/n3yK0lJ8TWM
https://marlinfw.org/tools/lin_advance/k-factor.html

-	Ho impostato nel apposito menù la possibilità di regolare il PID direttamente dalla macchina.
-	Ho impostato la funzione di Parking durante la pausa, ora le pause saranno gestite meglio.


Alcuni dei problemi principali sono stati
Touch storto soluzione: individuare la reale posizione dei pulsanti -> Configurazione-> touchscreen -> calibrazione
Errore nel flash del firmware, barre di caricamento troppo veloci: Provate un’altra versione, provate a tornare al firmware originale.

Schermo bianco : provate un’altra versione di schermo.


