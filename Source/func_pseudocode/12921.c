-[NSMutableDictionary tsu_setNonNilValueForKey:fromDictionary:]
void __cdecl -[NSMutableDictionary tsu_setNonNilValueForKey:fromDictionary:](
        NSMutableDictionary *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x21
  void *v7; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(a4, "objectForKeyedSubscript:", v6));
  -[NSMutableDictionary tsu_setNonNilObject:forKey:](self, "tsu_setNonNilObject:forKey:", v7, v6);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}