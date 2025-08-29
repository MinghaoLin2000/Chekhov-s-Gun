-[NSCoder tsu_decodeColorSpaceForKey:]
id __cdecl -[NSCoder tsu_decodeColorSpaceForKey:](NSCoder *self, SEL a2, id a3)
{
  id v4; // x21
  id v5; // x19
  id v6; // x21
  CGColorSpaceRef v7; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(
         -[NSCoder decodeObjectOfClass:forKey:](
           self,
           "decodeObjectOfClass:forKey:",
           objc_opt_class(&OBJC_CLASS___NSData),
           v4));
  objc_release(v4);
  if ( v5 )
  {
    v6 = objc_retainAutoreleasedReturnValue(
           +[NSPropertyListSerialization propertyListWithData:options:format:error:](
             &OBJC_CLASS___NSPropertyListSerialization,
             "propertyListWithData:options:format:error:",
             v5,
             0LL,
             0LL,
             0LL));
    v7 = CGColorSpaceCreateWithPropertyList(v6);
    objc_release(v6);
  }
  else
  {
    v7 = 0LL;
  }
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}