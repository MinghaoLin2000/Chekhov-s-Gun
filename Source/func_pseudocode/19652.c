-[IPPBrowseInfo printerSessionURL]
IPPURL *__cdecl -[IPPBrowseInfo printerSessionURL](IPPBrowseInfo *self, SEL a2)
{
  IPPBrowseInfo *v2; // x19
  __int64 v3; // x1
  NSString *v4; // x0
  NSString *v5; // x20
  id v6; // x19
  _QWORD v8[5]; // [xsp+18h] [xbp-48h] BYREF
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v2 = objc_retain(self);
  if ( object_isClass(v2) )
    v4 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "-[IPPBrowseInfo printerSessionURL]"));
  else
    v4 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithFormat:](
             &OBJC_CLASS___NSString,
             "stringWithFormat:",
             CFSTR("%@<%p>: %s"),
             objc_opt_class(v2, v3),
             v2,
             "-[IPPBrowseInfo printerSessionURL]"));
  v5 = v4;
  objc_release(v2);
  v8[0] = _NSConcreteStackBlock;
  v8[1] = 3254779904LL;
  v8[2] = sub_100006BC0;
  v8[3] = &unk_100090F68;
  v8[4] = v2;
  v6 = objc_retainAutoreleasedReturnValue((id)sub_100006A70((int)v5, v8));
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (IPPURL *)objc_autoreleaseReturnValue(v6);
}