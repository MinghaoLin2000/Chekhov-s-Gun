-[iAUPServer processInByte:]
void __cdecl -[iAUPServer processInByte:](iAUPServer *self, SEL a2, unsigned __int8 a3)
{
  unsigned int v3; // w20
  unsigned int parserState; // w20
  char *v6; // x0
  __int64 v7; // x2
  iAUPServer *v8; // x0
  int v9; // w8
  unsigned __int8 v10; // w8
  __int64 v11; // [xsp+8h] [xbp-38h]
  __int64 v12; // [xsp+10h] [xbp-30h]
  char v13; // [xsp+1Fh] [xbp-21h] BYREF
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v3 = a3;
  v13 = a3;
  if ( self->_byteEscape )
  {
    if ( a3 == 125 )
    {
      parserState = self->_parserState;
      v6 = -[iAUPServer parserStateString:](self, "parserStateString:", parserState);
      if ( parserState < 0xFFFFFFFE )
      {
        NSLog(&CFSTR("[Parser] escaping %s\n").isa, v6);
        self->_escapeInProgress = 1;
        return;
      }
      NSLog(&CFSTR("[Parser] Invalid StartByte in %s & byteEscape=YES\n").isa, v6);
      goto LABEL_29;
    }
    if ( self->_escapeInProgress )
    {
      if ( self->_parserState >= 0xFFFFFFFE )
      {
        NSLog(
          &CFSTR("[Parser] ??? %s when byteEscape=YES c=0x%02x\n").isa,
          -[iAUPServer parserStateString:](self, "parserStateString:"),
          a3);
LABEL_29:
        if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        -[iAUPServer resetParser](self, "resetParser");
        return;
      }
      NSLog(
        &CFSTR("[Parser] De-escaped [0x%02x -> 0x%02x] %s\n").isa,
        a3,
        a3 ^ 0x20u,
        -[iAUPServer parserStateString:](self, "parserStateString:"));
      v13 = v3 ^ 0x20;
      self->_escapeInProgress = 0;
      v3 ^= 0x20u;
    }
  }
  switch ( self->_parserState )
  {
    case 0xFFFFFFFC:
      self->_telegramChecksum += v3;
      v7 = self->_telegramLength | v3;
      self->_telegramLength = v7;
      v8 = self;
      goto LABEL_24;
    case 0xFFFFFFFD:
      self->_telegramChecksum = v3;
      self->_telegramLength = v3 << 8;
      v8 = self;
      v7 = 4294967292LL;
      goto LABEL_24;
    case 0xFFFFFFFE:
      if ( self->_byteEscape )
        v9 = 126;
      else
        v9 = 92;
      if ( v3 == v9 )
      {
        v8 = self;
        v7 = 4294967293LL;
        goto LABEL_24;
      }
      NSLog(
        &CFSTR("[Parser] Invalid 0x%02x byte in %s & byteEscape=%d\n").isa,
        v3,
        -[iAUPServer parserStateString:](self, "parserStateString:", 4294967294LL),
        self->_byteEscape);
      goto LABEL_29;
    case 0xFFFFFFFF:
      if ( self->_byteEscape )
      {
        NSLog(
          &CFSTR("[Parser] %s when byteEscaping=YES. Why?\n").isa,
          -[iAUPServer parserStateString:](self, "parserStateString:", 0xFFFFFFFFLL),
          v11,
          v12);
        goto LABEL_29;
      }
      if ( v3 != 255 )
      {
        NSLog(
          &CFSTR("[Parser] Invalid byte 0x%02x in %s\n").isa,
          v3,
          -[iAUPServer parserStateString:](self, "parserStateString:", 0xFFFFFFFFLL),
          v12);
        goto LABEL_29;
      }
      v8 = self;
      v7 = 4294967294LL;
LABEL_24:
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      -[iAUPServer setParserState:](v8, "setParserState:", v7);
      break;
    case 0:
      v10 = self->_telegramChecksum + v3;
      self->_telegramChecksum = v10;
      if ( v10 )
        NSLog(&CFSTR("[Parser] Invalid Checksum c=0x%02x\n").isa, v3, v11, v12);
      else
        -[iAUPServer processInTelegram](self, "processInTelegram");
      goto LABEL_29;
    default:
      -[NSMutableData appendBytes:length:](self->_telegramDataIn, "appendBytes:length:", &v13, 1LL);
      self->_telegramChecksum += v13;
      -[iAUPServer setParserState:](
        self,
        "setParserState:",
        (unsigned int)-[iAUPServer parserState](self, "parserState") - 1);
      return;
  }
}