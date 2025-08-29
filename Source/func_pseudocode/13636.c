-[SFUDataRepresentation xmlReaderForGzippedDataWithInputStream:]
_xmlTextReader *__cdecl -[SFUDataRepresentation xmlReaderForGzippedDataWithInputStream:](
        SFUDataRepresentation *self,
        SEL a2,
        id *a3)
{
  id v4; // x20
  char v5; // w21
  SFUZipInflateInputStream *v6; // x0
  int v8; // w22
  unsigned __int16 v9; // [xsp+Ch] [xbp-34h] BYREF
  _BYTE v10[3]; // [xsp+Eh] [xbp-32h] BYREF
  char v11; // [xsp+11h] [xbp-2Fh]

  v4 = -[SFUDataRepresentation inputStream](self, "inputStream");
  if ( objc_msgSend(v4, "readToBuffer:size:", v10, 10LL) != (void *)10 )
    return 0LL;
  v5 = v11;
  if ( (v11 & 4) != 0 )
  {
    v9 = 0;
    if ( objc_msgSend(v4, "readToBuffer:size:", &v9, 2LL) != (void *)2 )
      return 0LL;
    if ( v9 )
    {
      v8 = 0;
      while ( objc_msgSend(v4, "readToBuffer:size:", v10, 1LL) == (void *)1 )
      {
        if ( ++v8 >= (unsigned int)v9 )
          goto LABEL_3;
      }
      return 0LL;
    }
  }
LABEL_3:
  if ( (v5 & 8) != 0 )
  {
    v10[0] = 1;
    while ( objc_msgSend(v4, "readToBuffer:size:", v10, 1LL) == (void *)1 )
    {
      if ( !v10[0] )
        goto LABEL_7;
    }
    return 0LL;
  }
LABEL_7:
  if ( (v5 & 0x10) != 0 )
  {
    v10[0] = 1;
    while ( objc_msgSend(v4, "readToBuffer:size:", v10, 1LL) == (void *)1 )
    {
      if ( !v10[0] )
        goto LABEL_11;
    }
    return 0LL;
  }
LABEL_11:
  if ( (v5 & 2) != 0 && objc_msgSend(v4, "readToBuffer:size:", v10, 2LL) != (void *)2 )
    return 0LL;
  v6 = -[SFUZipInflateInputStream initWithInput:](
         objc_alloc(&OBJC_CLASS___SFUZipInflateInputStream),
         "initWithInput:",
         v4);
  if ( a3 )
    *a3 = v6;
  return xmlReaderForIO((xmlInputReadCallback)sub_10016665C, (xmlInputCloseCallback)sub_10016680C, v6, 0LL, 0LL, 0);
}