-[ipp_t debugDescription]
id __cdecl -[ipp_t debugDescription](ipp_t *self, SEL a2)
{
  id v2; // x19
  void *v3; // x21
  void *v4; // x20
  void *v5; // x21
  NSString *v6; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[ipp_t userCodableDictionary](self, "userCodableDictionary"));
  v3 = objc_retainAutoreleasedReturnValue(objc_msgSend(v2, "allKeys"));
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "firstObject"));
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v2, "objectForKeyedSubscript:", v4));
  v6 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("%@ { %@ }"), v4, v5));
  objc_release(v5);
  objc_release(v4);
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}