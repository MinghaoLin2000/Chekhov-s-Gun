_$s025com_apple_AppStoreDaemon_D9UIService20ViewPresentationTaskCfD
id __fastcall ViewPresentationTask.__deallocating_deinit(__int64 a1, __int64 a2)
{
  void *v2; // x20
  objc_super v4; // [xsp+0h] [xbp-10h] BYREF

  v4.receiver = v2;
  v4.super_class = (Class)swift_getObjectType(v2, a2);
  return objc_msgSendSuper2(&v4, "dealloc");
}