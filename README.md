# Template SFML

## Descrizione

Questo progetto è un template Visual Studio per applicazioni SFML in C++ su Windows. Il codice di esempio apre una finestra da 800x600 pixel, disegna un rettangolo e gestisce la chiusura della finestra.

## Struttura del progetto

- `main.cpp` - punto di ingresso dell'applicazione
- `template.sln` - soluzione Visual Studio
- `template.vcxproj` - progetto Visual C++
- `SFML/` - directory locale con header, librerie e DLL SFML
- `bin/` - output di build e file generati

## Requisiti

- Visual Studio 2022 (o compatibile con toolset `v143`)
- Windows 10/11
- SFML 3.1 (già fornito nella cartella `SFML/` del progetto)

## Build e esecuzione

1. Apri `template.sln` con Visual Studio.
2. Seleziona la configurazione desiderata: `Debug|x64` o `Release|x64`.
3. Compila la soluzione.
4. Avvia l'eseguibile da Visual Studio oppure trova il file in:
   - `bin\x64\Debug\template.exe`
   - `bin\x64\Release\template.exe`

> Le DLL SFML necessarie vengono copiate automaticamente nella cartella di output dopo la build.

## Uso del progetto

Apri `main.cpp` per modificare il comportamento iniziale della finestra, il colore di sfondo o gli oggetti grafici. Questo template è pensato come base per progetti di grafica 2D con SFML.

## Note

- Se vuoi usare una versione diversa di SFML o una installazione esterna, aggiorna i percorsi di include e libreria in `template.vcxproj`.
- Il progetto è configurato per `x64`; rimuovi o modifica la configurazione `Win32` se non ti serve.

