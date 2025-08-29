+[NSError tsp_ensureReadErrorWithError:]
id __cdecl +[NSError tsp_ensureReadErrorWithError:](id a1, SEL a2, id a3)
{
  id v4; // x0
  void *v5; // x19
  void *v6; // x21
  unsigned int v7; // w22
  void *v8; // x21
  NSErrorDomain v9; // x20
  unsigned __int8 v10; // w22
  NSError *v11; // x0
  NSError *v12; // x20
  NSDictionary *v13; // x22
  NSDictionary *v14; // x21
  NSErrorUserInfoKey v16; // [xsp+8h] [xbp-48h] BYREF
  void *v17; // [xsp+10h] [xbp-40h] BYREF
  NSErrorUserInfoKey v18; // [xsp+18h] [xbp-38h] BYREF
  void *v19; // [xsp+20h] [xbp-30h] BYREF
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = v4;
  if ( !v4 )
  {
    v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "tsp_unknownReadErrorWithUserInfo:", 0LL));
LABEL_13:
    v12 = v11;
    goto LABEL_17;
  }
  if ( objc_msgSend(v4, "code") != (void *)2 && objc_msgSend(v5, "code") != (void *)3 )
  {
    v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "domain"));
    v7 = (unsigned int)objc_msgSend(v6, "isEqualToString:", CFSTR("com.apple.iWork.TSPersistence"));
    objc_release(v6);
    if ( v7 )
      goto LABEL_12;
  }
  if ( (unsigned int)objc_msgSend(v5, "tsu_isCancelError") )
  {
    if ( objc_msgSend(v5, "code") != (void *)3072 )
    {
      v9 = NSCocoaErrorDomain;
LABEL_15:
      v18 = NSUnderlyingErrorKey;
      v19 = v5;
      v13 = objc_retainAutoreleasedReturnValue(
              +[NSDictionary dictionaryWithObjects:forKeys:count:](
                &OBJC_CLASS___NSDictionary,
                "dictionaryWithObjects:forKeys:count:",
                &v19,
                &v18,
                1LL));
      v12 = objc_retainAutoreleasedReturnValue(
              +[NSError errorWithDomain:code:userInfo:](
                &OBJC_CLASS___NSError,
                "errorWithDomain:code:userInfo:",
                v9,
                3072LL,
                v13));
      objc_release(v13);
      goto LABEL_17;
    }
    v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "domain"));
    v9 = NSCocoaErrorDomain;
    v10 = (unsigned __int8)objc_msgSend(v8, "isEqualToString:", NSCocoaErrorDomain);
    objc_release(v8);
    if ( (v10 & 1) == 0 )
      goto LABEL_15;
    goto LABEL_12;
  }
  if ( ((unsigned int)objc_msgSend(v5, "tsp_isReadError") & 1) != 0
    || ((unsigned int)objc_msgSend(v5, "tsp_isCorruptedError") & 1) != 0 )
  {
LABEL_12:
    v11 = objc_retain(v5);
    goto LABEL_13;
  }
  v16 = NSUnderlyingErrorKey;
  v17 = v5;
  v14 = objc_retainAutoreleasedReturnValue(
          +[NSDictionary dictionaryWithObjects:forKeys:count:](
            &OBJC_CLASS___NSDictionary,
            "dictionaryWithObjects:forKeys:count:",
            &v17,
            &v16,
            1LL));
  v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "tsp_unknownReadErrorWithUserInfo:", v14));
  objc_release(v14);
LABEL_17:
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v12);
}