+[SPCloudStorageHelper sharedDispatchQueue]
id __cdecl +[SPCloudStorageHelper sharedDispatchQueue](id a1, SEL a2)
{
  void *v2; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  if ( qword_1000089F8 != -1 )
    dispatch_once(&qword_1000089F8, &stru_100004188);
  v2 = (void *)qword_1000089F0;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(v2);
}