#include "C:\Users\wim\Source\spikes\mqtt\mqtt.h"


/* The implemenation templates */
BOOL BUFFERinit(BUFFERtyp* inst, BOOL bRetain)
{
	int j, k, l; /* Loop counters */
	for (j = 0; j < 1501; j++)
	{
			(*((inst->DATA) + j)) = 0;
	}
	inst->IPOS = 0UL;
	return bRetain;
}

BOOL _BUFFER_CONCAT(BUFFERtyp *PTparam, BUFFERtyp *PTCONTACTparam)
{
}

BOOL _BUFFER_PUSH(BUFFERtyp *PTparam, BYTE INparam)
{
}

BOOL _BUFFER_PUSH_STRING(BUFFERtyp *PTparam, char* INparam, BOOL INCLUDE_LENGTHparam)
{
}

BOOL _BUFFER_SET(BUFFERtyp *PTparam, BYTE INparam, WORD POSparam)
{
}

BOOL FIXEDHEADERinit(FIXEDHEADERtyp* inst, BOOL bRetain)
{
	int j, k, l; /* Loop counters */
	inst->BMESSAGETYPE = 0;
	inst->XDUP_FLAG = FALSE;
	inst->XQOS = 0;
	inst->XRETAIN = FALSE;
	return bRetain;
}

BOOL CREATE_MESSAGE(BUFFERtyp *PTparam, FIXEDHEADERtyp FIXEDHEADERparam, BUFFERtyp VARIABLEHEADERparam, BUFFERtyp PAYLOADparam)
{
}

BOOL ENCODE_REMAINING_LENGTH(BUFFERtyp *PTparam, DWORD LENGTHparam)
{
}

BOOL CONNECTFLAGSinit(CONNECTFLAGStyp* inst, BOOL bRetain)
{
	int j, k, l; /* Loop counters */
	inst->XUSERNAME = FALSE;
	inst->XPASSWORD = FALSE;
	inst->XWILLRETAIN = FALSE;
	inst->XWILLQOS1 = FALSE;
	inst->XWILLQOS2 = FALSE;
	inst->XWILLFLAG = FALSE;
	inst->XCLEANSESSION = FALSE;
	return bRetain;
}

void MQTT_CLIENT(MQTT_CLIENTtyp* inst)
{
}

BOOL MQTT_CLIENTinit(MQTT_CLIENTtyp* inst, BOOL bRetain)
{
	int j, k, l; /* Loop counters */
	/* Initializing Function Block components */
	inst->VERSION = 3;
	inst->RESERVED = 0;
	inst->CONNECT = 1;
	inst->CONNACK = 2;
	inst->PUBLISH = 3;
	inst->PUBACK = 4;
	inst->PUBREC = 5;
	inst->PUBREL = 6;
	inst->PUBCOMP = 7;
	inst->SUBSCRIBE = 8;
	inst->SUBACK = 9;
	inst->UNSUBSCRIBE = 10;
	inst->UNSUBACK = 11;
	inst->PINGREQ = 12;
	inst->PINGRESP = 13;
	inst->DISCONNECT = 14;
	inst->RESERVED2 = 15;
	inst->CONNECTED = 30;
	inst->NOT_CONNECTED = 40;
	inst->TIMEOUT = 50;
	inst->WAIT_RESPONSE = 60;
	inst->CONNECTION_TIMEOUT = 10000UL;
	BUFFERinitmac(&inst->SENDBUFFER, bRetain);
	BUFFERinitmac(&inst->RECEIVEBUFFER, bRetain);
	FIXEDHEADERinitmac(&inst->FIXEDHEADER, bRetain);
	BUFFERinitmac(&inst->VARIABLEHEADER, bRetain);
	BUFFERinitmac(&inst->PAYLOAD, bRetain);
	CONNECTFLAGSinitmac(&inst->CONNECTFLAGS, bRetain);
	TCP_CLIENTinitmac(&inst->TCPCLIENT, bRetain);
	inst->XTCPCONNECTED = FALSE;
	inst->XSTARTSEND = FALSE;
	inst->DIRECEIVECOUNT = 0L;
	TONinitmac(&inst->CONNECTIONTIMER, bRetain);
	inst->XTIMEOUT = FALSE;
	inst->INCOMINGMESSAGETYPE = 0;
	inst->ESTATE = 0;
	inst->XSTARTTIMER = FALSE;
	(*pstrcpy)(inst->STOPIC, "");
	(*pstrcpy)(inst->SPAYLOAD, "");
	inst->XCONNECTED = FALSE;
	if (bRetain)
		return bRetain;

	/* Initalize the retain variables only if bRetain is FALSE */
	return bRetain;
}

void PLC_PRG(void)
{
}

