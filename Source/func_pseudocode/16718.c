_CFUserNotificationCreate
CFUserNotificationRef __cdecl CFUserNotificationCreate(
        CFAllocatorRef allocator,
        CFTimeInterval timeout,
        CFOptionFlags flags,
        SInt32 *error,
        CFDictionaryRef dictionary)
{
  return _CFUserNotificationCreate(allocator, timeout, flags, error, dictionary);
}