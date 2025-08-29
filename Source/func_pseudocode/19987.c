__Z16pwgCanonicalNameP8NSString
NSString *__fastcall pwgCanonicalName(NSString *a1)
{
  NSString *v1; // x19
  _QWORD *v2; // x0
  NSString *v3; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v1 = objc_retainAutorelease(objc_retain(a1));
  v2 = (_QWORD *)sub_100020F30(-[NSString UTF8String](v1, "UTF8String"), &stru_10009DF28);
  if ( v2 )
    v3 = objc_retainAutoreleasedReturnValue(+[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", *v2));
  else
    v3 = 0LL;
  objc_release(v1);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}