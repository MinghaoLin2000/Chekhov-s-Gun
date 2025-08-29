-[TSUNoCopyDictionary copyWithZone:]
// attributes: thunk
id __cdecl -[TSUNoCopyDictionary copyWithZone:](TSUNoCopyDictionary *self, SEL a2, _NSZone *a3)
{
  return -[TSUNoCopyDictionary mutableCopyWithZone:](self, "mutableCopyWithZone:", a3);
}