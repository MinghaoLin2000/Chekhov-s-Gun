-[SFUFileDataRepresentation initWithPath:cryptoKey:dataLength:]
SFUFileDataRepresentation *__cdecl -[SFUFileDataRepresentation initWithPath:cryptoKey:dataLength:](
        SFUFileDataRepresentation *self,
        SEL a2,
        id a3,
        id a4,
        signed __int64 a5)
{
  return -[SFUFileDataRepresentation initWithPath:sharedFileDescriptor:cryptoKey:dataLength:](
           self,
           "initWithPath:sharedFileDescriptor:cryptoKey:dataLength:",
           a3,
           0xFFFFFFFFLL,
           a4,
           a5);
}