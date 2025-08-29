-[TSUZipArchive collapseCommonRootDirectory]
void __cdecl -[TSUZipArchive collapseCommonRootDirectory](TSUZipArchive *self, SEL a2)
{
  void *v3; // x20
  unsigned __int64 v4; // x9
  NSMutableDictionary *entriesMap; // x0
  NSString *v6; // x20
  NSUInteger v7; // x21
  void *v8; // x23
  void *v9; // x22
  NSMutableDictionary *v10; // x24
  NSMutableDictionary *v11; // x21
  NSMutableDictionary *v12; // x0
  _QWORD v13[4]; // [xsp+8h] [xbp-D8h] BYREF
  id v14; // [xsp+28h] [xbp-B8h]
  TSUZipArchive *v15; // [xsp+30h] [xbp-B0h]
  NSUInteger v16; // [xsp+38h] [xbp-A8h]
  _QWORD v17[6]; // [xsp+40h] [xbp-A0h] BYREF
  __int64 v18; // [xsp+70h] [xbp-70h] BYREF
  __int64 *v19; // [xsp+78h] [xbp-68h]
  __int64 v20; // [xsp+80h] [xbp-60h]
  __int64 (__fastcall *v21)(); // [xsp+88h] [xbp-58h]
  __int64 (__fastcall *v22)(); // [xsp+90h] [xbp-50h]
  id v23; // [xsp+98h] [xbp-48h]

  v18 = 0LL;
  v19 = &v18;
  v20 = 0x3032000000LL;
  v21 = sub_1001331F4;
  v22 = sub_100133204;
  v23 = 0LL;
  v3 = objc_autoreleasePoolPush();
  v4 = (self->_options >> 1) & 1 | 2;
  entriesMap = self->_entriesMap;
  v17[0] = _NSConcreteStackBlock;
  v17[1] = 3254779904LL;
  v17[2] = sub_10013320C;
  v17[3] = &unk_1001DD218;
  v17[4] = &v18;
  v17[5] = v4;
  -[NSMutableDictionary enumerateKeysAndObjectsUsingBlock:](entriesMap, "enumerateKeysAndObjectsUsingBlock:", v17);
  objc_autoreleasePoolPop(v3);
  if ( objc_msgSend((id)v19[5], "count") )
    v6 = objc_retainAutoreleasedReturnValue(+[NSString pathWithComponents:](&OBJC_CLASS___NSString, "pathWithComponents:", v19[5]));
  else
    v6 = 0LL;
  v7 = -[NSString length](v6, "length");
  if ( v7 )
  {
    v8 = objc_msgSend(
           objc_alloc((Class)&OBJC_CLASS___NSMutableDictionary),
           "initWithCapacity:",
           -[NSMutableDictionary count](self->_entriesMap, "count"));
    v9 = objc_autoreleasePoolPush();
    v10 = self->_entriesMap;
    v13[0] = _NSConcreteStackBlock;
    v13[1] = 3254779904LL;
    v13[2] = sub_100133400;
    v13[3] = &unk_1001DD248;
    v16 = v7;
    v11 = objc_retain(v8);
    v14 = v11;
    v15 = self;
    -[NSMutableDictionary enumerateKeysAndObjectsUsingBlock:](v10, "enumerateKeysAndObjectsUsingBlock:", v13);
    objc_release(v14);
    objc_autoreleasePoolPop(v9);
    v12 = self->_entriesMap;
    self->_entriesMap = v11;
    objc_release(v12);
  }
  objc_release(v6);
  _Block_object_dispose(&v18, 8);
  objc_release(v23);
}