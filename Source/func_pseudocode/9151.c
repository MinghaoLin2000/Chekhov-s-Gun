+[NSError tsp_userInfoWithUserInfo:additionalUserInfo:]
id __cdecl +[NSError tsp_userInfoWithUserInfo:additionalUserInfo:](id a1, SEL a2, id a3, id a4)
{
  id v5; // x19
  id v6; // x20
  void *v7; // x0
  void *v8; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = objc_retain(a3);
  v6 = objc_retain(a4);
  v7 = objc_msgSend(
         objc_alloc((Class)&OBJC_CLASS___NSMutableDictionary),
         "initWithCapacity:",
         (char *)objc_msgSend(v6, "count") + (_QWORD)objc_msgSend(v5, "count") + 1);
  v8 = v7;
  if ( v5 )
    objc_msgSend(v7, "addEntriesFromDictionary:", v5);
  if ( v6 )
    objc_msgSend(v8, "addEntriesFromDictionary:", v6);
  objc_msgSend(v8, "setObject:forKeyedSubscript:", &__kCFBooleanTrue, CFSTR("TSPErrorIsTSPError"));
  objc_release(v6);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}