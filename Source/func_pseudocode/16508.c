-[iAUPServer processManifestProperties:length:]
// local variable allocation has failed, the output may be wrong!
id __cdecl -[iAUPServer processManifestProperties:length:](iAUPServer *self, SEL a2, char *a3, unsigned int a4)
{
  __int64 serverState; // x2
  unsigned int v7; // w19
  unsigned int v8; // w0
  __int16 v9; // w28
  __int64 v10; // x22
  __int64 v11; // x23
  unsigned __int64 v12; // x24
  __int64 v13; // x26
  int v14; // w19
  _BOOL4 v15; // w9
  unsigned int v16; // w27
  NSData *v17; // x0
  NSData *v18; // x25
  __int64 v19; // x8
  __int64 v20; // x27
  _BOOL8 v21; // x20
  __int64 v22; // x9
  NSNumber *v23; // x0
  NSNumber *v24; // x0
  NSDictionary *v25; // x19
  _BOOL4 v27; // [xsp+1Ch] [xbp-F4h]
  _QWORD v28[9]; // [xsp+20h] [xbp-F0h] BYREF
  _QWORD v29[9]; // [xsp+68h] [xbp-A8h] BYREF

  serverState = (unsigned int)self->_serverState;
  if ( (_DWORD)serverState != 7 )
  {
    NSLog(
      &CFSTR("[ProcessManifest] Invalid State=%s\n").isa,
      -[iAUPServer serverStateString:](self, "serverStateString:", serverState, *(_QWORD *)&a4));
    return 0LL;
  }
  if ( a4 - 1 <= 3 )
  {
    NSLog(&CFSTR("%s: Invalid payload length=%d\n").isa, "-[iAUPServer processManifestProperties:length:]", a4);
    return 0LL;
  }
  v7 = bswap32(*(_DWORD *)(a3 + 1));
  v8 = (unsigned int)-[iAUPServerDelegate getWhitelistedPersonalizationFields](
                       self->_delegate,
                       "getWhitelistedPersonalizationFields");
  v9 = v7 & v8;
  if ( (~(v7 & v8) & 0x5F) != 0 )
  {
    NSLog(
      &CFSTR("%s: Invalid personalization properties from accessory = %08x\n").isa,
      "-[iAUPServer processManifestProperties:length:]",
      v7 & v8);
    return 0LL;
  }
  if ( a4 - 5 <= 3 )
  {
    NSLog(
      &CFSTR("%s: BoardId not present in remaining bytes=%d\n").isa,
      "-[iAUPServer processManifestProperties:length:]",
      a4 - 5);
    return 0LL;
  }
  v10 = bswap32(*(_DWORD *)(a3 + 5));
  if ( !(_DWORD)v10 )
  {
    NSLog(&CFSTR("%s: Invalid boardID = %d\n").isa, "-[iAUPServer processManifestProperties:length:]", 0LL);
    return 0LL;
  }
  if ( a4 - 9 <= 3 )
  {
    NSLog(
      &CFSTR("%s: ChipId not present in remaining bytes=%d\n").isa,
      "-[iAUPServer processManifestProperties:length:]",
      a4 - 9);
    return 0LL;
  }
  v11 = bswap32(*(_DWORD *)(a3 + 9));
  if ( !(_DWORD)v11 )
  {
    NSLog(&CFSTR("%s: Invalid chipID = %d\n").isa, "-[iAUPServer processManifestProperties:length:]", 0LL);
    return 0LL;
  }
  if ( a4 - 13 <= 7 )
  {
    NSLog(
      &CFSTR("%s: Ecid not present in remaining bytes=%d\n").isa,
      "-[iAUPServer processManifestProperties:length:]",
      a4 - 13);
    return 0LL;
  }
  v12 = bswap64(*(_QWORD *)(a3 + 13));
  if ( !v12 )
  {
    NSLog(&CFSTR("%s: Invalid ecID = %llu\n").isa, "-[iAUPServer processManifestProperties:length:]", 0LL);
    return 0LL;
  }
  if ( a4 == 21 )
  {
    NSLog(
      &CFSTR("%s: SecurityDomain not present in remaining bytes=%d\n").isa,
      "-[iAUPServer processManifestProperties:length:]",
      0LL);
    return 0LL;
  }
  if ( a4 == 22 )
  {
    NSLog(
      &CFSTR("%s: ProductionMode not present in remaining bytes=%d\n").isa,
      "-[iAUPServer processManifestProperties:length:]",
      0LL);
    return 0LL;
  }
  v13 = (unsigned __int8)a3[21];
  v14 = (unsigned __int8)a3[22];
  if ( (v9 & 0x20) != 0 )
  {
    if ( a4 == 23 )
    {
LABEL_46:
      NSLog(
        &CFSTR("%s: SecurityMode not present in remaining bytes=%d\n").isa,
        "-[iAUPServer processManifestProperties:length:]",
        0LL);
      return 0LL;
    }
    v15 = a3[23] != 0;
    v16 = 24;
  }
  else
  {
    v15 = 0;
    v16 = 23;
  }
  if ( a4 - v16 <= 0x1F )
  {
    NSLog(
      &CFSTR("%s: Nonce not present in remaining bytes=%d\n").isa,
      "-[iAUPServer processManifestProperties:length:]",
      a4 - v16);
    return 0LL;
  }
  v27 = v15;
  v17 = +[NSData dataWithBytes:length:](&OBJC_CLASS___NSData, "dataWithBytes:length:", &a3[v16], 32LL);
  if ( !v17 )
  {
    NSLog(&CFSTR("%s: Invalid nonce from accessory").isa, "-[iAUPServer processManifestProperties:length:]");
    return 0LL;
  }
  v18 = v17;
  v19 = v16 | 0x20LL;
  if ( (v9 & 0x80) != 0 )
  {
    if ( (_DWORD)v19 == a4 )
    {
      NSLog(
        &CFSTR("%s: ChipEpoch not present in remaining bytes=%d\n").isa,
        "-[iAUPServer processManifestProperties:length:]",
        0LL);
      return 0LL;
    }
    v22 = (unsigned __int8)a3[v19];
    LODWORD(v19) = v16 + 33;
    v20 = v22;
    if ( (v9 & 0x100) == 0 )
      goto LABEL_20;
    goto LABEL_23;
  }
  v20 = 0LL;
  if ( (v9 & 0x100) != 0 )
  {
LABEL_23:
    if ( (_DWORD)v19 != a4 )
    {
      v21 = a3[(unsigned int)v19] != 0;
      goto LABEL_25;
    }
    goto LABEL_46;
  }
LABEL_20:
  v21 = 0LL;
LABEL_25:
  v28[0] = CFSTR("BoardID");
  v29[0] = +[NSNumber numberWithUnsignedInt:](&OBJC_CLASS___NSNumber, "numberWithUnsignedInt:", v10);
  v28[1] = CFSTR("ChipID");
  v29[1] = +[NSNumber numberWithUnsignedInt:](&OBJC_CLASS___NSNumber, "numberWithUnsignedInt:", v11);
  v28[2] = CFSTR("ECID");
  v29[2] = +[NSNumber numberWithUnsignedLong:](&OBJC_CLASS___NSNumber, "numberWithUnsignedLong:", v12);
  v28[3] = CFSTR("securityDomain");
  v29[3] = +[NSNumber numberWithUnsignedInt:](&OBJC_CLASS___NSNumber, "numberWithUnsignedInt:", v13);
  v28[4] = CFSTR("productionMode");
  v29[4] = +[NSNumber numberWithBool:](&OBJC_CLASS___NSNumber, "numberWithBool:", v14 != 0);
  v28[5] = CFSTR("securityMode");
  if ( (v9 & 0x20) != 0 )
    v23 = +[NSNumber numberWithBool:](&OBJC_CLASS___NSNumber, "numberWithBool:", v27);
  else
    v23 = +[NSNull null](&OBJC_CLASS___NSNull, "null");
  v29[5] = v23;
  v29[6] = v18;
  v28[6] = CFSTR("nonceHash");
  v28[7] = CFSTR("chipEpoch");
  if ( (v9 & 0x80) != 0 )
    v24 = +[NSNumber numberWithUnsignedInt:](&OBJC_CLASS___NSNumber, "numberWithUnsignedInt:", v20);
  else
    v24 = +[NSNull null](&OBJC_CLASS___NSNull, "null");
  v29[7] = v24;
  v28[8] = CFSTR("enableMixMatch");
  v29[8] = +[NSNumber numberWithBool:](&OBJC_CLASS___NSNumber, "numberWithBool:", v21);
  v25 = +[NSDictionary dictionaryWithObjects:forKeys:count:](
          &OBJC_CLASS___NSDictionary,
          "dictionaryWithObjects:forKeys:count:",
          v29,
          v28,
          9LL);
  NSLog(&CFSTR("manifest infoDict from accessory: %@").isa, v25);
  return v25;
}