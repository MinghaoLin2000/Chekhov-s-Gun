-[ipp_value_t resolution]
// local variable allocation has failed, the output may be wrong!
ipp_value_resolution_t __cdecl -[ipp_value_t resolution](ipp_value_t *self, SEL a2)
{
  NSObject *x_payload; // x20
  __int64 v4; // x0
  NSObject *v5; // x19
  void *v6; // x20
  unsigned int v7; // w21
  void *v8; // x22
  void *v9; // x23
  void *v10; // x25
  unsigned int v11; // w24
  __int64 v12; // x9
  __int64 v13; // x8
  int v14; // w1
  os_log_s *v15; // x20
  __int64 v16; // x0
  uint8_t v17[16]; // [xsp+0h] [xbp-50h] BYREF
  ipp_value_resolution_t result; // 0:x0.12

  x_payload = self->x_payload;
  v4 = objc_opt_class(&OBJC_CLASS___NSArray, a2);
  if ( (objc_opt_isKindOfClass(x_payload, v4) & 1) == 0 )
  {
LABEL_7:
    v13 = 0LL;
    v12 = 0LL;
    v14 = 0;
    goto LABEL_8;
  }
  v5 = objc_retain(self->x_payload);
  if ( -[NSObject count](v5, "count") != (void *)3 )
  {
    v15 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryFramework));
    if ( os_log_type_enabled(v15, OS_LOG_TYPE_ERROR) )
    {
      *(_WORD *)v17 = 0;
      _os_log_impl((void *)&_mh_execute_header, v15, OS_LOG_TYPE_ERROR, "invalid resolution object", v17, 2u);
    }
    objc_release(v15);
    objc_release(v5);
    goto LABEL_7;
  }
  v6 = objc_retainAutoreleasedReturnValue(-[NSObject objectAtIndexedSubscript:](v5, "objectAtIndexedSubscript:", 0LL));
  v7 = (unsigned int)objc_msgSend(v6, "integerValue");
  v8 = objc_retainAutoreleasedReturnValue(-[NSObject objectAtIndexedSubscript:](v5, "objectAtIndexedSubscript:", 1LL));
  v9 = objc_msgSend(v8, "integerValue");
  v10 = objc_retainAutoreleasedReturnValue(-[NSObject objectAtIndexedSubscript:](v5, "objectAtIndexedSubscript:", 2LL));
  v11 = (unsigned int)objc_msgSend(v10, "integerValue");
  objc_release(v10);
  objc_release(v8);
  objc_release(v6);
  objc_release(v5);
  v12 = (_QWORD)v9 << 32;
  v13 = v7;
  v14 = v11;
LABEL_8:
  v16 = v12 | v13;
  result.var0 = v16;
  result.var1 = HIDWORD(v16);
  result.var2 = v14;
  return result;
}