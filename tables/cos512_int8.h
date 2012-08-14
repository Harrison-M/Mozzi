#ifndef COS512_H_
#define COS512_H_

#include "Arduino.h"
#include <avr/pgmspace.h>

#define COS512_NUM_CELLS 512
#define COS512_SAMPLERATE 512

const char __attribute__((progmem)) COS512_DATA []  =
        {
                -128, -128, -128, -128, -128, -128, -128,
                -128, -128, -128, -128, -127, -127, -127, -127, -126, -126, -126, -125, -125,
                -125, -124, -124, -123, -123, -123, -122, -122, -121, -120, -120, -119, -119,
                -118, -118, -117, -116, -116, -115, -114, -113, -113, -112, -111, -110, -109,
                -109, -108, -107, -106, -105, -104, -103, -102, -101, -100, -99, -98, -97, -96,
                -95, -94, -93, -92, -91, -90, -89, -88, -86, -85, -84, -83, -82, -80, -79, -78,
                -77, -75, -74, -73, -72, -70, -69, -68, -66, -65, -64, -62, -61, -59, -58, -57,
                -55, -54, -52, -51, -49, -48, -47, -45, -44, -42, -41, -39, -38, -36, -35, -33,
                -32, -30, -29, -27, -25, -24, -22, -21, -19, -18, -16, -15, -13, -11, -10, -8,
                -7, -5, -4, -2, 0, 1, 3, 4, 6, 7, 9, 10, 12, 14, 15, 17, 18, 20, 21, 23, 24, 26,
                28, 29, 31, 32, 34, 35, 37, 38, 40, 41, 43, 44, 46, 47, 48, 50, 51, 53, 54, 56,
                57, 58, 60, 61, 63, 64, 65, 67, 68, 69, 71, 72, 73, 74, 76, 77, 78, 79, 81, 82,
                83, 84, 85, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102,
                103, 104, 105, 106, 107, 108, 108, 109, 110, 111, 112, 112, 113, 114, 115, 115,
                116, 117, 117, 118, 118, 119, 119, 120, 121, 121, 122, 122, 122, 123, 123, 124,
                124, 124, 125, 125, 125, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127,
                127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 126,
                126, 126, 125, 125, 125, 124, 124, 124, 123, 123, 122, 122, 122, 121, 121, 120,
                119, 119, 118, 118, 117, 117, 116, 115, 115, 114, 113, 112, 112, 111, 110, 109,
                108, 108, 107, 106, 105, 104, 103, 102, 101, 100, 99, 98, 97, 96, 95, 94, 93,
                92, 91, 90, 89, 88, 87, 85, 84, 83, 82, 81, 79, 78, 77, 76, 75, 73, 72, 71, 69,
                68, 67, 65, 64, 63, 61, 60, 58, 57, 56, 54, 53, 51, 50, 48, 47, 46, 44, 43, 41,
                40, 38, 37, 35, 34, 32, 31, 29, 28, 26, 24, 23, 21, 20, 18, 17, 15, 14, 12, 10,
                9, 7, 6, 4, 3, 1, -1, -2, -4, -5, -7, -8, -10, -11, -13, -15, -16, -18, -19,
                -21, -22, -24, -25, -27, -29, -30, -32, -33, -35, -36, -38, -39, -41, -42, -44,
                -45, -47, -48, -49, -51, -52, -54, -55, -57, -58, -59, -61, -62, -64, -65, -66,
                -68, -69, -70, -72, -73, -74, -75, -77, -78, -79, -80, -82, -83, -84, -85, -86,
                -88, -89, -90, -91, -92, -93, -94, -95, -96, -97, -98, -99, -100, -101, -102,
                -103, -104, -105, -106, -107, -108, -109, -109, -110, -111, -112, -113, -113,
                -114, -115, -116, -116, -117, -118, -118, -119, -119, -120, -120, -121, -122,
                -122, -123, -123, -123, -124, -124, -125, -125, -125, -126, -126, -126, -127,
                -127, -127, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
        };

#endif /* COS512_H_ */
