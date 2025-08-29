-[ipp_attribute_t loggingDict]
id __cdecl -[ipp_attribute_t loggingDict](ipp_attribute_t *self, SEL a2)
{
  NSMutableArray *v3; // x0
  NSMutableArray *values; // x20
  NSMutableArray *v5; // x19
  __int64 group_tag; // x8
  const char *v7; // x2
  NSDictionary *v8; // x21
  NSString *v9; // x20
  __int64 value_tag; // x8
  const char *v11; // x2
  NSString *v12; // x22
  _QWORD v14[5]; // [xsp+8h] [xbp-98h] BYREF
  id v15; // [xsp+30h] [xbp-70h]
  _QWORD v16[4]; // [xsp+38h] [xbp-68h] BYREF
  _QWORD v17[4]; // [xsp+58h] [xbp-48h] BYREF
  __int64 vars8; // [xsp+A8h] [xbp+8h]

  if ( self->_value_tag )
  {
    v3 = objc_opt_new(&OBJC_CLASS___NSMutableArray);
    values = self->_values;
    v14[0] = _NSConcreteStackBlock;
    v14[1] = 3254779904LL;
    v14[2] = sub_10003B7AC;
    v14[3] = &unk_10009E7C8;
    v14[4] = self;
    v5 = objc_retain(v3);
    v15 = v5;
    -[NSMutableArray enumerateObjectsUsingBlock:](values, "enumerateObjectsUsingBlock:", v14);
    v17[0] = self->x_name;
    v16[0] = CFSTR("name");
    v16[1] = CFSTR("tagg");
    group_tag = self->_group_tag;
    if ( (int)group_tag > 74 )
      v7 = "UNKNOWN";
    else
      v7 = (const char *)-[__CFString UTF8String](objc_retainAutorelease(off_10009EB98[group_tag]), "UTF8String");
    v9 = objc_retainAutoreleasedReturnValue(+[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v7));
    v17[1] = v9;
    v16[2] = CFSTR("tagv");
    value_tag = self->_value_tag;
    if ( (int)value_tag > 74 )
      v11 = "UNKNOWN";
    else
      v11 = (const char *)-[__CFString UTF8String](objc_retainAutorelease(off_10009EB98[value_tag]), "UTF8String");
    v12 = objc_retainAutoreleasedReturnValue(+[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v11));
    v16[3] = CFSTR("vals");
    v17[2] = v12;
    v17[3] = v5;
    v8 = objc_retainAutoreleasedReturnValue(
           +[NSDictionary dictionaryWithObjects:forKeys:count:](
             &OBJC_CLASS___NSDictionary,
             "dictionaryWithObjects:forKeys:count:",
             v17,
             v16,
             4LL));
    objc_release(v12);
    objc_release(v9);
    objc_release(v15);
    objc_release(v5);
  }
  else
  {
    v8 = (NSDictionary *)&off_1000B4800;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}