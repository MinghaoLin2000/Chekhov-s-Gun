-[PAMediaConversionServiceResourceURLCollection fileSizeSummary]
id __cdecl -[PAMediaConversionServiceResourceURLCollection fileSizeSummary](
        PAMediaConversionServiceResourceURLCollection *self,
        SEL a2)
{
  NSMutableString *v3; // x19
  id v4; // x0
  NSMutableDictionary *urlReferencesByRole; // x20
  id v6; // x21
  void *v7; // x20
  _QWORD v9[4]; // [xsp+8h] [xbp-48h] BYREF
  id v10; // [xsp+28h] [xbp-28h]
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[NSMutableString stringWithString:](&OBJC_CLASS___NSMutableString, "stringWithString:", CFSTR("<")));
  v4 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  urlReferencesByRole = self->_urlReferencesByRole;
  v9[0] = _NSConcreteStackBlock;
  v9[1] = 3254779904LL;
  v9[2] = sub_100009578;
  v9[3] = &unk_100040F60;
  v10 = v4;
  v6 = objc_retain(v4);
  -[NSMutableDictionary enumerateKeysAndObjectsUsingBlock:](
    urlReferencesByRole,
    "enumerateKeysAndObjectsUsingBlock:",
    v9);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "componentsJoinedByString:", CFSTR("|")));
  -[NSMutableString appendString:](v3, "appendString:", v7);
  objc_release(v7);
  -[NSMutableString appendString:](v3, "appendString:", CFSTR(">"));
  objc_release(v10);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}