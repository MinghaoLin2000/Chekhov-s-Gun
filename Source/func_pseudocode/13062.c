-[TSUNoCopyDictionary setObject:forKey:]
// attributes: thunk
void __cdecl -[TSUNoCopyDictionary setObject:forKey:](TSUNoCopyDictionary *self, SEL a2, id a3, id a4)
{
  -[TSUNoCopyDictionary setObject:forUncopiedKey:](self, "setObject:forUncopiedKey:", a3, a4);
}