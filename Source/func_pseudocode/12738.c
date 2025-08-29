-[TSUExtendedAttributeCollection extendedAttributeForName:]
id __cdecl -[TSUExtendedAttributeCollection extendedAttributeForName:](
        TSUExtendedAttributeCollection *self,
        SEL a2,
        id a3)
{
  const char *v4; // x0
  char *v5; // x20
  NSMutableDictionary *attributes; // x19
  void *v7; // x21
  void *v8; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = (const char *)objc_msgSend(objc_retainAutorelease(a3), "UTF8String");
  if ( v4 )
  {
    v5 = xattr_name_without_flags(v4);
    attributes = self->_attributes;
    v7 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSString), "initWithUTF8String:", v5);
    v8 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](attributes, "objectForKeyedSubscript:", v7));
    objc_release(v7);
    free(v5);
  }
  else
  {
    v8 = 0LL;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}