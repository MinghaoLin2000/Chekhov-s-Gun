-[DeviceFileSharingViewController outlineView:child:ofItem:]
id __cdecl -[DeviceFileSharingViewController outlineView:child:ofItem:](
        DeviceFileSharingViewController *self,
        SEL a2,
        id a3,
        signed __int64 a4,
        id a5)
{
  id v8; // x19
  id v9; // x0
  void *v10; // x20
  NSMutableArray *v11; // x0
  NSMutableArray *v12; // x22
  void *v13; // x23
  void *v14; // x24
  void *v15; // x23
  void *v16; // x21
  NSMutableArray *v17; // x23
  void *v18; // x24
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v8 = objc_retain(a3);
  v9 = objc_retain(a5);
  v10 = v9;
  if ( v9 )
  {
    v11 = (NSMutableArray *)objc_retain(v9);
    v12 = v11;
    if ( a4 < 0
      || (v13 = objc_retainAutoreleasedReturnValue(-[NSMutableArray children](v11, "children")),
          v14 = objc_msgSend(v13, "count"),
          objc_release(v13),
          (unsigned __int64)v14 <= a4) )
    {
      v16 = 0LL;
    }
    else
    {
      v15 = objc_retainAutoreleasedReturnValue(-[NSMutableArray children](v12, "children"));
      v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "objectAtIndexedSubscript:", a4));
      objc_release(v15);
    }
    goto LABEL_9;
  }
  if ( (a4 & 0x8000000000000000LL) == 0 )
  {
    v17 = objc_retainAutoreleasedReturnValue(-[DeviceFileSharingViewController fileSharingAppItems](self, "fileSharingAppItems"));
    v18 = -[NSMutableArray count](v17, "count");
    objc_release(v17);
    if ( (unsigned __int64)v18 > a4 )
    {
      v12 = objc_retainAutoreleasedReturnValue(-[DeviceFileSharingViewController fileSharingAppItems](self, "fileSharingAppItems"));
      v16 = objc_retainAutoreleasedReturnValue(-[NSMutableArray objectAtIndexedSubscript:](v12, "objectAtIndexedSubscript:", a4));
LABEL_9:
      objc_release(v12);
      goto LABEL_11;
    }
  }
  v16 = 0LL;
LABEL_11:
  objc_release(v10);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v16);
}