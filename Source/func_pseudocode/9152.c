+[NSError tsp_recoverableErrorWithError:]
id __cdecl +[NSError tsp_recoverableErrorWithError:](id a1, SEL a2, id a3)
{
  id v4; // x0
  void *v5; // x19
  void *v6; // x20
  void *v7; // x24
  void *v8; // x21
  NSDictionary *v9; // x23
  void *v10; // x25
  void *v11; // x22
  const __CFString *v13; // [xsp+8h] [xbp-58h] BYREF
  void *v14; // [xsp+10h] [xbp-50h] BYREF
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = v4;
  if ( v4 )
  {
    v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "domain"));
    v7 = objc_msgSend(v5, "code");
    v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "userInfo"));
    v13 = CFSTR("TSPErrorIsRecoverable");
    v14 = &__kCFBooleanTrue;
    v9 = objc_retainAutoreleasedReturnValue(
           +[NSDictionary dictionaryWithObjects:forKeys:count:](
             &OBJC_CLASS___NSDictionary,
             "dictionaryWithObjects:forKeys:count:",
             &v14,
             &v13,
             1LL));
    v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "tsp_userInfoWithUserInfo:additionalUserInfo:", v8, v9));
    v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "errorWithDomain:code:userInfo:", v6, v7, v10));
    objc_release(v10);
    objc_release(v9);
    objc_release(v8);
    objc_release(v6);
  }
  else
  {
    v11 = 0LL;
  }
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v11);
}