_TSUArrayDescription
NSString *__fastcall TSUArrayDescription(void *a1)
{
  id v1; // x19
  TSUDescription *v2; // x20
  unsigned __int64 v3; // x21
  NSString *v4; // x24
  void *v5; // x25
  NSString *v6; // x21
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v1 = objc_retain(a1);
  v2 = objc_retainAutoreleasedReturnValue(
         +[TSUDescription descriptionWithObject:format:](
           &OBJC_CLASS___TSUDescription,
           "descriptionWithObject:format:",
           v1,
           CFSTR("; count=%lu"),
           objc_msgSend(v1, "count")));
  if ( objc_msgSend(v1, "count") )
  {
    v3 = 0LL;
    do
    {
      v4 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("[%lu]"), v3));
      v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v1, "objectAtIndexedSubscript:", v3));
      -[TSUDescription addField:format:](v2, "addField:format:", v4, CFSTR("%@"), v5);
      objc_release(v5);
      objc_release(v4);
      ++v3;
    }
    while ( v3 < (unsigned __int64)objc_msgSend(v1, "count") );
  }
  -[TSUDescription setFieldOptionCommaSeparated](v2, "setFieldOptionCommaSeparated");
  v6 = objc_retainAutoreleasedReturnValue(-[TSUDescription descriptionString](v2, "descriptionString"));
  objc_release(v2);
  objc_release(v1);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}