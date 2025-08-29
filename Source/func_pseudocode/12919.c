-[NSMutableDictionary tsu_objectForKey:withDefaultUsingBlock:]
id __cdecl -[NSMutableDictionary tsu_objectForKey:withDefaultUsingBlock:](
        NSMutableDictionary *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  __int64 (__fastcall **v7)(_QWORD); // x21
  id v8; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = (__int64 (__fastcall **)(_QWORD))objc_retain(a4);
  v8 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self, "objectForKeyedSubscript:", v6));
  if ( !v8 )
  {
    v8 = objc_retainAutoreleasedReturnValue((id)v7[2](v7));
    -[NSMutableDictionary setObject:forKeyedSubscript:](self, "setObject:forKeyedSubscript:", v8, v6);
  }
  objc_release(v7);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}