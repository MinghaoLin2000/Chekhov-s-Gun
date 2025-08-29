-[TSPDocumentProperties initWithDocumentBundleURL:allowMissingPropertyList:error:]
TSPDocumentProperties *__cdecl -[TSPDocumentProperties initWithDocumentBundleURL:allowMissingPropertyList:error:](
        TSPDocumentProperties *self,
        SEL a2,
        id a3,
        bool a4,
        id *a5)
{
  _BOOL4 v6; // w22
  id v8; // x19
  TSPDocumentProperties *v9; // x0
  TSPDocumentProperties *v10; // x20
  void *v11; // x24
  void *v12; // x21
  id v13; // x23
  __int64 v14; // x0
  objc_super v16; // [xsp+0h] [xbp-40h] BYREF

  v6 = a4;
  v8 = objc_retain(a3);
  v16.receiver = self;
  v16.super_class = (Class)&OBJC_CLASS___TSPDocumentProperties;
  v9 = -[TSPDocumentProperties init](&v16, "init");
  v10 = v9;
  if ( v9 )
  {
    v11 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)objc_opt_class(v9), "documentPropertiesRelativePath"));
    v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "URLByAppendingPathComponent:isDirectory:", v11, 0LL));
    objc_release(v11);
    v13 = objc_retainAutoreleasedReturnValue(
            +[NSPropertyListSerialization tsu_propertyListWithContentsOfURL:options:error:](
              &OBJC_CLASS___NSPropertyListSerialization,
              "tsu_propertyListWithContentsOfURL:options:error:",
              v12,
              0LL,
              a5));
    if ( v13 )
    {
      v14 = objc_opt_class(&OBJC_CLASS___NSDictionary);
      if ( (objc_opt_isKindOfClass(v13, v14) & 1) != 0 )
      {
        -[TSPDocumentProperties readDocumentPropertiesFromDictionary:](
          v10,
          "readDocumentPropertiesFromDictionary:",
          v13);
LABEL_8:
        objc_release(v13);
        objc_release(v12);
        goto LABEL_9;
      }
    }
    else if ( v6 )
    {
      -[TSPDocumentProperties updateDocumentUUIDAndPreserveShareUUID:preserveStableDocumentUUID:](
        v10,
        "updateDocumentUUIDAndPreserveShareUUID:preserveStableDocumentUUID:",
        0LL,
        1LL);
      goto LABEL_8;
    }
    objc_release(v10);
    v10 = 0LL;
    goto LABEL_8;
  }
LABEL_9:
  objc_release(v8);
  return v10;
}