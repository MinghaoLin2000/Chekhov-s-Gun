+[NSError tsu_errorWithError:alertTitle:alertMessage:additionalUserInfo:]
id __cdecl +[NSError tsu_errorWithError:alertTitle:alertMessage:additionalUserInfo:](
        id a1,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6)
{
  id v10; // x19
  id v11; // x22
  id v12; // x23
  id v13; // x24
  void *v14; // x21
  void *v15; // x0
  void *v16; // x25
  void *v17; // x26
  void *v18; // x27
  void *v19; // x20
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v10 = objc_retain(a6);
  if ( a3 )
  {
    v11 = objc_retain(a5);
    v12 = objc_retain(a4);
    v13 = objc_retain(a3);
    v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "userInfo"));
    v15 = objc_msgSend(
            objc_alloc((Class)&OBJC_CLASS___NSMutableDictionary),
            "initWithCapacity:",
            (char *)objc_msgSend(v10, "count") + (_QWORD)objc_msgSend(v14, "count") + 1);
    v16 = v15;
    if ( v14 )
      objc_msgSend(v15, "addEntriesFromDictionary:", v14);
    if ( v10 )
      objc_msgSend(v16, "addEntriesFromDictionary:", v10);
    objc_msgSend(v16, "setObject:forKeyedSubscript:", v13, NSUnderlyingErrorKey);
    v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "domain"));
    v18 = objc_msgSend(v13, "code");
    objc_release(v13);
    v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "tsu_errorWithDomain:code:alertTitle:alertMessage:userInfo:", v17, v18, v12, v11, v16));
    objc_release(v11);
    objc_release(v12);
    objc_release(v17);
    objc_release(v16);
    objc_release(v14);
  }
  else
  {
    v19 = 0LL;
  }
  objc_release(v10);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v19);
}