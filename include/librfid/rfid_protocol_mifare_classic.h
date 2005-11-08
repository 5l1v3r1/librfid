#ifndef _MIFARE_CLASSIC_H

#define MIFARE_CL_KEYA_DEFAULT	"\xa0\xa1\xa2\xa3\xa4\xa5"
#define MIFARE_CL_KEYB_DEFAULT	"\xb0\xb1\xb2\xb3\xb4\xb5"

#define MIFARE_CL_KEYA_DEFAULT_INFINEON	"\xff\xff\xff\xff\xff\xff"
#define MIFARE_CL_KEYB_DEFAULT_INFINEON MIFARE_CL_KEYA_DEFAULT_INFINEON

#define MIFARE_CL_PAGE_MAX	0xff

#define RFID_CMD_MIFARE_AUTH1A	0x60
#define RFID_CMD_MIFARE_AUTH1B	0x61

#ifdef __LIBRFID__

extern struct rfid_protocol rfid_protocol_mfcl;


#define MIFARE_CL_CMD_WRITE16	0xA0
#define MIFARE_CL_CMD_READ	0x30

#define MIFARE_CL_RESP_ACK	0x0a
#define MIFARE_CL_RESP_NAK	0x00


#endif /* __LIBRFID__ */

#endif /* _MIFARE_CLASSIC_H */
