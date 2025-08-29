-[NSDate p_stringWithString:lowercase:dateFormatter:]
id __cdecl -[NSDate p_stringWithString:lowercase:dateFormatter:](NSDate *self, SEL a2, id a3, bool a4, id a5)
{
  id v7; // x0
  void *v8; // x19
  void *v9; // x21
  id v10; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v7 = objc_retain(a3);
  v8 = v7;
  if ( a4 )
  {
    v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(a5, "locale"));
    v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "lowercaseStringWithLocale:", v9));
    objc_release(v9);
  }
  else
  {
    v10 = objc_retain(v7);
  }
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v10);
}