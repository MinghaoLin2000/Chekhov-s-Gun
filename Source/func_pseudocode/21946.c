+[PAUbiquityController observeUbiquitousContainer]
id __cdecl +[PAUbiquityController observeUbiquitousContainer](id a1, SEL a2)
{
  NSArray *v2; // x19
  unsigned __int8 v3; // w20
  void *v4; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( qword_10000CC10 != -1 )
    dispatch_once(&qword_10000CC10, &stru_1000082D8);
  v2 = objc_retainAutoreleasedReturnValue(+[NSFileCoordinator filePresenters](&OBJC_CLASS___NSFileCoordinator, "filePresenters"));
  v3 = -[NSArray containsObject:](v2, "containsObject:", qword_10000CC18);
  objc_release(v2);
  if ( (v3 & 1) == 0 )
    +[NSFileCoordinator addFilePresenter:](&OBJC_CLASS___NSFileCoordinator, "addFilePresenter:", qword_10000CC18);
  v4 = (void *)qword_10000CC18;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(v4);
}