-[DeviceFileSharingViewController outlineViewItemWillExpand:]
void __cdecl -[DeviceFileSharingViewController outlineViewItemWillExpand:](
        DeviceFileSharingViewController *self,
        SEL a2,
        id a3)
{
  void *v4; // x21
  FileSharingListItem *v5; // x20
  FileSharingListItem *v6; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "userInfo"));
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", CFSTR("NSObject")));
  objc_release(v4);
  if ( -[FileSharingListItem isApp](v5, "isApp") )
  {
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceFileSharingViewController refreshingListItem](self, "refreshingListItem"));
    objc_release(v6);
    if ( v6 != v5 )
      -[DeviceFileSharingViewController loadChildrenForFileSharingListItem:](
        self,
        "loadChildrenForFileSharingListItem:",
        v5);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}