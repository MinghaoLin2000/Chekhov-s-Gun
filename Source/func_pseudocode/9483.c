-[TSPDocumentProperties initWithFilePackageURL:zipArchive:allowMissingPropertyList:error:]
TSPDocumentProperties *__cdecl -[TSPDocumentProperties initWithFilePackageURL:zipArchive:allowMissingPropertyList:error:](
        TSPDocumentProperties *self,
        SEL a2,
        id a3,
        id a4,
        bool a5,
        id *a6)
{
  _BOOL4 v7; // w21
  id v10; // x19
  id v11; // x20
  __int64 v12; // x22
  void *v13; // x25
  NSString *v14; // x22
  NSString *v15; // x26
  TSPDocumentProperties *v16; // x0
  TSPDocumentProperties *v17; // x22
  void *v18; // x25
  void *v19; // x24
  void *v20; // x25
  __int64 v21; // x26
  id v22; // x27
  TSPDocumentProperties *v23; // x23
  objc_super v25; // [xsp+10h] [xbp-60h] BYREF

  v7 = a5;
  v10 = objc_retain(a3);
  v11 = objc_retain(a4);
  if ( !v11 )
  {
    v12 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D3538);
    v13 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016CB6C(v12, v13);
    v14 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSPDocumentProperties initWithFilePackageURL:zipArchive:allowMissingPropertyList:error:]"));
    v15 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPDocumentProperties.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v14,
      v15,
      145LL,
      0LL,
      "invalid nil value for '%{public}s'",
      "zipArchive");
    objc_release(v15);
    objc_release(v14);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  v25.receiver = self;
  v25.super_class = (Class)&OBJC_CLASS___TSPDocumentProperties;
  v16 = -[TSPDocumentProperties init](&v25, "init");
  v17 = v16;
  if ( v16 )
  {
    v18 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)objc_opt_class(v16), "documentPropertiesRelativePath"));
    v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "entryForName:", v18));
    objc_release(v18);
    v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "tsp_dataForEntry:", v19));
    if ( v20
      && (v21 = objc_opt_class(&OBJC_CLASS___NSDictionary),
          v22 = objc_retainAutoreleasedReturnValue(
                  +[NSPropertyListSerialization propertyListWithData:options:format:error:](
                    &OBJC_CLASS___NSPropertyListSerialization,
                    "propertyListWithData:options:format:error:",
                    v20,
                    0LL,
                    0LL,
                    a6)),
          v23 = (TSPDocumentProperties *)objc_retainAutoreleasedReturnValue((id)TSUDynamicCast(v21, v22)),
          objc_release(v22),
          v23) )
    {
      -[TSPDocumentProperties readDocumentPropertiesFromDictionary:](v17, "readDocumentPropertiesFromDictionary:", v23);
    }
    else
    {
      if ( v7 )
      {
        -[TSPDocumentProperties updateDocumentUUIDAndPreserveShareUUID:preserveStableDocumentUUID:](
          v17,
          "updateDocumentUUIDAndPreserveShareUUID:preserveStableDocumentUUID:",
          0LL,
          1LL);
LABEL_15:
        objc_release(v20);
        objc_release(v19);
        goto LABEL_16;
      }
      v23 = v17;
      v17 = 0LL;
    }
    objc_release(v23);
    goto LABEL_15;
  }
LABEL_16:
  objc_release(v11);
  objc_release(v10);
  return v17;
}