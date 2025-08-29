+[NSError tsu_errorWithDomain:code:alertTitle:alertMessage:userInfo:]
id __cdecl +[NSError tsu_errorWithDomain:code:alertTitle:alertMessage:userInfo:](
        id a1,
        SEL a2,
        id a3,
        signed __int64 a4,
        id a5,
        id a6,
        id a7)
{
  id v12; // x19
  id v13; // x20
  id v14; // x22
  id v15; // x24
  void *v16; // x0
  void *v17; // x25
  void *v18; // x21
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v12 = objc_retain(a3);
  v13 = objc_retain(a5);
  v14 = objc_retain(a6);
  v15 = objc_retain(a7);
  v16 = objc_msgSend(
          objc_alloc((Class)&OBJC_CLASS___NSMutableDictionary),
          "initWithCapacity:",
          (char *)objc_msgSend(v15, "count") + 4);
  v17 = v16;
  if ( v15 )
    objc_msgSend(v16, "addEntriesFromDictionary:", v15);
  if ( v13 )
  {
    objc_msgSend(v17, "setObject:forKeyedSubscript:", v13, NSLocalizedDescriptionKey);
    objc_msgSend(v17, "setObject:forKeyedSubscript:", v13, CFSTR("TSULocalizedErrorAlertTitle"));
  }
  if ( v14 )
  {
    objc_msgSend(v17, "setObject:forKeyedSubscript:", v14, NSLocalizedRecoverySuggestionErrorKey);
    objc_msgSend(v17, "setObject:forKeyedSubscript:", v14, CFSTR("TSULocalizedErrorAlertMessage"));
    objc_msgSend(v17, "setObject:forKeyedSubscript:", v14, NSLocalizedFailureReasonErrorKey);
  }
  v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "errorWithDomain:code:userInfo:", v12, a4, v17));
  objc_release(v17);
  objc_release(v15);
  objc_release(v14);
  objc_release(v13);
  objc_release(v12);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v18);
}