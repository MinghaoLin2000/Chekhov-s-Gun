-[NSString tsu_containsOnlyCharactersFromSet:]
bool __cdecl -[NSString tsu_containsOnlyCharactersFromSet:](NSString *self, SEL a2, id a3)
{
  void *v4; // x20
  void *v5; // x19

  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "invertedSet"));
  v5 = -[NSString rangeOfCharacterFromSet:](self, "rangeOfCharacterFromSet:", v4);
  objc_release(v4);
  return v5 == (void *)0x7FFFFFFFFFFFFFFFLL;
}