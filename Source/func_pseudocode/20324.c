__Z13PKCancelAlertP8NSString
__int64 __fastcall PKCancelAlert(NSString *a1)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  pthread_mutex_lock(&stru_1000C3D10);
  if ( qword_1000C3F38 )
  {
    CFUserNotificationCancel((CFUserNotificationRef)qword_1000C3F38);
    qword_1000C3F38 = 0LL;
    dword_1000C3F40 = 0;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return pthread_mutex_unlock(&stru_1000C3D10);
}