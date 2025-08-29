-[job_spool_client_t PageRanges]
NSArray *__cdecl -[job_spool_client_t PageRanges](job_spool_client_t *self, SEL a2)
{
  NSArray *v2; // x19
  id v3; // x20
  id v4; // x21
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x0
  int v9; // w22
  signed int v10; // w0
  NSValue *v11; // x22
  NSArray *v12; // x23
  NSValue *v14; // [xsp+0h] [xbp-40h] BYREF
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[PKPrintSettings pageRanges](self->_printSettings, "pageRanges"));
  if ( (void *)-[NSArray count](v2, "count") == (void *)2 )
  {
    v3 = objc_retainAutoreleasedReturnValue(-[NSArray firstObject](v2, "firstObject"));
    v4 = objc_retainAutoreleasedReturnValue(-[NSArray lastObject](v2, "lastObject"));
    v6 = objc_opt_class(&OBJC_CLASS___NSNumber, v5);
    if ( (objc_opt_isKindOfClass(v3, v6) & 1) != 0 )
    {
      v8 = objc_opt_class(&OBJC_CLASS___NSNumber, v7);
      if ( (objc_opt_isKindOfClass(v4, v8) & 1) != 0 )
      {
        v9 = (unsigned int)objc_msgSend(v3, "intValue");
        v10 = (unsigned int)objc_msgSend(v4, "intValue");
        if ( v9 >= 1 && v10 >= v9 )
        {
          v11 = objc_retainAutoreleasedReturnValue(
                  +[NSValue valueWithRange:](
                    &OBJC_CLASS___NSValue,
                    "valueWithRange:",
                    (unsigned int)(v9 - 1),
                    v10 - v9 + 1));
          v14 = v11;
          v12 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", &v14, 1LL));
          objc_release(v2);
          objc_release(v11);
          v2 = v12;
        }
      }
    }
    objc_release(v4);
    objc_release(v3);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v2);
}