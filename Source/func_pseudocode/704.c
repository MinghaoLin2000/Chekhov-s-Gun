-[DeviceFileSharingViewController deleteSelectedItems]
void __cdecl -[DeviceFileSharingViewController deleteSelectedItems](DeviceFileSharingViewController *self, SEL a2)
{
  id v3; // x19
  _QWORD v4[5]; // [xsp+0h] [xbp-40h] BYREF
  id v5; // [xsp+28h] [xbp-18h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceFileSharingViewController selectedItems](self, "selectedItems"));
  if ( objc_msgSend(v3, "count") )
  {
    v4[0] = _NSConcreteStackBlock;
    v4[1] = 3254779904LL;
    v4[2] = sub_100012478;
    v4[3] = &unk_1000B8E48;
    v4[4] = self;
    v5 = objc_retain(v3);
    -[DeviceFileSharingViewController promptToDeleteItems:completionHandler:](
      self,
      "promptToDeleteItems:completionHandler:",
      v5,
      v4);
    objc_release(v5);
  }
  objc_release(v3);
}