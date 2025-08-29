-[DeviceFileSharingViewController selectItems:]
void __cdecl -[DeviceFileSharingViewController selectItems:](DeviceFileSharingViewController *self, SEL a2, id a3)
{
  id v4; // x19
  void *v5; // x20
  NSOutlineView *v6; // x22
  __int64 v7; // x23
  __int64 v8; // x22
  NSOutlineView *v9; // x24
  id v10; // x23
  NSOutlineView *v11; // x23
  void *v12; // x24
  NSOutlineView *v13; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(+[NSMutableIndexSet indexSet](&OBJC_CLASS___NSMutableIndexSet, "indexSet"));
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceFileSharingViewController outlineView](self, "outlineView"));
  v7 = (__int64)-[NSOutlineView numberOfRows](v6, "numberOfRows");
  objc_release(v6);
  if ( v7 >= 1 )
  {
    v8 = 0LL;
    do
    {
      v9 = objc_retainAutoreleasedReturnValue(-[DeviceFileSharingViewController outlineView](self, "outlineView"));
      v10 = objc_retainAutoreleasedReturnValue(-[NSOutlineView itemAtRow:](v9, "itemAtRow:", v8));
      objc_release(v9);
      if ( (unsigned int)objc_msgSend(v4, "containsObject:", v10) )
        objc_msgSend(v5, "addIndex:", v8);
      objc_release(v10);
      ++v8;
      v11 = objc_retainAutoreleasedReturnValue(-[DeviceFileSharingViewController outlineView](self, "outlineView"));
      v12 = -[NSOutlineView numberOfRows](v11, "numberOfRows");
      objc_release(v11);
    }
    while ( v8 < (__int64)v12 );
  }
  v13 = objc_retainAutoreleasedReturnValue(-[DeviceFileSharingViewController outlineView](self, "outlineView"));
  -[NSOutlineView selectRowIndexes:byExtendingSelection:](v13, "selectRowIndexes:byExtendingSelection:", v5, 0LL);
  objc_release(v13);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}