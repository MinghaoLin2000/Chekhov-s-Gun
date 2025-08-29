_IOServiceAddMatchingNotification
kern_return_t __cdecl IOServiceAddMatchingNotification(
        IONotificationPortRef notifyPort,
        const io_name_t notificationType,
        CFDictionaryRef matching,
        IOServiceMatchingCallback callback,
        void *refCon,
        io_iterator_t *notification)
{
  return _IOServiceAddMatchingNotification(notifyPort, notificationType, matching, callback, refCon, notification);
}