/*
  myconfig.h - local ESP3D configuration overrides

  Included at the top of configuration.h, before its own defines, so it can
  only enable options that configuration.h leaves commented out. Changing a
  value or disabling an option still has to be done in configuration.h.
*/
#ifndef _MYCONFIG_H
#define _MYCONFIG_H

/************************************
 *
 * Board description
 *
 ************************************/
// MCU=ESP8266
// ESP flash size=1MB
// Form factor=ESP01 (8 pins)
// Flash mode=dio
// Reset method for upload=ck

/* Target firmware (default UNKNOWN_FW can be changed later in settings)
 * UNKNOWN_FW
 * GRBL
 * MARLIN
 * SMOOTHIEWARE
 * REPETIER
 */
#define DEFAULT_FW MARLIN

/* Use Websocket server
 * Enable websocket communications
 */
#define WS_DATA_FEATURE

#endif  //_MYCONFIG_H
