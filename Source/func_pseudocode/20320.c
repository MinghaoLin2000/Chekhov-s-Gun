__Z23liteNotifyClearPasswordP14lite_printer_t
void __fastcall liteNotifyClearPassword(lite_printer_t *a1)
{
  NSURL *v1; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v1 = objc_retainAutoreleasedReturnValue(-[lite_printer_t device_uri](a1, "device_uri"));
  PKStoreAuthInfo(v1, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v1);
}