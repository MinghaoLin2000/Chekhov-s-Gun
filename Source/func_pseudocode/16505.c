-[iAUPServer appendByteWithEscaping:toObject:]
unsigned __int8 __cdecl -[iAUPServer appendByteWithEscaping:toObject:](
        iAUPServer *self,
        SEL a2,
        unsigned __int8 a3,
        id *a4)
{
  unsigned __int8 v5; // w19
  _BYTE v7[2]; // [xsp+Dh] [xbp-13h] BYREF
  unsigned __int8 v8; // [xsp+Fh] [xbp-11h] BYREF

  v8 = a3;
  if ( (unsigned int)(a3 - 125) > 1 || !self->_byteEscape )
  {
    objc_msgSend(*a4, "appendBytes:length:", &v8, 1LL);
    return v8;
  }
  else
  {
    v5 = a3;
    v7[0] = 125;
    v7[1] = a3 ^ 0x20;
    objc_msgSend(*a4, "appendBytes:length:", v7, 2LL);
  }
  return v5;
}