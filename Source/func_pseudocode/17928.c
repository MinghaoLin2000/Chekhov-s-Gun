-[IKPTRecentsService eraseRecents:reply:]
void __cdecl -[IKPTRecentsService eraseRecents:reply:](IKPTRecentsService *self, SEL a2, id a3, id a4)
{
  void (__fastcall **v6)(_QWORD); // x22
  id v7; // x19
  NSProcessInfo *v8; // x21
  NSProcessInfo *v9; // x19
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v6 = (void (__fastcall **)(_QWORD))objc_retain(a4);
  v7 = objc_retain(a3);
  v8 = objc_retainAutoreleasedReturnValue(+[NSProcessInfo processInfo](&OBJC_CLASS___NSProcessInfo, "processInfo"));
  -[NSProcessInfo disableSuddenTermination](v8, "disableSuddenTermination");
  objc_release(v8);
  -[IKPTRecentsService saveDatabaseByRemovingRecents:](self, "saveDatabaseByRemovingRecents:", v7);
  objc_release(v7);
  v6[2](v6);
  objc_release(v6);
  v9 = objc_retainAutoreleasedReturnValue(+[NSProcessInfo processInfo](&OBJC_CLASS___NSProcessInfo, "processInfo"));
  -[NSProcessInfo enableSuddenTermination](v9, "enableSuddenTermination");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v9);
}