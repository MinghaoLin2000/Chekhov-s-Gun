+[PAUbiquityController downloadUbiquitousCardsFolder]
void __cdecl +[PAUbiquityController downloadUbiquitousCardsFolder](id a1, SEL a2)
{
  NSFileManager *v3; // x20
  void *v4; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "_ubiquitousCardsURL"));
  -[NSFileManager startDownloadingUbiquitousItemAtURL:error:](v3, "startDownloadingUbiquitousItemAtURL:error:", v4, 0LL);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}