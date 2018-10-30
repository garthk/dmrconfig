/*
 * Address map of D868UV memory space.
 */

// Read only.
{ 0x02fa0010, 0x40 },       // 000000 Radio name and timestamp

// Load bitmaps first.
{ 0x024c1300, 0x80 },       // 000040 Bitmaps of zones and (070980) scanlists
{ 0x024c1500, 0x240 },      // 0000c0 Bitmap of channels
{ 0x02640000, 0x500 },      // 000300 Bitmap of contacts

// Other data.
{ 0x00800000, 0x2000 },     // 000800 Channels 1-128
{ 0x00840000, 0x2000 },     // 002800 Channels 129-256
{ 0x00880000, 0x2000 },     // 004800 Channels 257-384
{ 0x008c0000, 0x2000 },     // 006800 Channels 385-512
{ 0x00900000, 0x2000 },     // 008800 Channels 513-640
{ 0x00940000, 0x2000 },     // 00a800 Channels 641-768
{ 0x00980000, 0x2000 },     // 00c800 Channels 769-896
{ 0x009c0000, 0x2000 },     // 00e800 Channels 897-1024
{ 0x00a00000, 0x2000 },     // 010800 Channels 1025-1152
{ 0x00a40000, 0x2000 },     // 012800 Channels 1153-1280
{ 0x00a80000, 0x2000 },     // 014800 Channels 1281-1408
{ 0x00ac0000, 0x2000 },     // 016800 Channels 1409-1536
{ 0x00b00000, 0x2000 },     // 018800 Channels 1537-1664
{ 0x00b40000, 0x2000 },     // 01a800 Channels 1665-1792
{ 0x00b80000, 0x2000 },     // 01c800 Channels 1793-1920
{ 0x00bc0000, 0x2000 },     // 01e800 Channels 1921-2048
{ 0x00c00000, 0x2000 },     // 020800 Channels 2049-2176
{ 0x00c40000, 0x2000 },     // 022800 Channels 2177-2304
{ 0x00c80000, 0x2000 },     // 024800 Channels 2305-2432
{ 0x00cc0000, 0x2000 },     // 026800 Channels 2433-2560
{ 0x00d00000, 0x2000 },     // 028800 Channels 2561-2688
{ 0x00d40000, 0x2000 },     // 02a800 Channels 2689-2816
{ 0x00d80000, 0x2000 },     // 02c800 Channels 2817-2944
{ 0x00dc0000, 0x2000 },     // 02e800 Channels 2945-3072
{ 0x00e00000, 0x2000 },     // 030800 Channels 3073-3200
{ 0x00e40000, 0x2000 },     // 032800 Channels 3201-3328
{ 0x00e80000, 0x2000 },     // 034800 Channels 3329-3456
{ 0x00ec0000, 0x2000 },     // 036800 Channels 3457-3584
{ 0x00f00000, 0x2000 },     // 038800 Channels 3585-3712
{ 0x00f40000, 0x2000 },     // 03a800 Channels 3713-3840
{ 0x00f80000, 0x2000 },     // 03c800 Channels 3841-3968
{ 0x00fc0000, 0x0880 },     // 03e800 Channels 3969-4000, VFO A, VFO B
{ 0x01000000, 0x1f400 },    // 03f080 Zones: lists of channels
{ 0x01080000, 0xc0 },       // 05e480 Scanlist 1
{ 0x01080200, 0xc0 },       // 05e540 Scanlist 2
{ 0x01080400, 0xc0 },       // 05e600 Scanlist 3
{ 0x01080600, 0xc0 },       // 05e6c0 Scanlist 4
{ 0x01080800, 0xc0 },       // 05e780 Scanlist 5
{ 0x01080a00, 0xc0 },       // 05e840 Scanlist 6
{ 0x01080c00, 0xc0 },       // 05e900 Scanlist 7
{ 0x01080e00, 0xc0 },       // 05e9c0 Scanlist 8
{ 0x01081000, 0xc0 },       // 05ea80 Scanlist 9
{ 0x01081200, 0xc0 },       // 05eb40 Scanlist 10
{ 0x01081400, 0xc0 },       // 05ec00 Scanlist 11
{ 0x01081600, 0xc0 },       // 05ecc0 Scanlist 12
{ 0x01081800, 0xc0 },       // 05ed80 Scanlist 13
{ 0x01081a00, 0xc0 },       // 05ee40 Scanlist 14
{ 0x01081c00, 0xc0 },       // 05ef00 Scanlist 15
{ 0x01081e00, 0xc0 },       // 05efc0 Scanlist 16
{ 0x010c0000, 0xc0 },       // 05f080 Scanlist 17
{ 0x010c0200, 0xc0 },       // 05f140 Scanlist 18
{ 0x010c0400, 0xc0 },       // 05f200 Scanlist 19
{ 0x010c0600, 0xc0 },       // 05f2c0 Scanlist 20
{ 0x010c0800, 0xc0 },       // 05f380 Scanlist 21
{ 0x010c0a00, 0xc0 },       // 05f440 Scanlist 22
{ 0x010c0c00, 0xc0 },       // 05f500 Scanlist 23
{ 0x010c0e00, 0xc0 },       // 05f5c0 Scanlist 24
{ 0x010c1000, 0xc0 },       // 05f680 Scanlist 25
{ 0x010c1200, 0xc0 },       // 05f740 Scanlist 26
{ 0x010c1400, 0xc0 },       // 05f800 Scanlist 27
{ 0x010c1600, 0xc0 },       // 05f8c0 Scanlist 28
{ 0x010c1800, 0xc0 },       // 05f980 Scanlist 29
{ 0x010c1a00, 0xc0 },       // 05fa40 Scanlist 30
{ 0x010c1c00, 0xc0 },       // 05fb00 Scanlist 31
{ 0x010c1e00, 0xc0 },       // 05fbc0 Scanlist 32
{ 0x01100000, 0xc0 },       // 05fc80 Scanlist 33
{ 0x01100200, 0xc0 },       // 05fd40 Scanlist 34
{ 0x01100400, 0xc0 },       // 05fe00 Scanlist 35
{ 0x01100600, 0xc0 },       // 05fec0 Scanlist 36
{ 0x01100800, 0xc0 },       // 05ff80 Scanlist 37
{ 0x01100a00, 0xc0 },       // 060040 Scanlist 38
{ 0x01100c00, 0xc0 },       // 060100 Scanlist 39
{ 0x01100e00, 0xc0 },       // 0601c0 Scanlist 40
{ 0x01101000, 0xc0 },       // 060280 Scanlist 41
{ 0x01101200, 0xc0 },       // 060340 Scanlist 42
{ 0x01101400, 0xc0 },       // 060400 Scanlist 43
{ 0x01101600, 0xc0 },       // 0604c0 Scanlist 44
{ 0x01101800, 0xc0 },       // 060580 Scanlist 45
{ 0x01101a00, 0xc0 },       // 060640 Scanlist 46
{ 0x01101c00, 0xc0 },       // 060700 Scanlist 47
{ 0x01101e00, 0xc0 },       // 0607c0 Scanlist 48
{ 0x01140000, 0xc0 },       // 060880 Scanlist 49
{ 0x01140200, 0xc0 },       // 060940 Scanlist 50
{ 0x01140400, 0xc0 },       // 060a00 Scanlist 51
{ 0x01140600, 0xc0 },       // 060ac0 Scanlist 52
{ 0x01140800, 0xc0 },       // 060b80 Scanlist 53
{ 0x01140a00, 0xc0 },       // 060c40 Scanlist 54
{ 0x01140c00, 0xc0 },       // 060d00 Scanlist 55
{ 0x01140e00, 0xc0 },       // 060dc0 Scanlist 56
{ 0x01141000, 0xc0 },       // 060e80 Scanlist 57
{ 0x01141200, 0xc0 },       // 060f40 Scanlist 58
{ 0x01141400, 0xc0 },       // 061000 Scanlist 59
{ 0x01141600, 0xc0 },       // 0610c0 Scanlist 60
{ 0x01141800, 0xc0 },       // 061180 Scanlist 61
{ 0x01141a00, 0xc0 },       // 061240 Scanlist 62
{ 0x01141c00, 0xc0 },       // 061300 Scanlist 63
{ 0x01141e00, 0xc0 },       // 0613c0 Scanlist 64
{ 0x01180000, 0xc0 },       // 061480 Scanlist 65
{ 0x01180200, 0xc0 },       // 061540 Scanlist 66
{ 0x01180400, 0xc0 },       // 061600 Scanlist 67
{ 0x01180600, 0xc0 },       // 0616c0 Scanlist 68
{ 0x01180800, 0xc0 },       // 061780 Scanlist 69
{ 0x01180a00, 0xc0 },       // 061840 Scanlist 70
{ 0x01180c00, 0xc0 },       // 061900 Scanlist 71
{ 0x01180e00, 0xc0 },       // 0619c0 Scanlist 72
{ 0x01181000, 0xc0 },       // 061a80 Scanlist 73
{ 0x01181200, 0xc0 },       // 061b40 Scanlist 74
{ 0x01181400, 0xc0 },       // 061c00 Scanlist 75
{ 0x01181600, 0xc0 },       // 061cc0 Scanlist 76
{ 0x01181800, 0xc0 },       // 061d80 Scanlist 77
{ 0x01181a00, 0xc0 },       // 061e40 Scanlist 78
{ 0x01181c00, 0xc0 },       // 061f00 Scanlist 79
{ 0x01181e00, 0xc0 },       // 061fc0 Scanlist 80
{ 0x011c0000, 0xc0 },       // 062080 Scanlist 81
{ 0x011c0200, 0xc0 },       // 062140 Scanlist 82
{ 0x011c0400, 0xc0 },       // 062200 Scanlist 83
{ 0x011c0600, 0xc0 },       // 0622c0 Scanlist 84
{ 0x011c0800, 0xc0 },       // 062380 Scanlist 85
{ 0x011c0a00, 0xc0 },       // 062440 Scanlist 86
{ 0x011c0c00, 0xc0 },       // 062500 Scanlist 87
{ 0x011c0e00, 0xc0 },       // 0625c0 Scanlist 88
{ 0x011c1000, 0xc0 },       // 062680 Scanlist 89
{ 0x011c1200, 0xc0 },       // 062740 Scanlist 90
{ 0x011c1400, 0xc0 },       // 062800 Scanlist 91
{ 0x011c1600, 0xc0 },       // 0628c0 Scanlist 92
{ 0x011c1800, 0xc0 },       // 062980 Scanlist 93
{ 0x011c1a00, 0xc0 },       // 062a40 Scanlist 94
{ 0x011c1c00, 0xc0 },       // 062b00 Scanlist 95
{ 0x011c1e00, 0xc0 },       // 062bc0 Scanlist 96
{ 0x01200000, 0xc0 },       // 062c80 Scanlist 97
{ 0x01200200, 0xc0 },       // 062d40 Scanlist 98
{ 0x01200400, 0xc0 },       // 062e00 Scanlist 99
{ 0x01200600, 0xc0 },       // 062ec0 Scanlist 100
{ 0x01200800, 0xc0 },       // 062f80 Scanlist 101
{ 0x01200a00, 0xc0 },       // 063040 Scanlist 102
{ 0x01200c00, 0xc0 },       // 063100 Scanlist 103
{ 0x01200e00, 0xc0 },       // 0631c0 Scanlist 104
{ 0x01201000, 0xc0 },       // 063280 Scanlist 105
{ 0x01201200, 0xc0 },       // 063340 Scanlist 106
{ 0x01201400, 0xc0 },       // 063400 Scanlist 107
{ 0x01201600, 0xc0 },       // 0634c0 Scanlist 108
{ 0x01201800, 0xc0 },       // 063580 Scanlist 109
{ 0x01201a00, 0xc0 },       // 063640 Scanlist 110
{ 0x01201c00, 0xc0 },       // 063700 Scanlist 111
{ 0x01201e00, 0xc0 },       // 0637c0 Scanlist 112
{ 0x01240000, 0xc0 },       // 063880 Scanlist 113
{ 0x01240200, 0xc0 },       // 063940 Scanlist 114
{ 0x01240400, 0xc0 },       // 063a00 Scanlist 115
{ 0x01240600, 0xc0 },       // 063ac0 Scanlist 116
{ 0x01240800, 0xc0 },       // 063b80 Scanlist 117
{ 0x01240a00, 0xc0 },       // 063c40 Scanlist 118
{ 0x01240c00, 0xc0 },       // 063d00 Scanlist 119
{ 0x01240e00, 0xc0 },       // 063dc0 Scanlist 120
{ 0x01241000, 0xc0 },       // 063e80 Scanlist 121
{ 0x01241200, 0xc0 },       // 063f40 Scanlist 122
{ 0x01241400, 0xc0 },       // 064000 Scanlist 123
{ 0x01241600, 0xc0 },       // 0640c0 Scanlist 124
{ 0x01241800, 0xc0 },       // 064180 Scanlist 125
{ 0x01241a00, 0xc0 },       // 064240 Scanlist 126
{ 0x01241c00, 0xc0 },       // 064300 Scanlist 127
{ 0x01241e00, 0xc0 },       // 0643c0 Scanlist 128
{ 0x01280000, 0xc0 },       // 064480 Scanlist 129
{ 0x01280200, 0xc0 },       // 064540 Scanlist 130
{ 0x01280400, 0xc0 },       // 064600 Scanlist 131
{ 0x01280600, 0xc0 },       // 0646c0 Scanlist 132
{ 0x01280800, 0xc0 },       // 064780 Scanlist 133
{ 0x01280a00, 0xc0 },       // 064840 Scanlist 134
{ 0x01280c00, 0xc0 },       // 064900 Scanlist 135
{ 0x01280e00, 0xc0 },       // 0649c0 Scanlist 136
{ 0x01281000, 0xc0 },       // 064a80 Scanlist 137
{ 0x01281200, 0xc0 },       // 064b40 Scanlist 138
{ 0x01281400, 0xc0 },       // 064c00 Scanlist 139
{ 0x01281600, 0xc0 },       // 064cc0 Scanlist 140
{ 0x01281800, 0xc0 },       // 064d80 Scanlist 141
{ 0x01281a00, 0xc0 },       // 064e40 Scanlist 142
{ 0x01281c00, 0xc0 },       // 064f00 Scanlist 143
{ 0x01281e00, 0xc0 },       // 064fc0 Scanlist 144
{ 0x012c0000, 0xc0 },       // 065080 Scanlist 145
{ 0x012c0200, 0xc0 },       // 065140 Scanlist 146
{ 0x012c0400, 0xc0 },       // 065200 Scanlist 147
{ 0x012c0600, 0xc0 },       // 0652c0 Scanlist 148
{ 0x012c0800, 0xc0 },       // 065380 Scanlist 149
{ 0x012c0a00, 0xc0 },       // 065440 Scanlist 150
{ 0x012c0c00, 0xc0 },       // 065500 Scanlist 151
{ 0x012c0e00, 0xc0 },       // 0655c0 Scanlist 152
{ 0x012c1000, 0xc0 },       // 065680 Scanlist 153
{ 0x012c1200, 0xc0 },       // 065740 Scanlist 154
{ 0x012c1400, 0xc0 },       // 065800 Scanlist 155
{ 0x012c1600, 0xc0 },       // 0658c0 Scanlist 156
{ 0x012c1800, 0xc0 },       // 065980 Scanlist 157
{ 0x012c1a00, 0xc0 },       // 065a40 Scanlist 158
{ 0x012c1c00, 0xc0 },       // 065b00 Scanlist 159
{ 0x012c1e00, 0xc0 },       // 065bc0 Scanlist 160
{ 0x01300000, 0xc0 },       // 065c80 Scanlist 161
{ 0x01300200, 0xc0 },       // 065d40 Scanlist 162
{ 0x01300400, 0xc0 },       // 065e00 Scanlist 163
{ 0x01300600, 0xc0 },       // 065ec0 Scanlist 164
{ 0x01300800, 0xc0 },       // 065f80 Scanlist 165
{ 0x01300a00, 0xc0 },       // 066040 Scanlist 166
{ 0x01300c00, 0xc0 },       // 066100 Scanlist 167
{ 0x01300e00, 0xc0 },       // 0661c0 Scanlist 168
{ 0x01301000, 0xc0 },       // 066280 Scanlist 169
{ 0x01301200, 0xc0 },       // 066340 Scanlist 170
{ 0x01301400, 0xc0 },       // 066400 Scanlist 171
{ 0x01301600, 0xc0 },       // 0664c0 Scanlist 172
{ 0x01301800, 0xc0 },       // 066580 Scanlist 173
{ 0x01301a00, 0xc0 },       // 066640 Scanlist 174
{ 0x01301c00, 0xc0 },       // 066700 Scanlist 175
{ 0x01301e00, 0xc0 },       // 0667c0 Scanlist 176
{ 0x01340000, 0xc0 },       // 066880 Scanlist 177
{ 0x01340200, 0xc0 },       // 066940 Scanlist 178
{ 0x01340400, 0xc0 },       // 066a00 Scanlist 179
{ 0x01340600, 0xc0 },       // 066ac0 Scanlist 180
{ 0x01340800, 0xc0 },       // 066b80 Scanlist 181
{ 0x01340a00, 0xc0 },       // 066c40 Scanlist 182
{ 0x01340c00, 0xc0 },       // 066d00 Scanlist 183
{ 0x01340e00, 0xc0 },       // 066dc0 Scanlist 184
{ 0x01341000, 0xc0 },       // 066e80 Scanlist 185
{ 0x01341200, 0xc0 },       // 066f40 Scanlist 186
{ 0x01341400, 0xc0 },       // 067000 Scanlist 187
{ 0x01341600, 0xc0 },       // 0670c0 Scanlist 188
{ 0x01341800, 0xc0 },       // 067180 Scanlist 189
{ 0x01341a00, 0xc0 },       // 067240 Scanlist 190
{ 0x01341c00, 0xc0 },       // 067300 Scanlist 191
{ 0x01341e00, 0xc0 },       // 0673c0 Scanlist 192
{ 0x01380000, 0xc0 },       // 067480 Scanlist 193
{ 0x01380200, 0xc0 },       // 067540 Scanlist 194
{ 0x01380400, 0xc0 },       // 067600 Scanlist 195
{ 0x01380600, 0xc0 },       // 0676c0 Scanlist 196
{ 0x01380800, 0xc0 },       // 067780 Scanlist 197
{ 0x01380a00, 0xc0 },       // 067840 Scanlist 198
{ 0x01380c00, 0xc0 },       // 067900 Scanlist 199
{ 0x01380e00, 0xc0 },       // 0679c0 Scanlist 200
{ 0x01381000, 0xc0 },       // 067a80 Scanlist 201
{ 0x01381200, 0xc0 },       // 067b40 Scanlist 202
{ 0x01381400, 0xc0 },       // 067c00 Scanlist 203
{ 0x01381600, 0xc0 },       // 067cc0 Scanlist 204
{ 0x01381800, 0xc0 },       // 067d80 Scanlist 205
{ 0x01381a00, 0xc0 },       // 067e40 Scanlist 206
{ 0x01381c00, 0xc0 },       // 067f00 Scanlist 207
{ 0x01381e00, 0xc0 },       // 067fc0 Scanlist 208
{ 0x013c0000, 0xc0 },       // 068080 Scanlist 209
{ 0x013c0200, 0xc0 },       // 068140 Scanlist 210
{ 0x013c0400, 0xc0 },       // 068200 Scanlist 211
{ 0x013c0600, 0xc0 },       // 0682c0 Scanlist 212
{ 0x013c0800, 0xc0 },       // 068380 Scanlist 213
{ 0x013c0a00, 0xc0 },       // 068440 Scanlist 214
{ 0x013c0c00, 0xc0 },       // 068500 Scanlist 215
{ 0x013c0e00, 0xc0 },       // 0685c0 Scanlist 216
{ 0x013c1000, 0xc0 },       // 068680 Scanlist 217
{ 0x013c1200, 0xc0 },       // 068740 Scanlist 218
{ 0x013c1400, 0xc0 },       // 068800 Scanlist 219
{ 0x013c1600, 0xc0 },       // 0688c0 Scanlist 220
{ 0x013c1800, 0xc0 },       // 068980 Scanlist 221
{ 0x013c1a00, 0xc0 },       // 068a40 Scanlist 222
{ 0x013c1c00, 0xc0 },       // 068b00 Scanlist 223
{ 0x013c1e00, 0xc0 },       // 068bc0 Scanlist 224
{ 0x01400000, 0xc0 },       // 068c80 Scanlist 225
{ 0x01400200, 0xc0 },       // 068d40 Scanlist 226
{ 0x01400400, 0xc0 },       // 068e00 Scanlist 227
{ 0x01400600, 0xc0 },       // 068ec0 Scanlist 228
{ 0x01400800, 0xc0 },       // 068f80 Scanlist 229
{ 0x01400a00, 0xc0 },       // 069040 Scanlist 230
{ 0x01400c00, 0xc0 },       // 069100 Scanlist 231
{ 0x01400e00, 0xc0 },       // 0691c0 Scanlist 232
{ 0x01401000, 0xc0 },       // 069280 Scanlist 233
{ 0x01401200, 0xc0 },       // 069340 Scanlist 234
{ 0x01401400, 0xc0 },       // 069400 Scanlist 235
{ 0x01401600, 0xc0 },       // 0694c0 Scanlist 236
{ 0x01401800, 0xc0 },       // 069580 Scanlist 237
{ 0x01401a00, 0xc0 },       // 069640 Scanlist 238
{ 0x01401c00, 0xc0 },       // 069700 Scanlist 239
{ 0x01401e00, 0xc0 },       // 0697c0 Scanlist 240
{ 0x01440000, 0xc0 },       // 069880 Scanlist 241
{ 0x01440200, 0xc0 },       // 069940 Scanlist 242
{ 0x01440400, 0xc0 },       // 069a00 Scanlist 243
{ 0x01440600, 0xc0 },       // 069ac0 Scanlist 244
{ 0x01440800, 0xc0 },       // 069b80 Scanlist 245
{ 0x01440a00, 0xc0 },       // 069c40 Scanlist 246
{ 0x01440c00, 0xc0 },       // 069d00 Scanlist 247
{ 0x01440e00, 0xc0 },       // 069dc0 Scanlist 248
{ 0x01441000, 0xc0 },       // 069e80 Scanlist 249
{ 0x01441200, 0xc0 },       // 069f40 Scanlist 250
{ 0x01640000, 0x640 },      // 06a000 Unknown index
{ 0x01640800, 0xc0 },       // 06a640 Zeroes?
{ 0x02140000, 0x800 },      // 06a700 Messages 1-8
{ 0x02180000, 0x800 },      // 06af00 Messages 9-16
{ 0x021c0000, 0x800 },      // 06b700 Messages 17-24
{ 0x02200000, 0x800 },      // 06bf00 Messages 25-32
{ 0x02240000, 0x800 },      // 06c700 Messages 33-40
{ 0x02280000, 0x800 },      // 06cf00 Messages 41-48
{ 0x022c0000, 0x800 },      // 06d700 Messages 49-56
{ 0x02300000, 0x800 },      // 06df00 Messages 57-64
{ 0x02340000, 0x800 },      // 06e700 Messages 65-72
{ 0x02380000, 0x800 },      // 06ef00 Messages 73-80
{ 0x023c0000, 0x800 },      // 06f700 Messages 81-88
{ 0x02400000, 0x800 },      // 06ff00 Messages 89-96
{ 0x02440000, 0x400 },      // 070700 Messages 97-100
{ 0x02480000, 0x1c0 },      // 070b00 Unknown index
{ 0x02480200, 0x40 },       // 070cc0 Unknown bitmap
{ 0x024c0000, 0x40 },       // 070d00 Unknown data
{ 0x024c0c80, 0x40 },       // 070d40 Unknown data
{ 0x024c0d00, 0x200 },      // 070d80 Zeroes?
{ 0x024c1000, 0x140 },      // 070f80 Unknown data
{ 0x024c1280, 0x40 },       // 0710c0 Unknown data
{ 0x024c1400, 0x80 },       // 071100 Unknown data
{ 0x024c1800, 0x500 },      // 071180 Zeroes?
{ 0x024c2000, 0x440 },      // 071680 Unknown data
{ 0x024c2600, 0x40 },       // 071ac0 Unknown data
{ 0x02500000, 0x640 },      // 071b00 General settings
{ 0x02501000, 0x40 },       // 072140 Unknown data
{ 0x02501100, 0x140 },      // 072180 GPS message
{ 0x02540000, 0x1f40 },     // 0722c0 Zone names 1-250
{ 0x02580000, 0x1f40 },     // 074200 Radio IDs 1-250
{ 0x025c0000, 0x880 },      // 076140 Unknown data, status message
{ 0x025c0b00, 0x40 },       // 0769c0 Unknown data
{ 0x02600000, 0x9c40 },     // 076a00 Unknown data, bitmap
{ 0x02680000, 0xf4240 },    // 080640 Contacts 1-10000
{ 0x02900000, 0x80 },       // 174880 Unknown index
{ 0x02900100, 0x80 },       // 174900 Unknown index
{ 0x02940000, 0x180 },      // 174980 AnalogContacts 1-128
{ 0x02980000, 0x140 },      // 174b00 Grouplist 1
{ 0x02980200, 0x140 },      // 174c40 Grouplist 2
{ 0x02980400, 0x140 },      // 174d80 Grouplist 3
{ 0x02980600, 0x140 },      // 174ec0 Grouplist 4
{ 0x02980800, 0x140 },      // 175000 Grouplist 5
{ 0x02980a00, 0x140 },      // 175140 Grouplist 6
{ 0x02980c00, 0x140 },      // 175280 Grouplist 7
{ 0x02980e00, 0x140 },      // 1753c0 Grouplist 8
{ 0x02981000, 0x140 },      // 175500 Grouplist 9
{ 0x02981200, 0x140 },      // 175640 Grouplist 10
{ 0x02981400, 0x140 },      // 175780 Grouplist 11
{ 0x02981600, 0x140 },      // 1758c0 Grouplist 12
{ 0x02981800, 0x140 },      // 175a00 Grouplist 13
{ 0x02981a00, 0x140 },      // 175b40 Grouplist 14
{ 0x02981c00, 0x140 },      // 175c80 Grouplist 15
{ 0x02981e00, 0x140 },      // 175dc0 Grouplist 16
{ 0x02982000, 0x140 },      // 175f00 Grouplist 17
{ 0x02982200, 0x140 },      // 176040 Grouplist 18
{ 0x02982400, 0x140 },      // 176180 Grouplist 19
{ 0x02982600, 0x140 },      // 1762c0 Grouplist 20
{ 0x02982800, 0x140 },      // 176400 Grouplist 21
{ 0x02982a00, 0x140 },      // 176540 Grouplist 22
{ 0x02982c00, 0x140 },      // 176680 Grouplist 23
{ 0x02982e00, 0x140 },      // 1767c0 Grouplist 24
{ 0x02983000, 0x140 },      // 176900 Grouplist 25
{ 0x02983200, 0x140 },      // 176a40 Grouplist 26
{ 0x02983400, 0x140 },      // 176b80 Grouplist 27
{ 0x02983600, 0x140 },      // 176cc0 Grouplist 28
{ 0x02983800, 0x140 },      // 176e00 Grouplist 29
{ 0x02983a00, 0x140 },      // 176f40 Grouplist 30
{ 0x02983c00, 0x140 },      // 177080 Grouplist 31
{ 0x02983e00, 0x140 },      // 1771c0 Grouplist 32
{ 0x02984000, 0x140 },      // 177300 Grouplist 33
{ 0x02984200, 0x140 },      // 177440 Grouplist 34
{ 0x02984400, 0x140 },      // 177580 Grouplist 35
{ 0x02984600, 0x140 },      // 1776c0 Grouplist 36
{ 0x02984800, 0x140 },      // 177800 Grouplist 37
{ 0x02984a00, 0x140 },      // 177940 Grouplist 38
{ 0x02984c00, 0x140 },      // 177a80 Grouplist 39
{ 0x02984e00, 0x140 },      // 177bc0 Grouplist 40
{ 0x02985000, 0x140 },      // 177d00 Grouplist 41
{ 0x02985200, 0x140 },      // 177e40 Grouplist 42
{ 0x02985400, 0x140 },      // 177f80 Grouplist 43
{ 0x02985600, 0x140 },      // 1780c0 Grouplist 44
{ 0x02985800, 0x140 },      // 178200 Grouplist 45
{ 0x02985a00, 0x140 },      // 178340 Grouplist 46
{ 0x02985c00, 0x140 },      // 178480 Grouplist 47
{ 0x02985e00, 0x140 },      // 1785c0 Grouplist 48
{ 0x02986000, 0x140 },      // 178700 Grouplist 49
{ 0x02986200, 0x140 },      // 178840 Grouplist 50
{ 0x02986400, 0x140 },      // 178980 Grouplist 51
{ 0x02986600, 0x140 },      // 178ac0 Grouplist 52
{ 0x02986800, 0x140 },      // 178c00 Grouplist 53
{ 0x02986a00, 0x140 },      // 178d40 Grouplist 54
{ 0x02986c00, 0x140 },      // 178e80 Grouplist 55
{ 0x02986e00, 0x140 },      // 178fc0 Grouplist 56
{ 0x02987000, 0x140 },      // 179100 Grouplist 57
{ 0x02987200, 0x140 },      // 179240 Grouplist 58
{ 0x02987400, 0x140 },      // 179380 Grouplist 59
{ 0x02987600, 0x140 },      // 1794c0 Grouplist 60
{ 0x02987800, 0x140 },      // 179600 Grouplist 61
{ 0x02987a00, 0x140 },      // 179740 Grouplist 62
{ 0x02987c00, 0x140 },      // 179880 Grouplist 63
{ 0x02987e00, 0x140 },      // 1799c0 Grouplist 64
{ 0x02988000, 0x140 },      // 179b00 Grouplist 65
{ 0x02988200, 0x140 },      // 179c40 Grouplist 66
{ 0x02988400, 0x140 },      // 179d80 Grouplist 67
{ 0x02988600, 0x140 },      // 179ec0 Grouplist 68
{ 0x02988800, 0x140 },      // 17a000 Grouplist 69
{ 0x02988a00, 0x140 },      // 17a140 Grouplist 70
{ 0x02988c00, 0x140 },      // 17a280 Grouplist 71
{ 0x02988e00, 0x140 },      // 17a3c0 Grouplist 72
{ 0x02989000, 0x140 },      // 17a500 Grouplist 73
{ 0x02989200, 0x140 },      // 17a640 Grouplist 74
{ 0x02989400, 0x140 },      // 17a780 Grouplist 75
{ 0x02989600, 0x140 },      // 17a8c0 Grouplist 76
{ 0x02989800, 0x140 },      // 17aa00 Grouplist 77
{ 0x02989a00, 0x140 },      // 17ab40 Grouplist 78
{ 0x02989c00, 0x140 },      // 17ac80 Grouplist 79
{ 0x02989e00, 0x140 },      // 17adc0 Grouplist 80
{ 0x0298a000, 0x140 },      // 17af00 Grouplist 81
{ 0x0298a200, 0x140 },      // 17b040 Grouplist 82
{ 0x0298a400, 0x140 },      // 17b180 Grouplist 83
{ 0x0298a600, 0x140 },      // 17b2c0 Grouplist 84
{ 0x0298a800, 0x140 },      // 17b400 Grouplist 85
{ 0x0298aa00, 0x140 },      // 17b540 Grouplist 86
{ 0x0298ac00, 0x140 },      // 17b680 Grouplist 87
{ 0x0298ae00, 0x140 },      // 17b7c0 Grouplist 88
{ 0x0298b000, 0x140 },      // 17b900 Grouplist 89
{ 0x0298b200, 0x140 },      // 17ba40 Grouplist 90
{ 0x0298b400, 0x140 },      // 17bb80 Grouplist 91
{ 0x0298b600, 0x140 },      // 17bcc0 Grouplist 92
{ 0x0298b800, 0x140 },      // 17be00 Grouplist 93
{ 0x0298ba00, 0x140 },      // 17bf40 Grouplist 94
{ 0x0298bc00, 0x140 },      // 17c080 Grouplist 95
{ 0x0298be00, 0x140 },      // 17c1c0 Grouplist 96
{ 0x0298c000, 0x140 },      // 17c300 Grouplist 97
{ 0x0298c200, 0x140 },      // 17c440 Grouplist 98
{ 0x0298c400, 0x140 },      // 17c580 Grouplist 99
{ 0x0298c600, 0x140 },      // 17c6c0 Grouplist 100
{ 0x0298c800, 0x140 },      // 17c800 Grouplist 101
{ 0x0298ca00, 0x140 },      // 17c940 Grouplist 102
{ 0x0298cc00, 0x140 },      // 17ca80 Grouplist 103
{ 0x0298ce00, 0x140 },      // 17cbc0 Grouplist 104
{ 0x0298d000, 0x140 },      // 17cd00 Grouplist 105
{ 0x0298d200, 0x140 },      // 17ce40 Grouplist 106
{ 0x0298d400, 0x140 },      // 17cf80 Grouplist 107
{ 0x0298d600, 0x140 },      // 17d0c0 Grouplist 108
{ 0x0298d800, 0x140 },      // 17d200 Grouplist 109
{ 0x0298da00, 0x140 },      // 17d340 Grouplist 110
{ 0x0298dc00, 0x140 },      // 17d480 Grouplist 111
{ 0x0298de00, 0x140 },      // 17d5c0 Grouplist 112
{ 0x0298e000, 0x140 },      // 17d700 Grouplist 113
{ 0x0298e200, 0x140 },      // 17d840 Grouplist 114
{ 0x0298e400, 0x140 },      // 17d980 Grouplist 115
{ 0x0298e600, 0x140 },      // 17dac0 Grouplist 116
{ 0x0298e800, 0x140 },      // 17dc00 Grouplist 117
{ 0x0298ea00, 0x140 },      // 17dd40 Grouplist 118
{ 0x0298ec00, 0x140 },      // 17de80 Grouplist 119
{ 0x0298ee00, 0x140 },      // 17dfc0 Grouplist 120
{ 0x0298f000, 0x140 },      // 17e100 Grouplist 121
{ 0x0298f200, 0x140 },      // 17e240 Grouplist 122
{ 0x0298f400, 0x140 },      // 17e380 Grouplist 123
{ 0x0298f600, 0x140 },      // 17e4c0 Grouplist 124
{ 0x0298f800, 0x140 },      // 17e600 Grouplist 125
{ 0x0298fa00, 0x140 },      // 17e740 Grouplist 126
{ 0x0298fc00, 0x140 },      // 17e880 Grouplist 127
{ 0x0298fe00, 0x140 },      // 17e9c0 Grouplist 128
{ 0x02990000, 0x140 },      // 17eb00 Grouplist 129
{ 0x02990200, 0x140 },      // 17ec40 Grouplist 130
{ 0x02990400, 0x140 },      // 17ed80 Grouplist 131
{ 0x02990600, 0x140 },      // 17eec0 Grouplist 132
{ 0x02990800, 0x140 },      // 17f000 Grouplist 133
{ 0x02990a00, 0x140 },      // 17f140 Grouplist 134
{ 0x02990c00, 0x140 },      // 17f280 Grouplist 135
{ 0x02990e00, 0x140 },      // 17f3c0 Grouplist 136
{ 0x02991000, 0x140 },      // 17f500 Grouplist 137
{ 0x02991200, 0x140 },      // 17f640 Grouplist 138
{ 0x02991400, 0x140 },      // 17f780 Grouplist 139
{ 0x02991600, 0x140 },      // 17f8c0 Grouplist 140
{ 0x02991800, 0x140 },      // 17fa00 Grouplist 141
{ 0x02991a00, 0x140 },      // 17fb40 Grouplist 142
{ 0x02991c00, 0x140 },      // 17fc80 Grouplist 143
{ 0x02991e00, 0x140 },      // 17fdc0 Grouplist 144
{ 0x02992000, 0x140 },      // 17ff00 Grouplist 145
{ 0x02992200, 0x140 },      // 180040 Grouplist 146
{ 0x02992400, 0x140 },      // 180180 Grouplist 147
{ 0x02992600, 0x140 },      // 1802c0 Grouplist 148
{ 0x02992800, 0x140 },      // 180400 Grouplist 149
{ 0x02992a00, 0x140 },      // 180540 Grouplist 150
{ 0x02992c00, 0x140 },      // 180680 Grouplist 151
{ 0x02992e00, 0x140 },      // 1807c0 Grouplist 152
{ 0x02993000, 0x140 },      // 180900 Grouplist 153
{ 0x02993200, 0x140 },      // 180a40 Grouplist 154
{ 0x02993400, 0x140 },      // 180b80 Grouplist 155
{ 0x02993600, 0x140 },      // 180cc0 Grouplist 156
{ 0x02993800, 0x140 },      // 180e00 Grouplist 157
{ 0x02993a00, 0x140 },      // 180f40 Grouplist 158
{ 0x02993c00, 0x140 },      // 181080 Grouplist 159
{ 0x02993e00, 0x140 },      // 1811c0 Grouplist 160
{ 0x02994000, 0x140 },      // 181300 Grouplist 161
{ 0x02994200, 0x140 },      // 181440 Grouplist 162
{ 0x02994400, 0x140 },      // 181580 Grouplist 163
{ 0x02994600, 0x140 },      // 1816c0 Grouplist 164
{ 0x02994800, 0x140 },      // 181800 Grouplist 165
{ 0x02994a00, 0x140 },      // 181940 Grouplist 166
{ 0x02994c00, 0x140 },      // 181a80 Grouplist 167
{ 0x02994e00, 0x140 },      // 181bc0 Grouplist 168
{ 0x02995000, 0x140 },      // 181d00 Grouplist 169
{ 0x02995200, 0x140 },      // 181e40 Grouplist 170
{ 0x02995400, 0x140 },      // 181f80 Grouplist 171
{ 0x02995600, 0x140 },      // 1820c0 Grouplist 172
{ 0x02995800, 0x140 },      // 182200 Grouplist 173
{ 0x02995a00, 0x140 },      // 182340 Grouplist 174
{ 0x02995c00, 0x140 },      // 182480 Grouplist 175
{ 0x02995e00, 0x140 },      // 1825c0 Grouplist 176
{ 0x02996000, 0x140 },      // 182700 Grouplist 177
{ 0x02996200, 0x140 },      // 182840 Grouplist 178
{ 0x02996400, 0x140 },      // 182980 Grouplist 179
{ 0x02996600, 0x140 },      // 182ac0 Grouplist 180
{ 0x02996800, 0x140 },      // 182c00 Grouplist 181
{ 0x02996a00, 0x140 },      // 182d40 Grouplist 182
{ 0x02996c00, 0x140 },      // 182e80 Grouplist 183
{ 0x02996e00, 0x140 },      // 182fc0 Grouplist 184
{ 0x02997000, 0x140 },      // 183100 Grouplist 185
{ 0x02997200, 0x140 },      // 183240 Grouplist 186
{ 0x02997400, 0x140 },      // 183380 Grouplist 187
{ 0x02997600, 0x140 },      // 1834c0 Grouplist 188
{ 0x02997800, 0x140 },      // 183600 Grouplist 189
{ 0x02997a00, 0x140 },      // 183740 Grouplist 190
{ 0x02997c00, 0x140 },      // 183880 Grouplist 191
{ 0x02997e00, 0x140 },      // 1839c0 Grouplist 192
{ 0x02998000, 0x140 },      // 183b00 Grouplist 193
{ 0x02998200, 0x140 },      // 183c40 Grouplist 194
{ 0x02998400, 0x140 },      // 183d80 Grouplist 195
{ 0x02998600, 0x140 },      // 183ec0 Grouplist 196
{ 0x02998800, 0x140 },      // 184000 Grouplist 197
{ 0x02998a00, 0x140 },      // 184140 Grouplist 198
{ 0x02998c00, 0x140 },      // 184280 Grouplist 199
{ 0x02998e00, 0x140 },      // 1843c0 Grouplist 200
{ 0x02999000, 0x140 },      // 184500 Grouplist 201
{ 0x02999200, 0x140 },      // 184640 Grouplist 202
{ 0x02999400, 0x140 },      // 184780 Grouplist 203
{ 0x02999600, 0x140 },      // 1848c0 Grouplist 204
{ 0x02999800, 0x140 },      // 184a00 Grouplist 205
{ 0x02999a00, 0x140 },      // 184b40 Grouplist 206
{ 0x02999c00, 0x140 },      // 184c80 Grouplist 207
{ 0x02999e00, 0x140 },      // 184dc0 Grouplist 208
{ 0x0299a000, 0x140 },      // 184f00 Grouplist 209
{ 0x0299a200, 0x140 },      // 185040 Grouplist 210
{ 0x0299a400, 0x140 },      // 185180 Grouplist 211
{ 0x0299a600, 0x140 },      // 1852c0 Grouplist 212
{ 0x0299a800, 0x140 },      // 185400 Grouplist 213
{ 0x0299aa00, 0x140 },      // 185540 Grouplist 214
{ 0x0299ac00, 0x140 },      // 185680 Grouplist 215
{ 0x0299ae00, 0x140 },      // 1857c0 Grouplist 216
{ 0x0299b000, 0x140 },      // 185900 Grouplist 217
{ 0x0299b200, 0x140 },      // 185a40 Grouplist 218
{ 0x0299b400, 0x140 },      // 185b80 Grouplist 219
{ 0x0299b600, 0x140 },      // 185cc0 Grouplist 220
{ 0x0299b800, 0x140 },      // 185e00 Grouplist 221
{ 0x0299ba00, 0x140 },      // 185f40 Grouplist 222
{ 0x0299bc00, 0x140 },      // 186080 Grouplist 223
{ 0x0299be00, 0x140 },      // 1861c0 Grouplist 224
{ 0x0299c000, 0x140 },      // 186300 Grouplist 225
{ 0x0299c200, 0x140 },      // 186440 Grouplist 226
{ 0x0299c400, 0x140 },      // 186580 Grouplist 227
{ 0x0299c600, 0x140 },      // 1866c0 Grouplist 228
{ 0x0299c800, 0x140 },      // 186800 Grouplist 229
{ 0x0299ca00, 0x140 },      // 186940 Grouplist 230
{ 0x0299cc00, 0x140 },      // 186a80 Grouplist 231
{ 0x0299ce00, 0x140 },      // 186bc0 Grouplist 232
{ 0x0299d000, 0x140 },      // 186d00 Grouplist 233
{ 0x0299d200, 0x140 },      // 186e40 Grouplist 234
{ 0x0299d400, 0x140 },      // 186f80 Grouplist 235
{ 0x0299d600, 0x140 },      // 1870c0 Grouplist 236
{ 0x0299d800, 0x140 },      // 187200 Grouplist 237
{ 0x0299da00, 0x140 },      // 187340 Grouplist 238
{ 0x0299dc00, 0x140 },      // 187480 Grouplist 239
{ 0x0299de00, 0x140 },      // 1875c0 Grouplist 240
{ 0x0299e000, 0x140 },      // 187700 Grouplist 241
{ 0x0299e200, 0x140 },      // 187840 Grouplist 242
{ 0x0299e400, 0x140 },      // 187980 Grouplist 243
{ 0x0299e600, 0x140 },      // 187ac0 Grouplist 244
{ 0x0299e800, 0x140 },      // 187c00 Grouplist 245
{ 0x0299ea00, 0x140 },      // 187d40 Grouplist 246
{ 0x0299ec00, 0x140 },      // 187e80 Grouplist 247
{ 0x0299ee00, 0x140 },      // 187fc0 Grouplist 248
{ 0x0299f000, 0x140 },      // 188100 Grouplist 249
{ 0x0299f200, 0x140 },      // 188240 Grouplist 250
{ 0x04280000, 0x300 },      // 188380 Unknown index
{ 0, 0 },
