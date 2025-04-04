#include <sys/types.h>

// Set to your WiFi channel
// You can use the following commands to find your WiFi channel:
// Windows:     netsh wlan show networks mode=bssid
// Linux/MacOS: iwlist wlan0 channel
u_int8_t global_channel = 9;