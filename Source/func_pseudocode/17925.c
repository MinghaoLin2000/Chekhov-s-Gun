-[IKPTRecentsService pullOriginalImageNamed:reply:]
void __cdecl -[IKPTRecentsService pullOriginalImageNamed:reply:](IKPTRecentsService *self, SEL a2, id a3, id a4)
{
  void (__fastcall **v6)(id, NSData *); // x19
  id v7; // x23
  NSProcessInfo *v8; // x20
  void *v9; // x20
  id v10; // x21
  void *v11; // x22
  NSData *v12; // x21
  NSProcessInfo *v13; // x19
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v6 = (void (__fastcall **)(id, NSData *))objc_retain(a4);
  v7 = objc_retain(a3);
  v8 = objc_retainAutoreleasedReturnValue(+[NSProcessInfo processInfo](&OBJC_CLASS___NSProcessInfo, "processInfo"));
  -[NSProcessInfo disableSuddenTermination](v8, "disableSuddenTermination");
  objc_release(v8);
  -[IKPTRecentsService loadDatabaseIfNeeded](self, "loadDatabaseIfNeeded");
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "lastPathComponent"));
  objc_release(v7);
  v10 = objc_retainAutoreleasedReturnValue(-[IKPTRecentsService repositoryPath](self, "repositoryPath"));
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "stringByAppendingPathComponent:", v9));
  objc_release(v10);
  v12 = objc_retainAutoreleasedReturnValue(+[NSData dataWithContentsOfFile:](&OBJC_CLASS___NSData, "dataWithContentsOfFile:", v11));
  v6[2](v6, v12);
  objc_release(v6);
  v13 = objc_retainAutoreleasedReturnValue(+[NSProcessInfo processInfo](&OBJC_CLASS___NSProcessInfo, "processInfo"));
  -[NSProcessInfo enableSuddenTermination](v13, "enableSuddenTermination");
  objc_release(v13);
  objc_release(v12);
  objc_release(v11);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v9);
}