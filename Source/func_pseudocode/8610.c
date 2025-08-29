_xpc_to_foundation
NSMutableArray *__fastcall xpc_to_foundation(void *a1)
{
  id v1; // x19
  xpc_type_t type; // x0
  NSNumber *v3; // x0
  NSMutableArray *v4; // x20
  id v5; // x0
  int64_t value; // x21
  unsigned int v7; // w8
  double v8; // d0
  _QWORD v10[4]; // [xsp+0h] [xbp-70h] BYREF
  NSMutableArray *v11; // [xsp+20h] [xbp-50h]
  _QWORD applier[4]; // [xsp+28h] [xbp-48h] BYREF
  id v13; // [xsp+48h] [xbp-28h]
  __int64 vars8; // [xsp+78h] [xbp+8h]

  v1 = objc_retain(a1);
  type = xpc_get_type(v1);
  if ( type == (xpc_type_t)&_xpc_type_array )
  {
    applier[0] = _NSConcreteStackBlock;
    applier[1] = 3254779904LL;
    applier[2] = sub_1000075C0;
    applier[3] = &unk_10000C548;
    v4 = objc_retain(
           objc_retainAutoreleasedReturnValue(
             +[NSMutableArray arrayWithCapacity:](
               &OBJC_CLASS___NSMutableArray,
               "arrayWithCapacity:",
               xpc_array_get_count(v1))));
    v13 = v4;
    xpc_array_apply(v1, applier);
    v5 = v13;
    goto LABEL_11;
  }
  if ( type != (xpc_type_t)&_xpc_type_bool )
  {
    if ( type == (xpc_type_t)&_xpc_type_date )
    {
      value = xpc_date_get_value(v1);
      v7 = dword_100011C34;
      if ( !dword_100011C34 )
      {
        mach_timebase_info((mach_timebase_info_t)&dword_100011C30);
        v7 = dword_100011C34;
      }
      v8 = (double)(value * (unsigned __int64)(unsigned int)dword_100011C30 / v7) / 1000000000.0;
LABEL_18:
      v3 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithDouble:](&OBJC_CLASS___NSNumber, "numberWithDouble:", v8));
      goto LABEL_19;
    }
    if ( type != (xpc_type_t)&_xpc_type_dictionary )
    {
      if ( type != (xpc_type_t)&_xpc_type_double )
      {
        if ( type == (xpc_type_t)&_xpc_type_int64 )
        {
          v3 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithLongLong:](&OBJC_CLASS___NSNumber, "numberWithLongLong:", xpc_int64_get_value(v1)));
        }
        else if ( type == (xpc_type_t)&_xpc_type_string )
        {
          v3 = objc_retainAutoreleasedReturnValue(
                 +[NSString stringWithUTF8String:](
                   &OBJC_CLASS___NSString,
                   "stringWithUTF8String:",
                   xpc_string_get_string_ptr(v1)));
        }
        else if ( type == (xpc_type_t)&_xpc_type_uint64 )
        {
          v3 = objc_retainAutoreleasedReturnValue(
                 +[NSNumber numberWithUnsignedLongLong:](
                   &OBJC_CLASS___NSNumber,
                   "numberWithUnsignedLongLong:",
                   xpc_uint64_get_value(v1)));
        }
        else
        {
          v3 = objc_retainAutoreleasedReturnValue(+[NSNull null](&OBJC_CLASS___NSNull, "null"));
        }
        goto LABEL_19;
      }
      v8 = xpc_double_get_value(v1);
      goto LABEL_18;
    }
    v10[0] = _NSConcreteStackBlock;
    v10[1] = 3254779904LL;
    v10[2] = sub_10000762C;
    v10[3] = &unk_10000C578;
    v4 = objc_retain(
           objc_retainAutoreleasedReturnValue(
             +[NSMutableDictionary dictionaryWithCapacity:](
               &OBJC_CLASS___NSMutableDictionary,
               "dictionaryWithCapacity:",
               xpc_dictionary_get_count(v1))));
    v11 = v4;
    xpc_dictionary_apply(v1, v10);
    v5 = v11;
LABEL_11:
    objc_release(v5);
    goto LABEL_20;
  }
  v3 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithBool:](&OBJC_CLASS___NSNumber, "numberWithBool:", xpc_bool_get_value(v1)));
LABEL_19:
  v4 = (NSMutableArray *)v3;
LABEL_20:
  objc_release(v1);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}