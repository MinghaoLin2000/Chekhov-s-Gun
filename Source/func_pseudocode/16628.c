-[FirmwareBundle parseSRECLine:intoImage:]
void __cdecl -[FirmwareBundle parseSRECLine:intoImage:](FirmwareBundle *self, SEL a2, id a3, id a4)
{
  const char *v7; // x22
  int v8; // w24
  __int64 v9; // x23
  char v10; // w27
  const char *v11; // x21
  __int64 v12; // x25
  unsigned __int16 *v13; // x26
  char v14; // w8
  __int64 v15; // [xsp+0h] [xbp-180h]
  int v16; // [xsp+1Ch] [xbp-164h] BYREF
  unsigned __int16 v17; // [xsp+20h] [xbp-160h] BYREF
  _BYTE v18[6]; // [xsp+22h] [xbp-15Eh] BYREF

  v16 = 0;
  v7 = (const char *)objc_msgSend(a3, "cStringUsingEncoding:", 1LL);
  v8 = *((unsigned __int8 *)v7 + 1);
  sscanf(v7 + 2, "%02x", &v16);
  v9 = (unsigned __int8)v16;
  if ( (char *)objc_msgSend(a3, "length") - 4 == (_BYTE *)(2 * v9) )
  {
    v10 = v9;
    if ( (_DWORD)v9 )
    {
      v11 = v7 + 4;
      v12 = (unsigned int)(v9 - 1) + 1LL;
      v13 = &v17;
      v10 = v9;
      do
      {
        sscanf(v11, "%02x", &v16);
        v11 += 2;
        v14 = v16;
        *(_BYTE *)v13 = v16;
        v13 = (unsigned __int16 *)((char *)v13 + 1);
        v10 += v14;
        --v12;
      }
      while ( v12 );
    }
    if ( v10 == -1 )
    {
      if ( v8 != 48 && v8 != 57 )
      {
        if ( v8 == 49 )
        {
          if ( (unsigned int)v9 <= 2 )
            NSLog(&CFSTR("byte_count too low in parseSRECLine").isa, v15);
          else
            objc_msgSend(
              a4,
              "replaceBytesInRange:withBytes:",
              (unsigned __int16)(_byteswap_ushort(v17) - self->_firmwareImageBaseAddress),
              (int)v9 - 3,
              v18);
        }
        else
        {
          NSLog(&CFSTR("Unhandled SREC record type in parseSRECLine").isa, v15);
        }
      }
    }
    else
    {
      NSLog(&CFSTR("checksum failure in parseSRECLine").isa, v15);
    }
  }
  else
  {
    NSLog(
      &CFSTR("parseSRECLine: Invalid byte_count %d in SREC text_line (%lu)").isa,
      v9,
      (char *)objc_msgSend(a3, "length") - 4);
  }
}