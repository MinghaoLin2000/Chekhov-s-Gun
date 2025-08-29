-[DeviceFileSharingViewController selectedItems]
id __cdecl -[DeviceFileSharingViewController selectedItems](DeviceFileSharingViewController *self, SEL a2)
{
  void *v3; // x20
  NSOutlineView *v4; // x22
  void *v5; // x21
  void *v6; // x0
  void *v7; // x22
  NSOutlineView *v8; // x23
  id v9; // x24
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceFileSharingViewController outlineView](self, "outlineView"));
  v5 = objc_retainAutoreleasedReturnValue(-[NSOutlineView selectedRowIndexes](v4, "selectedRowIndexes"));
  objc_release(v4);
  v6 = objc_msgSend(v5, "firstIndex");
  if ( v6 != (void *)0x7FFFFFFFFFFFFFFFLL )
  {
    v7 = v6;
    do
    {
      v8 = objc_retainAutoreleasedReturnValue(-[DeviceFileSharingViewController outlineView](self, "outlineView"));
      v9 = objc_retainAutoreleasedReturnValue(-[NSOutlineView itemAtRow:](v8, "itemAtRow:", v7));
      objc_release(v8);
      objc_msgSend(v3, "addObject:", v9);
      v7 = objc_msgSend(v5, "indexGreaterThanIndex:", v7);
      objc_release(v9);
    }
    while ( v7 != (void *)0x7FFFFFFFFFFFFFFFLL );
  }
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}