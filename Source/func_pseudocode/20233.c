-[ipp_attribute_t initWithCoder:]
ipp_attribute_t *__cdecl -[ipp_attribute_t initWithCoder:](ipp_attribute_t *self, SEL a2, id a3)
{
  id v4; // x19
  ipp_attribute_t *v5; // x20
  __int64 v6; // x1
  void *v7; // x0
  void *v8; // x21
  NSString *v9; // x8
  NSString *x_name; // x0
  __int64 v11; // x1
  void *v12; // x22
  NSMutableArray *v13; // x0
  NSMutableArray *values; // x8
  objc_super v16; // [xsp+0h] [xbp-30h] BYREF

  v4 = objc_retain(a3);
  v16.receiver = self;
  v16.super_class = (Class)&OBJC_CLASS___ipp_attribute_t;
  v5 = -[ipp_attribute_t init](&v16, "init");
  if ( v5 )
  {
    v5->_group_tag = (unsigned int)objc_msgSend(v4, "decodeIntegerForKey:", CFSTR("_group_tag"));
    v5->_value_tag = (unsigned int)objc_msgSend(v4, "decodeIntegerForKey:", CFSTR("_value_tag"));
    v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "decodeObjectOfClass:forKey:", objc_opt_class(&OBJC_CLASS___NSString, v6), CFSTR("_name")));
    v8 = v7;
    if ( v7 )
    {
      v9 = objc_retainAutoreleasedReturnValue(internString((NSString *)v7));
      x_name = v5->x_name;
      v5->x_name = v9;
    }
    else
    {
      x_name = v5->x_name;
      v5->x_name = 0LL;
    }
    objc_release(x_name);
    v12 = objc_retainAutoreleasedReturnValue(
            objc_msgSend(
              v4,
              "decodeArrayOfObjectsOfClass:forKey:",
              objc_opt_class(&OBJC_CLASS___ipp_value_t, v11),
              CFSTR("_values")));
    v13 = (NSMutableArray *)objc_msgSend(v12, "mutableCopy");
    values = v5->_values;
    v5->_values = v13;
    objc_release(values);
    objc_release(v12);
    objc_release(v8);
  }
  objc_release(v4);
  return v5;
}