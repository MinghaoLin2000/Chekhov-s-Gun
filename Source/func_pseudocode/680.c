-[DeviceFileSharingViewController outlineView:numberOfChildrenOfItem:]
signed __int64 __cdecl -[DeviceFileSharingViewController outlineView:numberOfChildrenOfItem:](
        DeviceFileSharingViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v5; // x0
  void *v6; // x19
  NSMutableArray *v7; // x0
  NSMutableArray *v8; // x20
  void *v9; // x21

  v5 = objc_retain(a4);
  v6 = v5;
  if ( v5 )
    v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "children"));
  else
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceFileSharingViewController fileSharingAppItems](self, "fileSharingAppItems"));
  v8 = v7;
  v9 = -[NSMutableArray count](v7, "count");
  objc_release(v8);
  objc_release(v6);
  return (signed __int64)v9;
}