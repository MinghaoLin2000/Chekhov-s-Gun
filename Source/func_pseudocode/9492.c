+[TSPDocumentProperties documentUUIDAtURL:]
id __cdecl +[TSPDocumentProperties documentUUIDAtURL:](id a1, SEL a2, id a3)
{
  id v3; // x19
  void *v4; // x20
  _BOOL4 v5; // w21
  NSUUID *v6; // x20
  TSPDocumentProperties *v7; // x21
  _QWORD value[2]; // [xsp+8h] [xbp-38h] BYREF
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v3 = objc_retain(a3);
  value[0] = 0LL;
  value[1] = 0LL;
  v4 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "path")));
  v5 = getxattr((const char *)objc_msgSend(v4, "UTF8String"), "com.apple.iwork.documentUUID", value, 0x10uLL, 0, 0) == 16;
  objc_release(v4);
  if ( v5 )
  {
    v6 = (NSUUID *)objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSUUID), "initWithUUIDBytes:", value);
  }
  else
  {
    v7 = -[TSPDocumentProperties initWithDocumentURL:error:](
           objc_alloc(&OBJC_CLASS___TSPDocumentProperties),
           "initWithDocumentURL:error:",
           v3,
           0LL);
    v6 = objc_retainAutoreleasedReturnValue(-[TSPDocumentProperties documentUUID](v7, "documentUUID"));
    objc_release(v7);
  }
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}