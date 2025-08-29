-[DeviceFileSharingViewController removeOutlineViewItem:]
bool __cdecl -[DeviceFileSharingViewController removeOutlineViewItem:](
        DeviceFileSharingViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  NSOutlineView *v5; // x21
  id v6; // x20
  NSOutlineView *v7; // x23
  NSInteger v8; // x21
  NSOutlineView *v9; // x22
  NSIndexSet *v10; // x23

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceFileSharingViewController outlineView](self, "outlineView"));
  v6 = objc_retainAutoreleasedReturnValue(-[NSOutlineView parentForItem:](v5, "parentForItem:", v4));
  objc_release(v5);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceFileSharingViewController outlineView](self, "outlineView"));
  v8 = -[NSOutlineView childIndexForItem:](v7, "childIndexForItem:", v4);
  objc_release(v7);
  if ( (v8 & 0x8000000000000000LL) == 0 )
  {
    objc_msgSend(v6, "removeChild:", v4);
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceFileSharingViewController outlineView](self, "outlineView"));
    v10 = objc_retainAutoreleasedReturnValue(+[NSIndexSet indexSetWithIndex:](&OBJC_CLASS___NSIndexSet, "indexSetWithIndex:", v8));
    -[NSOutlineView removeItemsAtIndexes:inParent:withAnimation:](
      v9,
      "removeItemsAtIndexes:inParent:withAnimation:",
      v10,
      v6,
      16LL);
    objc_release(v10);
    objc_release(v9);
  }
  objc_release(v6);
  objc_release(v4);
  return v8 >= 0;
}