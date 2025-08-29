-[TSPDocumentProperties writeToDocumentURL:writerBlock:error:]
bool __cdecl -[TSPDocumentProperties writeToDocumentURL:writerBlock:error:](
        TSPDocumentProperties *self,
        SEL a2,
        id a3,
        id a4,
        id *a5)
{
  __int64 (__fastcall **v7)(id, void *, void *); // x19
  id v8; // x20
  void *v9; // x23
  int v10; // w24
  NSUUID *v11; // x24
  NSString *v12; // x25
  NSData *v13; // x23
  void *v14; // x24
  char v15; // w22
  char v16; // w8

  v7 = (__int64 (__fastcall **)(id, void *, void *))objc_retain(a4);
  v8 = objc_retainAutoreleasedReturnValue(-[TSPDocumentProperties encodedPropertyListWithError:](self, "encodedPropertyListWithError:", a5));
  if ( v8
    && (v9 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)objc_opt_class(self), "documentPropertiesRelativePath")),
        v10 = v7[2](v7, v8, v9),
        objc_release(v9),
        v10) )
  {
    v11 = objc_retainAutoreleasedReturnValue(-[TSPDocumentProperties shareUUID](self, "shareUUID"));
    v12 = objc_retainAutoreleasedReturnValue(-[NSUUID UUIDString](v11, "UUIDString"));
    v13 = objc_retainAutoreleasedReturnValue(-[NSString dataUsingEncoding:](v12, "dataUsingEncoding:", 4LL));
    objc_release(v12);
    objc_release(v11);
    v14 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)objc_opt_class(self), "shareIdentifierRelativePath"));
    v15 = v7[2](v7, v13, v14);
    objc_release(v14);
    if ( a5 )
      v16 = v15;
    else
      v16 = 1;
    if ( (v16 & 1) == 0 )
      *a5 = objc_autorelease(
              objc_retainAutoreleasedReturnValue(
                +[NSError tsp_saveDocumentErrorWithUserInfo:](
                  &OBJC_CLASS___NSError,
                  "tsp_saveDocumentErrorWithUserInfo:",
                  0LL)));
    objc_release(v13);
  }
  else
  {
    v15 = 0;
  }
  objc_release(v8);
  objc_release(v7);
  return v15;
}