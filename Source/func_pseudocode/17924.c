-[IKPTRecentsService pullRecentsWithReply:]
void __cdecl -[IKPTRecentsService pullRecentsWithReply:](IKPTRecentsService *self, SEL a2, id a3)
{
  void (__fastcall **v4)(id, NSMutableArray *, NSMutableDictionary *); // x21
  NSProcessInfo *v5; // x20
  NSProcessInfo *v6; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = (void (__fastcall **)(id, NSMutableArray *, NSMutableDictionary *))objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(+[NSProcessInfo processInfo](&OBJC_CLASS___NSProcessInfo, "processInfo"));
  -[NSProcessInfo disableSuddenTermination](v5, "disableSuddenTermination");
  objc_release(v5);
  -[IKPTRecentsService loadDatabaseIfNeeded](self, "loadDatabaseIfNeeded");
  v4[2](v4, self->_recents, self->_thumbnailData);
  objc_release(v4);
  v6 = objc_retainAutoreleasedReturnValue(+[NSProcessInfo processInfo](&OBJC_CLASS___NSProcessInfo, "processInfo"));
  -[NSProcessInfo enableSuddenTermination](v6, "enableSuddenTermination");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}