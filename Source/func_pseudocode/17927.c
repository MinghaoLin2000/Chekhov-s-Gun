-[IKPTRecentsService pushRecents:thumbnails:originalImagesInfo:reply:]
void __cdecl -[IKPTRecentsService pushRecents:thumbnails:originalImagesInfo:reply:](
        IKPTRecentsService *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6)
{
  void (__fastcall **v10)(_QWORD); // x19
  id v11; // x21
  id v12; // x22
  id v13; // x23
  NSProcessInfo *v14; // x24
  NSProcessInfo *v15; // x19
  _QWORD v16[5]; // [xsp+8h] [xbp-68h] BYREF

  v10 = (void (__fastcall **)(_QWORD))objc_retain(a6);
  v11 = objc_retain(a5);
  v12 = objc_retain(a4);
  v13 = objc_retain(a3);
  v14 = objc_retainAutoreleasedReturnValue(+[NSProcessInfo processInfo](&OBJC_CLASS___NSProcessInfo, "processInfo"));
  -[NSProcessInfo disableSuddenTermination](v14, "disableSuddenTermination");
  objc_release(v14);
  -[IKPTRecentsService saveDatabaseWithInfo:thumbnails:](self, "saveDatabaseWithInfo:thumbnails:", v13, v12);
  objc_release(v12);
  objc_release(v13);
  v16[0] = _NSConcreteStackBlock;
  v16[1] = 3254779904LL;
  v16[2] = sub_100001564;
  v16[3] = &unk_100004180;
  v16[4] = self;
  objc_msgSend(v11, "enumerateKeysAndObjectsUsingBlock:", v16);
  objc_release(v11);
  v10[2](v10);
  objc_release(v10);
  v15 = objc_retainAutoreleasedReturnValue(+[NSProcessInfo processInfo](&OBJC_CLASS___NSProcessInfo, "processInfo"));
  -[NSProcessInfo enableSuddenTermination](v15, "enableSuddenTermination");
  objc_release(v15);
}