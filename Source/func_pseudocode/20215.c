-[ipp_value_t string]
// local variable allocation has failed, the output may be wrong!
ipp_value_string_t __cdecl -[ipp_value_t string](ipp_value_t *self, SEL a2)
{
  NSObject *x_payload; // x20
  __int64 v4; // x0
  NSObject *v5; // x20
  void *v6; // x0
  void *v7; // x19
  const __CFString *v8; // x21
  void *v9; // x0
  __CFString *v10; // x1
  ipp_value_string_t result; // 0:x0.16

  x_payload = self->x_payload;
  v4 = objc_opt_class(&OBJC_CLASS___NSArray, a2);
  if ( (objc_opt_isKindOfClass(x_payload, v4) & 1) != 0 )
  {
    v5 = objc_retain(self->x_payload);
    v6 = -[NSObject count](v5, "count");
    v7 = 0LL;
    if ( v6 != (void *)1 )
    {
      if ( v6 != (void *)2 )
      {
        v8 = &stru_1000A0688;
        goto LABEL_8;
      }
      v7 = objc_retainAutoreleasedReturnValue(-[NSObject objectAtIndexedSubscript:](v5, "objectAtIndexedSubscript:", 1LL));
    }
    v8 = objc_retainAutoreleasedReturnValue(-[NSObject objectAtIndexedSubscript:](v5, "objectAtIndexedSubscript:", 0LL));
LABEL_8:
    objc_release(v5);
    goto LABEL_9;
  }
  v7 = 0LL;
  v8 = &stru_1000A0688;
LABEL_9:
  v9 = v7;
  v10 = (__CFString *)v8;
  result.var1 = v10;
  result.var0 = v9;
  return result;
}