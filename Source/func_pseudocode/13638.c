-[SFUDataRepresentation readIntoData:]
unsigned __int64 __cdecl -[SFUDataRepresentation readIntoData:](SFUDataRepresentation *self, SEL a2, id a3)
{
  _BYTE *v5; // x20
  id v6; // x21
  void *v7; // x3
  __int64 i; // [xsp+8h] [xbp-48h] BYREF

  v5 = objc_msgSend(a3, "length");
  v6 = -[SFUDataRepresentation bufferedInputStream](self, "bufferedInputStream");
  for ( i = 0LL; ; objc_msgSend(a3, "appendBytes:length:", i, v7) )
  {
    v7 = objc_msgSend(v6, "readToOwnBuffer:size:", &i, -1LL);
    if ( !v7 )
      break;
  }
  objc_msgSend(v6, "close");
  return (_BYTE *)objc_msgSend(a3, "length") - v5;
}