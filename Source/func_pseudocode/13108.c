-[SFUFileDataRepresentation isReadable]
bool __cdecl -[SFUFileDataRepresentation isReadable](SFUFileDataRepresentation *self, SEL a2)
{
  return -[SFUFileDataRepresentation path](self, "path") != 0LL;
}