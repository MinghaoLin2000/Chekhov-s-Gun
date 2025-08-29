-[ipp_value_t initWithCoder:]
ipp_value_t *__cdecl -[ipp_value_t initWithCoder:](ipp_value_t *self, SEL a2, id a3)
{
  id v4; // x19
  ipp_value_t *v5; // x20
  __int64 v6; // x1
  Class Class; // x22
  __int64 v8; // x1
  __int64 v9; // x1
  NSArray *v10; // x23
  NSSet *v11; // x22
  NSObject *v12; // x0
  NSObject *x_payload; // x8
  objc_super v15; // [xsp+8h] [xbp-68h] BYREF
  _QWORD v16[4]; // [xsp+18h] [xbp-58h] BYREF

  v4 = objc_retain(a3);
  v15.receiver = self;
  v15.super_class = (Class)&OBJC_CLASS___ipp_value_t;
  v5 = -[ipp_value_t init](&v15, "init");
  if ( v5 )
  {
    Class = objc_getClass("PK_ipp_collection_t");
    if ( !Class )
      Class = (Class)objc_opt_class(&OBJC_CLASS___ipp_collection_t, v6);
    v16[0] = objc_opt_class(&OBJC_CLASS___NSArray, v6);
    v16[1] = objc_opt_class(&OBJC_CLASS___NSString, v8);
    v16[2] = objc_opt_class(&OBJC_CLASS___NSNumber, v9);
    v16[3] = Class;
    v10 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v16, 4LL));
    v11 = objc_retainAutoreleasedReturnValue(+[NSSet setWithArray:](&OBJC_CLASS___NSSet, "setWithArray:", v10));
    objc_release(v10);
    v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "decodeObjectOfClasses:forKey:", v11, CFSTR("_payload")));
    x_payload = v5->x_payload;
    v5->x_payload = v12;
    objc_release(x_payload);
    objc_release(v11);
  }
  objc_release(v4);
  return v5;
}