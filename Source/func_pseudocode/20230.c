-[ipp_attribute_t initWithName:group:value:]
ipp_attribute_t *__cdecl -[ipp_attribute_t initWithName:group:value:](
        ipp_attribute_t *self,
        SEL a2,
        id a3,
        int a4,
        int a5)
{
  NSString *v8; // x19
  ipp_attribute_t *v9; // x0
  ipp_attribute_t *v10; // x20
  NSString *v11; // x8
  NSString *x_name; // x0
  NSMutableArray *v13; // x0
  NSMutableArray *values; // x8
  objc_super v16; // [xsp+0h] [xbp-30h] BYREF

  v8 = (NSString *)objc_retain(a3);
  v16.receiver = self;
  v16.super_class = (Class)&OBJC_CLASS___ipp_attribute_t;
  v9 = -[ipp_attribute_t init](&v16, "init");
  v10 = v9;
  if ( v9 )
  {
    v9->_group_tag = a4;
    v9->_value_tag = a5;
    if ( v8 )
    {
      v11 = objc_retainAutoreleasedReturnValue(internString(v8));
      x_name = v10->x_name;
      v10->x_name = v11;
    }
    else
    {
      x_name = v9->x_name;
      v10->x_name = 0LL;
    }
    objc_release(x_name);
    v13 = objc_opt_new(&OBJC_CLASS___NSMutableArray);
    values = v10->_values;
    v10->_values = v13;
    objc_release(values);
  }
  objc_release(v8);
  return v10;
}