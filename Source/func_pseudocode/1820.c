-[DeviceHeaderViewController control:textView:doCommandBySelector:]
bool __cdecl -[DeviceHeaderViewController control:textView:doCommandBySelector:](
        DeviceHeaderViewController *self,
        SEL a2,
        id a3,
        id a4,
        SEL a5)
{
  NSTextField *v8; // x19
  void *v9; // x20

  if ( "insertNewline:" == a5 || "insertTab:" == a5 || "insertBacktab:" == a5 || "cancelOperation:" == a5 )
  {
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController deviceNameLabel](self, "deviceNameLabel", a3, a4));
    v9 = objc_retainAutoreleasedReturnValue(-[NSTextField window](v8, "window"));
    objc_msgSend(v9, "makeFirstResponder:", 0LL);
    objc_release(v9);
    objc_release(v8);
  }
  return 0;
}