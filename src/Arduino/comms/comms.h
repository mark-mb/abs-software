/* AX5042 library for Arduino */ 

#ifndef _COMMS_H
#define _COMMS_H

#include "Arduino.h"
#include <SPI.h> /* For communication via SPI. */
#include "hdlc.h"

/* REGISTERS DECLARATION */

#define REVISION     	0x00
#define SCRATCH      	0x01
#define PWRMODE      	0x02
#define XTALOSC      	0x03
#define FIFOCTRL     	0x04
#define FIFODATA     	0x05
#define IRQMASK      	0x06
#define IRQREQUEST   	0x07
#define IFMODE       	0x08
#define PINCFG1      	0x0C
#define PINCFG2      	0x0D
#define PINCFG3      	0x0E
#define IRQINVERSION	0x0F
#define MODULATION 	  0x10
#define ENCODING 	    0x11
#define FRAMING 	    0x12
#define CRCINIT3 	    0x14
#define CRCINIT2 	    0x15
#define CRCINIT1 	    0x16
#define CRCINIT0 	    0x17
#define FREQ3 		    0x20
#define FREQ2 		    0x21
#define FREQ1 		    0x22
#define FREQ0 		    0x23
#define FSKDEV2 	    0x25
#define FSKDEV1 	    0x26
#define FSKDEV0 	    0x27
#define IFFREQHI 	    0x28
#define IFFREQLO 	    0x29
#define PLLLOOP 	    0x2C
#define PLLRANGING 	  0x2D
#define TXPWR 		    0x30
#define TXRATEHI 	    0x31
#define TXRATEMID 	  0x32
#define TXRATELO 	    0x33
#define MODMISC 	    0x34
#define AGCTARGET 	  0x39
#define AGCATTACK 	  0x3A
#define AGCDECAY 	    0x3B
#define AGCCOUNTER 	  0x3C
#define CICSHIFT 	    0x3E
#define CICDECHI 	    0x3E
#define CICDECLO 	    0x3F
#define DATARATEHI 	  0x40
#define DATARATELO 	  0x41
#define TMGGAINHI 	  0x42
#define TMGGAINLO 	  0x43
#define PHASEGAIN 	  0x44
#define FREQGAIN 	    0x45
#define FREQGAIN2 	  0x46
#define AMPLGAIN    	0x47
#define TRKAMPLHI 	  0x48
#define TRKAMPLLO 	  0x49
#define TRKPHASEHI 	  0x4A
#define TRKPHASELO 	  0x4B
#define TRKFREQHI 	  0x4C
#define TRKFREQLO 	  0x4D
#define APEOVER 	    0x70
#define PLLVCOI 	    0x72
#define PLLRNG 		    0x74 
#define REF 		      0x7C
#define RXMISC 		    0x7D


/*Parameters declaration*/

#define BITRATE   100000
#define FCARRIER  433000000
#define FIF       1000000
#define FXTAL     16300000
#define H         0.5


#endif
