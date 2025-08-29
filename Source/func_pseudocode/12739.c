-[TSUExtendedAttributeCollection setExtendedAttributeValue:forName:]
void __cdecl -[TSUExtendedAttributeCollection setExtendedAttributeValue:forName:](
        TSUExtendedAttributeCollection *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x20
  const char *v8; // x0
  char *v9; // x22
  TSUExtendedAttribute *v10; // x23
  NSMutableDictionary *attributes; // x21
  void *v12; // x24
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = objc_retainAutorelease(objc_retain(a4));
  v8 = (const char *)objc_msgSend(v7, "UTF8String");
  if ( v8 )
  {
    v9 = xattr_name_without_flags(v8);
    v10 = -[TSUExtendedAttribute initWithName:value:](
            objc_alloc(&OBJC_CLASS___TSUExtendedAttribute),
            "initWithName:value:",
            v7,
            v6);
    attributes = self->_attributes;
    v12 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSString), "initWithUTF8String:", v9);
    -[NSMutableDictionary setObject:forKeyedSubscript:](attributes, "setObject:forKeyedSubscript:", v10, v12);
    objc_release(v12);
    objc_release(v10);
    free(v9);
  }
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}