-[iAUPServer initInstanceWithByteEscape:]
id __cdecl -[iAUPServer initInstanceWithByteEscape:](iAUPServer *self, SEL a2, bool a3)
{
  char *v4; // x19
  objc_super v6; // [xsp+20h] [xbp-30h] BYREF

  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS___iAUPServer;
  v4 = -[iAUPServer init](&v6, "init");
  if ( v4 )
  {
    *((_QWORD *)v4 + 7) = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSMutableData), "initWithCapacity:", 32LL);
    *((_QWORD *)v4 + 1) = 0LL;
    *((_QWORD *)v4 + 4) = 0LL;
    v4[25] = a3;
    v4[26] = 0;
    *((_WORD *)v4 + 42) = 0;
    *(_WORD *)(v4 + 87) = 256;
    objc_msgSend(v4, "resetParser");
    objc_msgSend(v4, "setServerState:", 1LL);
    *((_DWORD *)v4 + 20) = 0;
    *((_DWORD *)v4 + 18) = 0;
    memset_pattern16(v4 + 64, &unk_1000293E0, 8uLL);
    NSLog(
      &CFSTR("%s(): iAUPServer init byteEscape=%d serverState=%s parserState=%s\n").isa,
      "-[iAUPServer initInstanceWithByteEscape:]",
      (unsigned __int8)v4[25],
      objc_msgSend(v4, "serverStateString:", *((unsigned int *)v4 + 4)),
      objc_msgSend(v4, "parserStateString:", *((unsigned int *)v4 + 5)));
  }
  return v4;
}