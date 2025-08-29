-[iAUPServer sendCommand:payload:payload_length:]
// local variable allocation has failed, the output may be wrong!
id __cdecl -[iAUPServer sendCommand:payload:payload_length:](
        iAUPServer *self,
        SEL a2,
        unsigned __int8 a3,
        char *a4,
        unsigned __int16 a5)
{
  __int64 v5; // x21
  __int64 v7; // x22
  void *v9; // x0
  void *v10; // x23
  char v11; // w8
  unsigned int v12; // w23
  unsigned int v13; // w23
  unsigned int v14; // w22
  unsigned int v15; // t1
  void *v16; // x19
  id v18; // [xsp+0h] [xbp-40h] BYREF
  char v19; // [xsp+Fh] [xbp-31h] BYREF

  LODWORD(v5) = a5;
  v7 = a3;
  -[iAUPServer logCommand:payload:length:](self, "logCommand:payload:length:");
  v9 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSMutableData), "initWithCapacity:", (unsigned int)(v5 + 4));
  v10 = v9;
  v18 = v9;
  if ( self->_byteEscape )
  {
    v11 = 126;
  }
  else
  {
    v19 = -1;
    objc_msgSend(v9, "appendBytes:length:", &v19, 1LL);
    v11 = 92;
  }
  v19 = v11;
  objc_msgSend(v10, "appendBytes:length:", &v19, 1LL, v18);
  v12 = -[iAUPServer appendByteWithEscaping:toObject:](
          self,
          "appendByteWithEscaping:toObject:",
          (unsigned __int8)((unsigned __int16)(v5 + 1) >> 8),
          &v18);
  v13 = -[iAUPServer appendByteWithEscaping:toObject:](
          self,
          "appendByteWithEscaping:toObject:",
          (unsigned __int8)(v5 + 1),
          &v18)
      + v12;
  v14 = v13 + -[iAUPServer appendByteWithEscaping:toObject:](self, "appendByteWithEscaping:toObject:", v7, &v18);
  if ( (_DWORD)v5 )
  {
    v5 = (unsigned int)v5;
    do
    {
      v15 = (unsigned __int8)*a4++;
      v14 += -[iAUPServer appendByteWithEscaping:toObject:](self, "appendByteWithEscaping:toObject:", v15, &v18);
      --v5;
    }
    while ( v5 );
  }
  -[iAUPServer appendByteWithEscaping:toObject:](
    self,
    "appendByteWithEscaping:toObject:",
    (unsigned __int8)-(char)v14,
    &v18);
  v16 = -[iAUPServerDelegate writeData:](self->_delegate, "writeData:", v18);
  objc_release(v18);
  return v16;
}