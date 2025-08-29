-[DeviceFileSharingViewController outlineView:validateDrop:proposedItem:proposedChildIndex:]
unsigned __int64 __cdecl -[DeviceFileSharingViewController outlineView:validateDrop:proposedItem:proposedChildIndex:](
        DeviceFileSharingViewController *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        signed __int64 a6)
{
  id v10; // x19
  id v11; // x20
  id v12; // x21
  DeviceFileSharingViewController *v13; // x23
  void *v14; // x0
  void *v15; // x23
  id v16; // x22
  unsigned __int64 v17; // x22

  v10 = objc_retain(a3);
  v11 = objc_retain(a4);
  v12 = objc_retain(a5);
  if ( a6 < 0
    || (v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "draggingSource")), objc_release(v13), v13 == self) )
  {
    v17 = 0LL;
  }
  else
  {
    v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "parentForItem:", v12));
    v15 = v14;
    if ( v14 )
      v16 = v14;
    else
      v16 = v12;
    objc_msgSend(v10, "setDropItem:dropChildIndex:", v16, -1LL);
    v17 = v16 != 0LL;
    objc_release(v15);
  }
  objc_release(v12);
  objc_release(v11);
  objc_release(v10);
  return v17;
}