-[TSUExtendedAttributeCollection initWithAttributes:]
TSUExtendedAttributeCollection *__cdecl -[TSUExtendedAttributeCollection initWithAttributes:](
        TSUExtendedAttributeCollection *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  TSUExtendedAttributeCollection *v5; // x20
  NSMutableDictionary *v6; // x0
  NSMutableDictionary *attributes; // x8
  id v8; // x21
  void *v9; // x0
  void *v10; // x22
  __int64 v11; // x27
  void *i; // x19
  void *v13; // x23
  void *v14; // x24
  char *v15; // x25
  NSMutableDictionary *v16; // x24
  void *v17; // x26
  id v19; // [xsp+8h] [xbp-138h]
  __int128 v20; // [xsp+10h] [xbp-130h] BYREF
  __int128 v21; // [xsp+20h] [xbp-120h]
  __int128 v22; // [xsp+30h] [xbp-110h]
  __int128 v23; // [xsp+40h] [xbp-100h]
  objc_super v24; // [xsp+50h] [xbp-F0h] BYREF
  _BYTE v25[128]; // [xsp+60h] [xbp-E0h] BYREF

  v4 = objc_retain(a3);
  v24.receiver = self;
  v24.super_class = (Class)&OBJC_CLASS___TSUExtendedAttributeCollection;
  v5 = -[TSUExtendedAttributeCollection init](&v24, "init");
  if ( v5 )
  {
    v6 = (NSMutableDictionary *)objc_msgSend(
                                  objc_alloc((Class)&OBJC_CLASS___NSMutableDictionary),
                                  "initWithCapacity:",
                                  objc_msgSend(v4, "count"));
    attributes = v5->_attributes;
    v5->_attributes = v6;
    objc_release(attributes);
    v22 = 0u;
    v23 = 0u;
    v20 = 0u;
    v21 = 0u;
    v19 = v4;
    v8 = objc_retain(v4);
    v9 = objc_msgSend(v8, "countByEnumeratingWithState:objects:count:", &v20, v25, 16LL);
    if ( v9 )
    {
      v10 = v9;
      v11 = *(_QWORD *)v21;
      do
      {
        for ( i = 0LL; i != v10; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v21 != v11 )
            objc_enumerationMutation(v8);
          v13 = *(void **)(*((_QWORD *)&v20 + 1) + 8LL * (_QWORD)i);
          v14 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "name")));
          v15 = xattr_name_without_flags((const char *)objc_msgSend(v14, "UTF8String"));
          objc_release(v14);
          v16 = v5->_attributes;
          v17 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSString), "initWithUTF8String:", v15);
          -[NSMutableDictionary setObject:forKeyedSubscript:](v16, "setObject:forKeyedSubscript:", v13, v17);
          objc_release(v17);
          free(v15);
        }
        v10 = objc_msgSend(v8, "countByEnumeratingWithState:objects:count:", &v20, v25, 16LL);
      }
      while ( v10 );
    }
    objc_release(v8);
    v4 = v19;
  }
  objc_release(v4);
  return v5;
}