+[PAMediaConversionServiceSetCreationDateImageMetadataPolicy policyWithCreationDate:inTimeZone:]
id __cdecl +[PAMediaConversionServiceSetCreationDateImageMetadataPolicy policyWithCreationDate:inTimeZone:](
        id a1,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x22
  __int64 v8; // x1
  void *v9; // x20
  NSTimeZone *v10; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = objc_retain(a4);
  v7 = objc_retain(a3);
  v9 = (void *)objc_opt_new(a1, v8);
  objc_msgSend(v9, "setCreationDate:", v7);
  objc_release(v7);
  if ( v6 )
  {
    objc_msgSend(v9, "setTimeZone:", v6);
  }
  else
  {
    v10 = objc_retainAutoreleasedReturnValue(+[NSTimeZone defaultTimeZone](&OBJC_CLASS___NSTimeZone, "defaultTimeZone"));
    objc_msgSend(v9, "setTimeZone:", v10);
    objc_release(v10);
  }
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}