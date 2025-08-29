+[NSError tsu_userInfoWithErrorType:userInfo:]
id __cdecl +[NSError tsu_userInfoWithErrorType:userInfo:](id a1, SEL a2, signed __int64 a3, id a4)
{
  id v5; // x19
  void *v6; // x0
  void *v7; // x21
  NSNumber *v8; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = objc_retain(a4);
  v6 = objc_msgSend(
         objc_alloc((Class)&OBJC_CLASS___NSMutableDictionary),
         "initWithCapacity:",
         (char *)objc_msgSend(v5, "count") + 1);
  v7 = v6;
  if ( v5 )
    objc_msgSend(v6, "addEntriesFromDictionary:", v5);
  v8 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithInteger:](&OBJC_CLASS___NSNumber, "numberWithInteger:", a3));
  objc_msgSend(v7, "setObject:forKeyedSubscript:", v8, CFSTR("TSUIOErrorType"));
  objc_release(v8);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}