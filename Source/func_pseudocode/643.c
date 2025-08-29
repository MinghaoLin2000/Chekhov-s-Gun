+[FileSharingListItem fileSharingListItemWithAttributes:]
FileSharingListItem *__cdecl +[FileSharingListItem fileSharingListItemWithAttributes:](id a1, SEL a2, id a3)
{
  id v3; // x20
  FileSharingListItem *v4; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retain(a3);
  v4 = -[FileSharingListItem initWithAttributes:](
         objc_alloc(&OBJC_CLASS___FileSharingListItem),
         "initWithAttributes:",
         v3);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}