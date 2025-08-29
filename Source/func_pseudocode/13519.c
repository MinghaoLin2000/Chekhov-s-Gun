-[NSString tsu_stringByDeletingPathExtensionIfEqualTo:]
id __cdecl -[NSString tsu_stringByDeletingPathExtensionIfEqualTo:](NSString *self, SEL a2, id a3)
{
  id v4; // x21
  NSString *v5; // x19
  unsigned __int8 v6; // w22
  NSString *v7; // x0
  NSString *v8; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[NSString pathExtension](self, "pathExtension"));
  v6 = -[NSString isEqualToString:](v5, "isEqualToString:", v4);
  objc_release(v4);
  if ( (v6 & 1) != 0 )
    v7 = objc_retainAutoreleasedReturnValue(-[NSString stringByDeletingPathExtension](self, "stringByDeletingPathExtension"));
  else
    v7 = objc_retain(self);
  v8 = v7;
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}