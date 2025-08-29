+[NSError tsp_ensureCorruptedDocumentErrorWithError:]
id __cdecl +[NSError tsp_ensureCorruptedDocumentErrorWithError:](id a1, SEL a2, id a3)
{
  id v4; // x0
  void *v5; // x19
  id v6; // x0
  void *v7; // x20
  NSDictionary *v8; // x21
  NSErrorUserInfoKey v10; // [xsp+8h] [xbp-38h] BYREF
  void *v11; // [xsp+10h] [xbp-30h] BYREF
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = v4;
  if ( !v4 )
  {
    v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "tsp_readCorruptedDocumentErrorWithUserInfo:", 0LL));
    goto LABEL_5;
  }
  if ( ((unsigned int)objc_msgSend(v4, "tsp_isCorruptedError") & 1) != 0 )
  {
    v6 = objc_retain(v5);
LABEL_5:
    v7 = v6;
    goto LABEL_7;
  }
  v10 = NSUnderlyingErrorKey;
  v11 = v5;
  v8 = objc_retainAutoreleasedReturnValue(
         +[NSDictionary dictionaryWithObjects:forKeys:count:](
           &OBJC_CLASS___NSDictionary,
           "dictionaryWithObjects:forKeys:count:",
           &v11,
           &v10,
           1LL));
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "tsp_readCorruptedDocumentErrorWithUserInfo:", v8));
  objc_release(v8);
LABEL_7:
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}