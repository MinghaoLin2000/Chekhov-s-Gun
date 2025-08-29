-[PAMediaConversionServiceResourceURLCollection filenameExtensionAndPathHashForRole:]
id __cdecl -[PAMediaConversionServiceResourceURLCollection filenameExtensionAndPathHashForRole:](
        PAMediaConversionServiceResourceURLCollection *self,
        SEL a2,
        id a3)
{
  void *v3; // x0
  void *v4; // x19
  id v5; // x21
  void *v6; // x22
  NSString *v7; // x20
  id v9; // [xsp+10h] [xbp-30h] BYREF
  __int64 v10; // [xsp+18h] [xbp-28h] BYREF
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_urlReferencesByRole, "objectForKeyedSubscript:", a3));
  v4 = v3;
  if ( v3 )
  {
    v9 = 0LL;
    v10 = 0LL;
    objc_msgSend(v3, "getPathHash:lastPathComponent:", &v10, &v9);
    v5 = objc_retain(v9);
    v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "pathExtension"));
    v7 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("%@|%lx"), v6, v10));
    objc_release(v6);
    objc_release(v5);
  }
  else
  {
    v7 = 0LL;
  }
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}