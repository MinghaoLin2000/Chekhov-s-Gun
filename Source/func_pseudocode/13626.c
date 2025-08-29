-[SFUDataRepresentation encodedLength]
// attributes: thunk
signed __int64 __cdecl -[SFUDataRepresentation encodedLength](SFUDataRepresentation *self, SEL a2)
{
  return -[SFUDataRepresentation dataLength](self, "dataLength");
}