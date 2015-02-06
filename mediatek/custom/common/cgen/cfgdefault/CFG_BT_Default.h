

#ifndef _CFG_BT_DEFAULT_H
#define _CFG_BT_DEFAULT_H

///#include "../cfgfileinc/CFG_BT_File.h"

// the default value of bt nvram file
#ifdef MTK_COMBO_SUPPORT
static ap_nvram_btradio_mt6610_struct stBtDefault =
{
#if defined(MTK_MT6620)
    {0x00, 0x00, 0x46, 0x66, 0x20, 0x01},
#else
    {0x00, 0x00, 0x46, 0x66, 0x28, 0x01},
#endif
    {0x60, 0x00},
    {0x23, 0x10, 0x00, 0x00},
#if defined(MTK_MT6620)
    {0x06, 0x80, 0x00, 0x06, 0x03, 0x06},
#else
    {0x06, 0x80, 0x00, 0x06, 0x05, 0x06},    
#endif
    {0x03, 0x40, 0x1F, 0x40, 0x1F, 0x00, 0x04},
    {0x80, 0x00},
    {0xFF, 0xFF, 0xFF}
};
#else
// MT661x is phased out, current for MT662x
static ap_nvram_btradio_mt6610_struct stBtDefault =
{
#if defined(MTK_MT6622)
    {0x00, 0x00, 0x46, 0x66, 0x22, 0x01}, /*addr*/
#else
    {0x00, 0x00, 0x46, 0x66, 0x26, 0x01}, /*addr*/
#endif
    {0x40}, /*CapId*/
    {0x01}, /*LinkKeyType*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /*UintKey*/
    {0x00, 0x02, 0x10}, /*Encryption*/
    {0x00}, /*PinCodeType*/
    {0x60, 0x00}, /*Voice*/
    {0x23, 0x00, 0x00, 0x00}, /*Codec*/
    {0x06, 0x80, 0x00, 0x06, 0x03, 0x06}, /*Radio */
    {0x03, 0x40, 0x1F, 0x40, 0x1F, 0x00, 0x04}, /*Sleep*/
    {0x80, 0x00}, /*BtFTR*/
    {0xFF, 0xFF, 0xFF}, /*TxPWOffset*/
    {0x00}, /*ECLK_SEL[1]*/
    {0x00}, /*Reserved1[1]*/
    {0x00, 0x00}, /*Reserved2[2]*/
    {0x00, 0x00, 0x00, 0x00}, /*Reserved3[4]*/
    {0x00, 0x00, 0x00, 0x00}, /*Reserved4[4]*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /*Reserved5[16]*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /*Reserved6[16]*/
};
#endif

#endif
