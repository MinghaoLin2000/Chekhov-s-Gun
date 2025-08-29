-[ipp_collection_t initWithCoder:]
ipp_collection_t *__cdecl -[ipp_collection_t initWithCoder:](ipp_collection_t *self, SEL a2, id a3)
{
  id v4; // x19
  __int64 v5; // x1
  void *v6; // x21
  ipp_collection_t *v7; // x20
  objc_super v9; // [xsp+0h] [xbp-30h] BYREF

  v4 = objc_retain(a3);
  v6 = objc_retainAutoreleasedReturnValue(
         objc_msgSend(
           v4,
           "decodeArrayOfObjectsOfClass:forKey:",
           objc_opt_class(&OBJC_CLASS___ipp_attribute_t, v5),
           CFSTR("_attrs")));
  v9.receiver = self;
  v9.super_class = (Class)&OBJC_CLASS___ipp_collection_t;
  v7 = -[ipp_t _initWithAttrs:](&v9, "_initWithAttrs:", v6);
  objc_release(v6);
  objc_release(v4);
  return v7;
}