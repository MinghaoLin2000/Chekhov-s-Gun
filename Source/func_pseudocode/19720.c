-[platform_http_t sendSingleIPPRequest:]
id __cdecl -[platform_http_t sendSingleIPPRequest:](platform_http_t *self, SEL a2, const Real_IPP_Message *a3)
{
  platform_http_t *v4; // x20
  __int64 v5; // x1
  NSString *v6; // x0
  NSString *v7; // x21
  id v8; // x19
  _QWORD v10[6]; // [xsp+20h] [xbp-50h] BYREF
  __int64 vars8; // [xsp+78h] [xbp+8h]

  v4 = objc_retain(self);
  if ( object_isClass(v4) )
    v6 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "-[platform_http_t sendSingleIPPRequest:]"));
  else
    v6 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithFormat:](
             &OBJC_CLASS___NSString,
             "stringWithFormat:",
             CFSTR("%@<%p>: %s"),
             objc_opt_class(v4, v5),
             v4,
             "-[platform_http_t sendSingleIPPRequest:]"));
  v7 = v6;
  objc_release(v4);
  v10[0] = _NSConcreteStackBlock;
  v10[1] = 3254779904LL;
  v10[2] = sub_10000B668;
  v10[3] = &unk_100091288;
  v10[4] = v4;
  v10[5] = a3;
  v8 = objc_retainAutoreleasedReturnValue((id)sub_10000B518((int)v7, v10));
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}