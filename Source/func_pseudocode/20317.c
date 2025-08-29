__Z17_liteNotifyCancelP8NSString
void __fastcall _liteNotifyCancel(NSString *a1)
{
  NSString *v1; // x19

  v1 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("%s/%@"),
           "_liteNotifyCancel",
           a1));
  PKCancelAlert(v1);
  objc_release(v1);
  dword_1000C3F30 = 0;
}