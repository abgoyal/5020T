
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
    CCM         :2,
    Gamma       :0
},
Shading:{
    {set:{//00 Preview
        0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x10000000,0x9050903C,0x00483220,0x0052003F,0x20202020,
    }},
    {set:{//01 Capture
        0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x10000000,0xF064F04B,0x004C0020,0x0066004E,0x20202020,
    }},
    {set:{//02
        0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    }}
},
OB:{
    {set:{//00
        0x91909090
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
        0x000000C4, 0x000011A0, 0x092328C8, 0x000008AC, 0x03050709, 0x0B0D0F11, 0x03050709, 
        0x0B0D0F11, 0x03050709, 0x0B0D0F11, 0x03050709, 0x0B0D0F11, 0x0206090D, 0x10101010, 
    }},
    {set:{//01 Preview ISO200
        0x000000C4, 0x000011A0, 0x092328C8, 0x000008AC, 0x03050709, 0x0B0D0F11, 0x03050709, 
        0x0B0D0F11, 0x03050709, 0x0B0D0F11, 0x03050709, 0x0B0D0F11, 0x0206090D, 0x10101010, 
    }},
    {set:{//02 Preview ISO400
        0x000000C4, 0x000011A0, 0x092328C8, 0x000008AC, 0x080A0C0E, 0x10121416, 0x080A0C0E, 
        0x10121416, 0x080A0C0E, 0x10121416, 0x080A0C0E, 0x10121416, 0x0206090D, 0x10101010, 
    }},
    {set:{//03 Preview ISO800
        0x000000C4, 0x000011A0, 0x092328C8, 0x000008AC, 0x080A0C0E, 0x10121416, 0x080A0C0E, 
        0x10121416, 0x080A0C0E, 0x10121416, 0x080A0C0E, 0x10121416, 0x0206090D, 0x10101010, 
    }},
    {set:{//04 Preview ISO1600
        0x000000C4, 0x000011A0, 0x093028C8, 0x0000089C, 0x050D1115, 0x181C1F23, 0x070D1114, 
        0x16181A1C, 0x070D1114, 0x16181A1C, 0x060D1113, 0x16181B1D, 0x0206090D, 0x10101010, 
    }},
    {set:{//05 Capture ISO100
        0x000002E5, 0x000011A0, 0x092328C8, 0x0000089C, 0x02040608, 0x0A0C0D0F, 0x03030608, 
        0x090B0C0E, 0x03030608, 0x090B0C0E, 0x02040607, 0x090A0C0E, 0x0206090D, 0x10101010
    }},
    {set:{//06 Capture ISO200
0x000002E5, 0x000011A0, 0x092528C8, 0x0000089C, 0x02040608, 0x0A0C0D0F, 0x03030608, 
0x090B0C0E, 0x03030608, 0x090B0C0E, 0x02040607, 0x090A0C0E, 0x0206090D, 0x10101010

    }},
    {set:{//07 Capture ISO400
        0x000002E7, 0x000011A0, 0x092728C8, 0x0000089A, 0x02050507, 0x07090D0F, 0x05050707, 
        0x090D0F0F, 0x05050707, 0x09090D0F, 0x05050707, 0x09090D0F, 0x0206090D, 0x10101010, 
    }},
    {set:{//08 Capture ISO800
        0x000002E7, 0x000011A0, 0x093028C8, 0x0000089A, 0x03060909, 0x0B0B0D0F, 0x0306090B, 
        0x0D0D0F0F, 0x0306090B, 0x0B0D0D0F, 0x0206090B, 0x0B0D0D0F, 0x0206090D, 0x10101010, 
    }},
    {set:{//09 Capture IS1600
        0x000002E7, 0x000011A0, 0x093028C8, 0x0000089C, 0x0306090C, 0x0C0E0E10, 0x0306090C, 
        0x0C0E0E10, 0x0306090C, 0x0C0E0E10, 0x0206090C, 0x0C0E0E10, 0x0206090D, 0x10101010, 
    }},
    {set:{//10 Disable (Do not modify me)
        0x000000C0, 0x000011A0, 0x094428A0, 0x000007AF, 0x03050709, 0x0B0D0F11, 0x03050709, 
        0x0B0D0F11, 0x03050709, 0x0B0D0F11, 0x03050709, 0x0B0D0F11, 0x0406090D, 0x10101010, 
    }}
        },
NR2:{
    {set:{//00 Preview ISO100
        0x00200002, 0x00111414, 0x00D27764, 0x0205070B, 0x0306090E, 0x02105182, 0x08080808, 0x10101010, 0x01AF5B43, 0x0000056B, 0x01030507, 
    }},
    {set:{//01 Preview ISO200
        0x00200002, 0x00111414, 0x00D27764, 0x0205070B, 0x0306090E, 0x02105182, 0x08080808, 0x10101010, 0x01AF5B43, 0x0000056B, 0x01030507, 
    }},
    {set:{//02 Preview ISO400
        0x00200003, 0x00111414, 0x00D27768, 0x060B1118, 0x1B33496B, 0x02105182, 0x08080808, 0x10101010, 0x01AF5B48, 0x0000056B, 0x04070B10, 
    }},
    {set:{//03 Preview ISO800
        0x00200003, 0x00111414, 0x00D27788, 0x060B1118, 0x3D73A7F3, 0x02105182, 0x08080808, 0x10101010, 0x01AF5B88, 0x0000056B, 0x04070B10, 
    }},
    {set:{//04 Preview ISO1600
        0x00200003, 0x00119414, 0x00D27748, 0x14263750, 0xFFFFFFFF, 0x01907A8C, 0x08080808, 0x10101010, 0x01AF5B38, 0x0000056B, 0x0D192536, 
    }},
    {set:{//05 Capture Mode0 ISO100
        0x00200002, 0x00111414, 0x00D27764, 0x0205070B, 0x0306090E, 0x02105182, 0x08080808, 0x10101010, 0x01AF5B43, 0x0000056B, 0x01030507, 
    }},
    {set:{//06 Capture Mode0 ISO200
        0x00200003, 0x00111414, 0x00D27748, 0x05090E14, 0x050A0F16, 0x020E728E, 0x08080808, 0x10101010, 0x01AF5B38, 0x0000056B, 0x0306090D, 
    }},
    {set:{//07 Capture Mode0 ISO400
        0x00200003, 0x00111414, 0x00D27768, 0x060B1118, 0x1B33496B, 0x02105182, 0x08080808, 0x10101010, 0x01AF5B48, 0x0000056B, 0x04070B10, 
    }},
    {set:{//08 Capture Mode0 ISO800
        0x00200003, 0x00111414, 0x00D27788, 0x060B1118, 0x3D73A7F3, 0x02105182, 0x08080808, 0x10101010, 0x01AF5B88, 0x0000056B, 0x04070B10, 
    }},
    {set:{//09 Capture Mode0 ISO1600
        0x00200003, 0x00119414, 0x00D27748, 0x14263750, 0xFFFFFFFF, 0x01907A8C, 0x08080808, 0x10101010, 0x01AF5B38, 0x0000056B, 0x0D192536, 
    }},
    {set:{//10 Capture Mode1 ISO100
        0x00210003, 0x00191414, 0x00D27768, 0x050A0E15, 0x080F1621, 0x02107B10, 0x08080808, 0x10101010, 0x01AF5B48, 0x0000056B, 0x0307090E
    }},
    {set:{//11 Capture Mode1 ISO200
        0x00210002, 0x00191414, 0x00D27768, 0x080F1721, 0x01030406, 0x00B06A8E, 0x08080808, 0x10101010, 0x01AF5B48, 0x0000056B, 0x050A0F16, 
    }},
    {set:{//12 Capture Mode1 ISO400
        0x00210003, 0x00191414, 0x00D27768, 0x09111925, 0x101F2D41, 0x0110728E, 0x08080808, 0x10101010, 0x01AF5B48, 0x0000056B, 0x060B1119, 
    }},
    {set:{//13 Capture Mode1 ISO800
        0x00210003, 0x00111414, 0x00D27788, 0x060B1118, 0x3D73A7F3, 0x02105182, 0x08080808, 0x10101010, 0x01AF5B88, 0x0000056B, 0x04070B10, 
    }},
    {set:{//14 Capture Mode1 ISO1600
        0x00210003, 0x00119414, 0x00D27788, 0x0D192536, 0xFFFFFFFF, 0x0190728C, 0x08080808, 0x10101010, 0x01AF5B28, 0x0000056B, 0x09111924, 
    }},
    {set:{//15 Disable (Do not modify me)
        0x00000000, 0x0001FF01, 0x00523264, 0x04090B0F, 0x050A0B10, 0x02107294, 0x08101820, 0x10080604, 0x01AF5B43, 0x0000056B, 0x0306070A, 
    }}
},
EE:{// EE
    {set:{//00 Preview ISO100 (middle sharpness)
        0x00000028, 0x0037370D, 0x01F40B2D, 0x03FF1446, 0x03FF0073, 0x03FF00D7, 0xFFFF000D, 
    }},
    {set:{//01 Preview ISO200 (middle sharpness)
        0x00000028, 0x0037372D, 0x01F40B2D, 0x03FF1446, 0x03FF0073, 0x03FF00D7, 0xFFFFFA0D, 
    }},
    {set:{//02 Preview ISO400 (middle sharpness)
        0x00000028, 0x0037372D, 0x00000064, 0x012C078C, 0x02BC06C8, 0x03FF00FF, 0xFFFF000D, 
    }},
    {set:{//03 Preview ISO800 (middle sharpness)
        0x00000028, 0x0037372D, 0x000000B4, 0x000000C8, 0x02BC17E6, 0x038400F0, 0xFFFFFF0D, 
    }},
    {set:{//04 Preview ISO1600 (middle sharpness)
        0x00000028, 0x0037372C, 0x000000E6, 0x000000E6, 0x02BCBCE6, 0x038400F0, 0xFFFFFF0D, 
    }},
    {set:{//05 Capture ISO100 (middle sharpness)
   0x00000028, 0x0037372D, 0x00E60000, 0x012A0222, 0x03BE0B5E, 0x03FF00A4, 0xFFFFFF0D
    }},
    {set:{//06 Capture ISO200 (middle sharpness)
0x00000028, 0x0037372D, 0x00E60000, 0x012A0222, 0x03BE0B5E, 0x03FF00A4, 0xFFFFFF0D
    }},
    {set:{//07 Capture ISO400 (middle sharpness)
        0x00000028, 0x0037372D, 0x00400049, 0x026D0B7B, 0x033505A3, 0x026D00CB, 0xFFFFFD0D, 
    }},
    {set:{//08 Capture ISO800 (middle sharpness)
        0x00000028, 0x0037372D, 0x000F0063, 0x00ED0495, 0x013401BD, 0x015200E5, 0xFFFFFB0D, 
    }},
    {set:{//09 Capture ISO1600 (middle sharpness)
        0x00000028, 0x00281E2D, 0x000E0068, 0x00DB049A, 0x011C01C2, 0x013800EA, 0xFFFFFB0D, 
    }},
    {set:{//10  no one uses this, this is Min EE (low sharpness)
        0x00000024, 0x0037372D, 0x00050023, 0x012C113C, 0x020001D0, 0x020000E7, 0xFFFF0005, 
    }},
    {set:{//11 no one uses this, this is Max EE (high sharpness)
        0x0000002C, 0x00373721, 0x000A0023, 0x03203937, 0x03FF01D0, 0x03FF00E7, 0xFFFF0005, 
    }}
            }, 
Saturation:{
    {set:{//00 (middle saturation)
        0x00010709, 0x1020E0F0, 0x32505250, 0x32000000, 0xFF00FF00, 0x001A2D40, 0x000A0A0A, 0x00643C1E, 
    }},
    {set:{//01 (middle saturation)
        0x00010709, 0x1020E0F0, 0x32505250, 0x30000000, 0xFF00FF00, 0x001A2D40, 0x000A0A0A, 0x00643C1E, 
    }},
    {set:{//02 (middle saturation)
        0x00010709, 0x1020E0F0, 0x28484848, 0x1E000000, 0xFF00FF00, 0x001A2D40, 0x000A0A0A, 0x00643C1E, 
    }},
    {set:{//03 (middle saturation)
        0x00010709, 0x1020E0F0, 0x14303030, 0x14000000, 0xFF00FF00, 0x001A2D40, 0x000A0A0A, 0x00643C1E, 
    }},
    {set:{//04 (middle saturation)
        0x00010709, 0x1020E0F0, 0x0F282828, 0x0F000000, 0xFF00FF00, 0x001A2D40, 0x000A0A0A, 0x00643C1E, 
    }},
    {set:{//05 no one uses this, this is Min Sat. (low saturation)
        0x00000709, 0x1020E0F0, 0x34343434, 0x34000000, 0xFF00FF00, 0x001A2D40, 0x000A0A0A, 0x00643C1E, 
    }},
    {set:{//06 no one uses this, this is Max Sat. (high saturation)
        0x00000709, 0x1020E0F0, 0x40606060, 0x40000000, 0xFF00FF00, 0x001A2D40, 0x000A0A0A, 0x00643C1E, 
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
        0x01A1048B, 0x04160443, 0x014F040C, 0x040A053D, 0x02470000, 
    }},
    {set:{//01
        0x01D204D9, 0x0007043F, 0x01400401, 0x000404B3, 0x01AF0000, 
    }},
    {set:{//02
        0x01B004AF, 0x0401042E, 0x01700442, 0x00010490, 0x018F0000, 
    }}
},
Gamma:{
    {set:{//00
        0x42251409, 0x8A7C6C5A, 0xC0B2A196, 0xE2DCD3CB, 0xFBF8F2ED, 
    }},
            }
