-[NSCoder tsu_encodeColorSpace:forKey:]
void __cdecl -[NSCoder tsu_encodeColorSpace:forKey:](NSCoder *self, SEL a2, CGColorSpace *a3, id a4)
{
  id v6; // x21
  void *v7; // x19
  NSData *v8; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = objc_retain(a4);
  v7 = (void *)CGColorSpaceCopyPropertyList(a3);
  v8 = objc_retainAutoreleasedReturnValue(
         +[NSPropertyListSerialization dataWithPropertyList:format:options:error:](
           &OBJC_CLASS___NSPropertyListSerialization,
           "dataWithPropertyList:format:options:error:",
           v7,
           200LL,
           0LL,
           0LL));
  -[NSCoder encodeObject:forKey:](self, "encodeObject:forKey:", v8, v6);
  objc_release(v6);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}