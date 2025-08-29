-[DeviceFinderTabContainerViewController tabView:didSelectTabViewItem:]
void __cdecl -[DeviceFinderTabContainerViewController tabView:didSelectTabViewItem:](
        DeviceFinderTabContainerViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v5; // x21
  NSNotificationCenter *v6; // x20
  void *v7; // x22
  NSDictionary *v8; // x21
  const __CFString *v9; // [xsp+8h] [xbp-38h] BYREF
  void *v10; // [xsp+10h] [xbp-30h] BYREF

  if ( a4 )
  {
    v5 = objc_retain(a4);
    v6 = objc_retainAutoreleasedReturnValue(+[NSNotificationCenter defaultCenter](&OBJC_CLASS___NSNotificationCenter, "defaultCenter"));
    v9 = CFSTR("Identifier");
    v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "identifier"));
    objc_release(v5);
    v10 = v7;
    v8 = objc_retainAutoreleasedReturnValue(
           +[NSDictionary dictionaryWithObjects:forKeys:count:](
             &OBJC_CLASS___NSDictionary,
             "dictionaryWithObjects:forKeys:count:",
             &v10,
             &v9,
             1LL));
    -[NSNotificationCenter postNotificationName:object:userInfo:](
      v6,
      "postNotificationName:object:userInfo:",
      CFSTR("DeviceFinderTabDidChangeNotification"),
      self,
      v8);
    objc_release(v8);
    objc_release(v7);
    objc_release(v6);
  }
}