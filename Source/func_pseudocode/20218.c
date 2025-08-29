-[ipp_value_t range]
ipp_value_range_t __cdecl -[ipp_value_t range](ipp_value_t *self, SEL a2)
{
  __int64 v2; // x8
  __int64 v4; // x20
  NSObject *x_payload; // x21
  __int64 v6; // x0
  ipp_value_range_t isKindOfClass; // x0
  NSObject *v8; // x19
  void *v9; // x21
  unsigned int v10; // w22
  void *v11; // x23
  unsigned int v12; // w0
  os_log_s *v13; // x21
  uint8_t v14[16]; // [xsp+0h] [xbp-40h] BYREF
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v4 = v2;
  x_payload = self->x_payload;
  v6 = objc_opt_class(&OBJC_CLASS___NSArray, a2);
  isKindOfClass = (ipp_value_range_t)objc_opt_isKindOfClass(x_payload, v6);
  if ( (isKindOfClass.var0 & 1) == 0 )
  {
LABEL_9:
    *(_QWORD *)v4 = 0LL;
    return isKindOfClass;
  }
  v8 = objc_retain(self->x_payload);
  if ( -[NSObject count](v8, "count") != (void *)2 )
  {
    v13 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryFramework));
    if ( os_log_type_enabled(v13, OS_LOG_TYPE_ERROR) )
    {
      *(_WORD *)v14 = 0;
      _os_log_impl((void *)&_mh_execute_header, v13, OS_LOG_TYPE_ERROR, "invalid range object", v14, 2u);
    }
    objc_release(v13);
    objc_release(v8);
    goto LABEL_9;
  }
  v9 = objc_retainAutoreleasedReturnValue(-[NSObject objectAtIndexedSubscript:](v8, "objectAtIndexedSubscript:", 0LL));
  v10 = (unsigned int)objc_msgSend(v9, "integerValue");
  v11 = objc_retainAutoreleasedReturnValue(-[NSObject objectAtIndexedSubscript:](v8, "objectAtIndexedSubscript:", 1LL));
  v12 = (unsigned int)objc_msgSend(v11, "integerValue");
  *(_DWORD *)v4 = v10;
  *(_DWORD *)(v4 + 4) = v12;
  objc_release(v11);
  objc_release(v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v8);
  return isKindOfClass;
}