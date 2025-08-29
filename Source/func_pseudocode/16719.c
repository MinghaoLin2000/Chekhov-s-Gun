_CFUserNotificationReceiveResponse
SInt32 __cdecl CFUserNotificationReceiveResponse(
        CFUserNotificationRef userNotification,
        CFTimeInterval timeout,
        CFOptionFlags *responseFlags)
{
  return _CFUserNotificationReceiveResponse(userNotification, timeout, responseFlags);
}