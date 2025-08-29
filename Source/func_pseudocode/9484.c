-[TSPDocumentProperties initWithPropertiesURL:error:]
TSPDocumentProperties *__cdecl -[TSPDocumentProperties initWithPropertiesURL:error:](
        TSPDocumentProperties *self,
        SEL a2,
        id a3,
        id *a4)
{
  id v6; // x19
  __int64 v7; // x22
  id v8; // x23
  id v9; // x21
  TSPDocumentProperties *v10; // x0
  TSPDocumentProperties *v11; // x22
  objc_super v13; // [xsp+0h] [xbp-40h] BYREF

  v6 = objc_retain(a3);
  v7 = objc_opt_class(&OBJC_CLASS___NSDictionary);
  v8 = objc_retainAutoreleasedReturnValue(
         +[NSPropertyListSerialization tsu_propertyListWithContentsOfURL:options:error:](
           &OBJC_CLASS___NSPropertyListSerialization,
           "tsu_propertyListWithContentsOfURL:options:error:",
           v6,
           0LL,
           a4));
  v9 = objc_retainAutoreleasedReturnValue((id)TSUDynamicCast(v7, v8));
  objc_release(v8);
  if ( v9 )
  {
    v13.receiver = self;
    v13.super_class = (Class)&OBJC_CLASS___TSPDocumentProperties;
    v10 = -[TSPDocumentProperties init](&v13, "init");
    v11 = v10;
    if ( v10 )
      -[TSPDocumentProperties readDocumentPropertiesFromDictionary:](v10, "readDocumentPropertiesFromDictionary:", v9);
  }
  else
  {
    objc_release(self);
    v11 = 0LL;
  }
  objc_release(v9);
  objc_release(v6);
  return v11;
}