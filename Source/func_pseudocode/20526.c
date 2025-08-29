_CFNotificationCenterPostNotification
void __cdecl CFNotificationCenterPostNotification(
        CFNotificationCenterRef center,
        CFNotificationName name,
        const void *object,
        CFDictionaryRef userInfo,
        Boolean deliverImmediately)
{
  _CFNotificationCenterPostNotification(center, name, object, userInfo, deliverImmediately);
}