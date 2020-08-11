Link Download :
https://bit.ly/2ScqIr8

Condivido la versione Marlin 2.0.6 personalmente modificata da me.
Presenta la aggiunta nel poter abilitare il Dual Extrusion e tante alte funzionalità.

Questa versione di Marlin per Alfawise U30 presenta:
- MESH BED LEVELING 5x5 con menù per la modifica della mesh.
Impostare nello StartGCODE M420 S1 dopo G28
https://youtu.be/vcxM7-VK44k
- Grafica e UI completamente rivista, con la possibilità di avere il menù Marlin in touch screen.
- Lingua ITALIANA
- Sezione Extra con comandi personalizzati.
- EEPROM Salvataggio delle configurazioni nella memorai eeprom.
- Custom Logo And Bootscreen Custom e Marlin Animato; Ho modificato alcuni degli elementi della UI, Colori, Status Image.
- Funzione Autostart, Stampa Automatica, questa funzione esiste già nativamente su marlin ma ha bisogno di un operatore umano per farla azionare, io l’ho modificata e ho reso la stampante più SMART.
Ipotizziamo di avere una presa smart, impostargli un timer di accensione e automaticamente la stampante una volta accesa eseguirà in successione tutti i file autoX.g che trova, con X che parte da 0.
Funzione molto utile e che se utilizzata bene aiuta ad ottimizzare i tempi.
- Aggiunta di funzioni Interessanti come S_CURVE_ACCELERATION e il Linear Advance, Backlash compensation.
Per il linear advance consiglio vivamente di fare il test e la configurazione seguendo questo video:
La funzione di LIN_ADVANCE serve per migliorare la qualità di stampa ad alte velocità, e di sicuro qualcuno più esperto di me potrà ben doccumentarla nei commenti.
https://youtu.be/n3yK0lJ8TWM
https://marlinfw.org/tools/lin_advance/k-factor.html



Alcuni dei problemi principali sono stati
Touch storto soluzione: Flashare un'altra versione del firmware.
Errore nel flash del firmware, barre di caricamento troppo veloci: Provate un’altra versione, provate a tornare al firmware originale.

Schermo bianco : provate un’altra versione di schermo, la versione 04 non l'ho compilata, nel caso contattarmi per compilarla.


