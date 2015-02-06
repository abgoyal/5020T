

Idx:{//ISP_NVRAM_REG_INDEX_STRUCT
    Shading     :0,
    OB          :0,
    DM          :0,
    DP          :0, 
    NR1         :0,
    NR2         :0,
    EE          :0,
    Saturation  :0,
    Contrast    :4,
    Hue         :1,
    CCM         :0,
    Gamma       :0
},
Shading:{
    {set:{//00 Preview
        0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x10000000,0x9050903C,0x00583B40,0x0052003F,0x20202020,
    }},
    {set:{//01 Capture
        0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x10000000,0xF064F04B,0x005C8480,0x0066004E,0x20202020,
    }},
    {set:{//02
        0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    }}
},
OB:{
    {set:{//00
        0x8D8D8D8D
    }}
}, 
DM:{
    {set:{//00 Preview ISO100/ISO200/ISO400
        0x00000100,	0x0A800810,	0x0020083F
    }}, 
    {set:{//01 Preview ISO800
        0x00000100,	0x0A800810,	0x0020083F
    }}, 
    {set:{//02 Preview ISO1600
        0x00000100,	0x0A800810,	0x0020083F
    }}, 
    {set:{//03 Capture ISO100/ISO200
        0x00000100,	0x0A800810,	0x0020083F
    }}, 
    {set:{//04 Capture ISO400
        0x00000100,	0x0A800810,	0x0020083F
    }}, 
    {set:{//05 Capture ISO800
        0x00000100,	0x0A800810,	0x0020083F
    }}, 
    {set:{//06 Capture ISO1600
        0x00000100,	0x0A800810,	0x0020083F
    }}
}, 
DP:{//Auto Defect
    {set:{//00
        0x000006E7, 0x50285050,	0x006003A0,	0x00300050,	0x000009B7
    }},
    {set:{//01
        0x000006E7, 0x50285050,	0x006003A0,	0x00300050,	0x000009B7
    }},
    {set:{//02
        0x000006E7, 0x50285050,	0x006003A0,	0x00300050,	0x000009B7
    }}, 
    {set:{//03 Disable (Do not modify me)
        0x00000000, 0x50285050, 0x006003A0, 0x00300050, 0x000008B7
    }}
},
NR1:{
    {set:{//00 Preview ISO100
        0x000002E7, 0x00001150, 0x092328C8, 0x0000089C, 0x01040506, 0x0708090A, 0x02040507, 
        0x0808090A, 0x02040507, 0x0808090A, 0x01040506, 0x08090A0B, 0x0206090D, 0x10101010
    }},
    {set:{//01 Preview ISO200
        0x00000227, 0x00000150, 0x092328C8, 0x0000089C, 0x01050708, 0x090A0C0D, 0x02050708, 
        0x090A0B0C, 0x02050708, 0x090A0B0C, 0x01050608, 0x090B0C0E, 0x0206090D, 0x10101010
    }},
    {set:{//02 Preview ISO400
        0x000002E7, 0x00001150, 0x092328C8, 0x0000089C, 0x0206090B, 0x0D0F1113, 0x0306090B, 
        0x0C0E0F11, 0x0306090B, 0x0C0E0F11, 0x0206080A, 0x0B0D0E10, 0x0206090D, 0x10101010
    }},
    {set:{//03 Preview ISO800
        0x000002E7, 0x00001150, 0x092A28C8, 0x0000089C, 0x03090C0E, 0x10121416, 0x04090B0E,
        0x0F101213, 0x04090B0E, 0x0F101213, 0x02090B0E, 0x11131518, 0x0206090D, 0x10101010
    }},
    {set:{//04 Preview ISO1600
        0x000002E7, 0x00001150, 0x092E28C8, 0x0000089C, 0x03090C0E, 0x10121416, 0x04090B0E,
        0x0F101213, 0x04090B0E, 0x0F101213, 0x02090B0E, 0x11131518, 0x0206090D, 0x10101010
    }},
    {set:{//05 Capture ISO100 (o)       
        0x000002E7, 0x00001150, 0x092328C8, 0x0000089C, 0x01040506, 0x0708090A, 0x02040507, 
        0x0808090A, 0x02040507, 0x0808090A, 0x01040506, 0x08090A0B, 0x0206090D, 0x10101010
    }},
    {set:{//06 Capture ISO200 (o)
        0x00000227, 0x00000150, 0x092328C8, 0x0000089C, 0x01050708, 0x090A0C0D, 0x02050708, 
        0x090A0B0C, 0x02050708, 0x090A0B0C, 0x01050608, 0x090B0C0E, 0x0206090D, 0x10101010
    }}, 
    {set:{//07 Capture ISO400 (o)        
        0x000002E7, 0x00001150, 0x092328C8, 0x0000089C, 0x0206090B, 0x0D0F1114, 0x0306090B,
        0x0C0E0F11, 0x0306090B, 0x0C0E0F11, 0x0206080A, 0x0C0D0F10, 0x0206090D, 0x10101010
    }},
    {set:{//08 Capture ISO800 (o)
        0x000002E7, 0x00001150, 0x092A28C8, 0x0000089C, 0x03090C0E, 0x10121416, 0x04090B0E,
        0x0F101213, 0x04090B0E, 0x0F101213, 0x02090B0E, 0x11131518, 0x0206090D, 0x10101010
    }},
    {set:{//09 Capture ISO1600 (o)
        0x000002E7, 0x00001150, 0x092E28C8, 0x0000089C, 0x03090C0E, 0x10121416, 0x04090B0E,
        0x0F101213, 0x04090B0E, 0x0F101213, 0x02090B0E, 0x11131518, 0x0206090D, 0x10101010
    }},
    {set:{//10 Disable (Do not modify me)
        0x000000C0, 0x000011A0, 0x094428A0, 0x000007AF, 0x03050709, 0x0B0D0F11, 0x03050709, 
        0x0B0D0F11, 0x03050709, 0x0B0D0F11, 0x03050709, 0x0B0D0F11, 0x0406090D, 0x10101010
    }}
},
NR2:{
    {set:{//00 Preview ISO100
        0x00200003,	0x00191414, 0x00D27768, 0x04080C12, 0x060B1119, 0x021072CA, 0x08080808, 0x10101010, 0x01AF5B48, 0x0000056B, 0x0305080C
    }},                                                                                                                                   
    {set:{//01 Preview ISO200                                                                                                             
        0x00200003,	0x00191414, 0x00D27768, 0x060C121A, 0x08101823, 0x021072CA, 0x08080808, 0x10101010, 0x01AF5B48, 0x0000056B, 0x04080C11
    }},                                                                                                                                   
    {set:{//02 Preview ISO400                                                                                                             
        0x00200003,	0x00191414, 0x00D27768, 0x0A131C29, 0x1324344C, 0x01307A8E, 0x08080808, 0x10101010, 0x01AF5B48, 0x0000056B, 0x070D131B
    }},                                                                                                                                   
    {set:{//03 Preview ISO800                                                                                                             
        0x00200003, 0x00191414, 0x00D27768, 0x0C16202F, 0x16293B56, 0x01707A8E, 0x08080808, 0x10101010, 0x01AF5B48, 0x0000056B, 0x080F151F
    }},                                                                                                                                   
    {set:{//04 Preview ISO1600                                                                                                            
        0x00200003, 0x00191414, 0x00D27768, 0x0C16202F, 0x16293B56, 0x01707A8E, 0x08080808, 0x10101010, 0x01AF5B48, 0x0000056B, 0x080F151F
    }},
    {set:{//05 Capture Mode0 ISO100
        0x00200003, 0x00191414, 0x00D27768, 0x04080C12, 0x060B1119, 0x021072CA, 0x08080808, 0x10101010, 0x01AF5B48, 0x0000056B, 0x0305080C
    }},                                                                                                                                   
    {set:{//06 Capture Mode0 ISO200
        0x00200003,	0x00191414, 0x00D27768, 0x060C121A, 0x08101823, 0x021072CA, 0x08080808, 0x10101010, 0x01AF5B48, 0x0000056B, 0x04080C11
    }},                                                                                                                                   
    {set:{//07 Capture Mode0 ISO400
        0x00200003,	0x00191414, 0x00D27768, 0x0A131C29, 0x1324344C, 0x01307A8E, 0x08080808, 0x10101010, 0x01AF5B48, 0x0000056B, 0x070D131B
    }},                                                                                                                                   
    {set:{//08 Capture Mode0 ISO800
        0x00200003,	0x00191414, 0x00D27768, 0x0C16202F, 0x16293B56, 0x01707A8E, 0x08080808, 0x10101010, 0x01AF5B48, 0x0000056B, 0x080F151F
    }},                                                                                                                                   
    {set:{//09 Capture Mode0 ISO1600                                                                                                      
        0x00200003, 0x00191414, 0x00D27768, 0x0C16202F, 0x16293B56, 0x01707A8E, 0x08080808, 0x10101010, 0x01AF5B48, 0x0000056B, 0x080F151F
    }}, 
    {set:{//10 Capture Mode1 ISO100 (o)
        0x00210003, 0x00191414, 0x00D27768, 0x04080C12, 0x060B1119, 0x021072CA, 0x08080808, 0x10101010, 0x01AF5B48, 0x0000056B, 0x0305080C
    }},
    {set:{//11 Capture Mode1 ISO200 (o)
        0x00210003, 0x00191414, 0x00D27768, 0x060C121A, 0x08101823, 0x021072CA, 0x08080808, 0x10101010, 0x01AF5B48, 0x0000056B, 0x04080C11
    }},
    {set:{//12 Capture Mode1 ISO400 (o)
        0x00210003, 0x00191414, 0x00D27768, 0x0A131C29, 0x1324344C, 0x01307A8E, 0x08080808, 0x10101010, 0x01AF5B48, 0x0000056B, 0x070D131B
    }},
    {set:{//13 Capture Mode1 ISO800 (o)
        0x00210003, 0x00191414, 0x00D27768, 0x0C16202F, 0x16293B56, 0x01707A8E, 0x08080808, 0x10101010, 0x01AF5B48, 0x0000056B, 0x080F151F
    }},
    {set:{//14 Capture Mode1 ISO1600
        0x00210003, 0x00191414, 0x00D27768, 0x0C16202F, 0x16293B56, 0x01707A8E, 0x08080808, 0x10101010, 0x01AF5B48, 0x0000056B, 0x080F151F
    }},
    {set:{//15 Disable (Do not modify me)
        0x00000000, 0x0001FF01, 0x00523264, 0x04090B0F, 0x050A0B10, 0x02107294, 0x08101820, 0x10080604, 0x01AF5B43, 0x0000056B, 0x0306070A
    }}
},
EE:{//EE
    {set:{//00 Preview ISO100                       // middle sharpness
        0x00000028, 0x0037372D, 0x00320128, 0x023C0A5A, 0x02E70482, 0x033101AA, 0xFFFFFD0D
    }},
    {set:{//01 Preview ISO200                       // middle sharpness
        0x00000028, 0x0037372D, 0x00320128, 0x023C0A5A, 0x02E70482, 0x033101AA, 0xFFFFFD0D
    }},
    {set:{//02 Preview ISO400                       // middle sharpness
        0x00000028, 0x0037372D, 0x00120049, 0x0145067B, 0x01A602A3, 0x01D001CB, 0xFFFFFD0D
    }},
    {set:{//03 Preview ISO800                       // middle sharpness
        0x00000028, 0x0037372D, 0x000F0063, 0x00ED0495, 0x013401BD, 0x015200E5, 0xFFFFFB0D
    }},
    {set:{//04 Preview ISO1600                      // middle sharpness
        0x00000028, 0x007F3721, 0x000E0068, 0x00DB049A, 0x011C01C2, 0x013800EA, 0xFFFFFB0D
    }},
    {set:{//05 Capture ISO100     (o)                  // middle sharpness
        0x00000028, 0x0037372D, 0x00320128, 0x023C0A5A, 0x02E70482, 0x033101AA, 0xFFFFFD0D
    }},
    {set:{//06 Capture ISO200   (o)                    // middle sharpness
        0x00000028, 0x007F3721, 0x001D003A, 0x01A6076C, 0x02240394, 0x025A01BC, 0xFFFFFD0D
    }},
    {set:{//07 Capture ISO400        (o)               // middle sharpness
        0x00000028, 0x0037372D, 0x00120049, 0x0145067B, 0x01A602A3, 0x01D001CB, 0xFFFFFD0D
    }},
    {set:{//08 Capture ISO800    (o)                   // middle sharpness
        0x00000028, 0x0037372D, 0x000F0063, 0x00ED0495, 0x013401BD, 0x015200E5, 0xFFFFFB0D
    }},
    {set:{//09 Capture ISO1600                      // middle sharpness
        0x00000028, 0x007F3721, 0x000E0068, 0x00DB049A, 0x011C01C2, 0x013800EA, 0xFFFFFB0D
    }},
    {set:{//10 no one uses this, this is Min EE     // low sharpness
        0x00000024, 0x0037372D, 0x00050023, 0x012C113C, 0x020001D0, 0x020000E7, 0xFFFF0005
    }},
    {set:{//11 no one uses this, this is Max EE     // high sharpness
        0x0000002c, 0x00373721, 0x000A0023, 0x03203937, 0x03FF01D0, 0x03FF00E7, 0xFFFF0005
    }}
}, 
Saturation:{
    {set:{//00 (middle saturation)
        0x00010709, 0x1020E0F0, 0x284C4E4C, 0x2A000000, 0xFF00FF00, 0x001A2D40, 0x000A0A0A, 0x00643C1E, 
    }},
    {set:{//01 (middle saturation)
        0x00010709, 0x1020E0F0, 0x284C4E4C, 0x2A000000, 0xFF00FF00, 0x001A2D40, 0x000A0A0A, 0x00643C1E, 
    }},
    {set:{//02 (middle saturation)
        0x00010709, 0x1020E0F0, 0x1E3C3C3C, 0x1E000000, 0xFF00FF00, 0x001A2D40, 0x000A0A0A, 0x00643C1E, 
    }},
    {set:{//03 (middle saturation)
        0x00010709, 0x1020E0F0, 0x1C383838, 0x1C000000, 0xFF00FF00, 0x001A2D40, 0x000A0A0A, 0x00643C1E, 
    }},
    {set:{//04 (middle saturation)
        0x00010709, 0x1020E0F0, 0x1A343434, 0x1A000000, 0xFF00FF00, 0x001A2D40, 0x000A0A0A, 0x00643C1E, 
    }},
    {set:{//05 no one uses this, this is Min Sat. (low saturation)
        0x00000709, 0x1020E0F0, 0x1E282828, 0x1E000000, 0xFF00FF00, 0x001A2D40, 0x000A0A0A, 0x00643C1E, 
    }},
    {set:{//06 no one uses this, this is Max Sat. (high saturation)
        0x00000709, 0x1020E0F0, 0x2E5A5C5A, 0x30000000, 0xFF00FF00, 0x001A2D40, 0x000A0A0A, 0x00643C1E, 
    }}
}, 
Contrast:{
    //..........................................................................
    //  low brightness
    {set:{//00  //  low contrast
        0x00000008, 0x00F00000, 0xFF00003B
    }},
    {set:{//01  //  middle contrast
        0x00000008, 0x00F00000, 0xFF000040
    }},
    {set:{//02  //  high contrast
        0x00000008, 0x00F00000, 0xFF000045
    }}, 
    //..........................................................................
    //  middle brightness
    {set:{//03  //  low contrast
        0x00000008, 0x00000000, 0xFF00003B
    }},
    {set:{//04  //  middle contrast
        0x00000008, 0x00000000, 0xFF000040
    }},
    {set:{//05  //  high contrast
        0x00000008, 0x00000000, 0xFF000045
    }}, 
    //..........................................................................
    //  high brightness
    {set:{//06  //  low contrast
        0x00000008, 0x000A0000, 0xFF00003B
    }},
    {set:{//07  //  middle contrast
        0x00000008, 0x000A0000, 0xFF000040
    }},
    {set:{//08  //  high contrast
        0x00000008, 0x000A0000, 0xFF000045
    }}, 
}, 
Hue:{
    {set:{//00  //  low hue
        0x00000002, 0x808062AE
    }},
    {set:{//01  //  middle hue
        0x00000002, 0x00007F01
    }},
    {set:{//02  //  high hue
        0x00000002, 0x80806252
    }}
}, 
CCM:{
    {set:{//00
        0x01AE04A7, 0x04070424, 0x0170044C, 0x001A04AA, 0x01900000, 
    }},
    {set:{//01
        0x01AE04A7, 0x04070424, 0x0170044C, 0x001A04AA, 0x01900000, 
    }},
    {set:{//02
        0x01AE04A7, 0x04070424, 0x0170044C, 0x001A04AA, 0x01900000, 
    }}
},
Gamma:{
    {set:{//00
        0x3F1A0D03, 0x897C6C59, 0xBFB2A096, 0xE3DBD4CA, 0xFBF7F2EE
    }}
}

