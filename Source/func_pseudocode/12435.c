-[NSNumber isFloatingPointType]
bool __cdecl -[NSNumber isFloatingPointType](NSNumber *self, SEL a2)
{
  return (*(_BYTE *)-[NSNumber objCType](self, "objCType") & 0xFD) == 100;
}