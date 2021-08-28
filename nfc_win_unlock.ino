/*
   Programa que desbloquea el PC por medio de un tag NFC.
   
   Código fuente desarrollado por iberotecno. Año 2021.
   Versión 1.0
   
   http://iberotecno.com
   http://duino.pro

   MIT License

Copyright (c) 2021 iberotecno.com

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:



Contact with info@iberotecno.com to ask for permissions.
Have a written contract from iberotecno.

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

 * */

#include <Wire.h>
#include <PN532_I2C.h> https://github.com/elechouse/PN532
#include <PN532.h>
#include <NfcAdapter.h>
#include <Keyboard.h>

PN532_I2C pn532i2c(Wire);
PN532 nfc(pn532i2c);

void setup() {
  Serial.begin(115200);
  Serial.println("Iniciando...");
  nfc.begin();
  uint32_t versiondata = nfc.getFirmwareVersion();
  if (! versiondata) {
    Serial.print("Lector NFC no detectado");
    while (1); // halt
  }

  // Datos leídos, mostrarlos.
  Serial.print("Encontrado chip PN5"); Serial.println((versiondata >> 24) & 0xFF, HEX);
  Serial.print("Firmware ver. "); Serial.print((versiondata >> 16) & 0xFF, DEC);
  Serial.print('.'); Serial.println((versiondata >> 8) & 0xFF, DEC);

  nfc.setPassiveActivationRetries(0xFF);
  nfc.SAMConfig();

  Serial.println("Esperando leer codigo");
  Keyboard.begin();
}



void loop() {
  // Look for new cards
  boolean success;
  uint8_t uid[] = { 0, 0, 0, 0, 0, 0, 0 };  // Buffer para almacenar el UID leído
  uint8_t uidLength;                        // Longitud del UID 

  success = nfc.readPassiveTargetID(PN532_MIFARE_ISO14443A, &uid[0], &uidLength);

  if (success) {
    Serial.println("Tarjeta detectada");
    Serial.print("UID Length: "); Serial.print(uidLength, DEC); Serial.println(" bytes");
    Serial.print("UID Value: ");
    for (uint8_t i = 0; i < uidLength; i++)
    {
      Serial.print(" 0x"); Serial.print(uid[i], HEX);
    }
    Serial.println("");
    // Pausa de medio segundo
    delay(500);
  }
  else
  {
    // Si no se detecta una tarjeta o llavero saldrá este texto de forma contínua en el monitor serie. Es normal.
    Serial.println("Esperando a que se acerque una tarjeta o llavero");
  }


  // ESTABLECER AQUÍ TU UID (lo verás en el monitor serie al acercar un llavero o tarjeta)
  if (uid[0] == 0x29 &&
      uid[1] == 0xA9 &&
      uid[2] == 0xA0 &&
      uid[3] == 0x2) {
    Serial.println("UID Correcto");
   
   // ESTABLECER AQUÍ UN SEGUNDO UID, OPCIONAL (lo verás en el monitor serie al acercar un llavero o tarjeta)
  }
  else if (uid[0] == 0xE9 &&
           uid[1] == 0x41 &&
           uid[2] == 0xC5 &&
           uid[3] == 0x56) {
    Serial.println("UID Correcto");
  }
  else {
    Serial.println("UID Incorrecto"); // Si no se detecta una tarjeta o llavero o es incorrecto su UID saldrá este texto de forma contínua en el monitor serie. Es normal.
    //delay(500);
    return;
  }


 // ESTABLECER AQUÍ LA CONTRASEÑA DEL PC
  Serial.println("Escribiendo contraseña del PC...");
  Keyboard.print(" "); // Simulamos presionar la tecla espacio
  delay(1000);
  Keyboard.print("1234");
  delay(1000);
  Keyboard.write(10);

  delay(500);
}
