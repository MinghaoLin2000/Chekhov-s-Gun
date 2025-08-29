-[NSError tsu_errorPreservingCancel]
id __cdecl -[NSError tsu_errorPreservingCancel](NSError *self, SEL a2)
{
  NSError *v2; // x19
  NSString *v3; // x21
  NSErrorDomain v4; // x20
  unsigned __int8 v5; // w22
  void *v6; // x21
  NSDictionary *v7; // x22
  NSError *v8; // x20
  NSErrorUserInfoKey v10; // [xsp+8h] [xbp-38h] BYREF
  NSError *v11; // [xsp+10h] [xbp-30h] BYREF
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v2 = objc_retain(self);
  if ( -[NSError tsu_isCancelError](v2, "tsu_isCancelError") )
  {
    if ( (void *)-[NSError code](v2, "code") == (void *)3072 )
    {
      v3 = objc_retainAutoreleasedReturnValue(-[NSError domain](v2, "domain"));
      v4 = NSCocoaErrorDomain;
      v5 = -[NSString isEqualToString:](v3, "isEqualToString:", NSCocoaErrorDomain);
      objc_release(v3);
      if ( (v5 & 1) != 0 )
        goto LABEL_7;
    }
    else
    {
      v4 = NSCocoaErrorDomain;
    }
    v6 = (void *)objc_opt_class(v2);
    v10 = NSUnderlyingErrorKey;
    v11 = v2;
    v7 = objc_retainAutoreleasedReturnValue(
           +[NSDictionary dictionaryWithObjects:forKeys:count:](
             &OBJC_CLASS___NSDictionary,
             "dictionaryWithObjects:forKeys:count:",
             &v11,
             &v10,
             1LL));
    v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "errorWithDomain:code:userInfo:", v4, 3072LL, v7));
    objc_release(v2);
    objc_release(v7);
    v2 = v8;
  }
LABEL_7:
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v2);
}