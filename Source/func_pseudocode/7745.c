_$s16EyeCandyGraphics15SystemEventMaskV12notificationACvau
int *SystemEventMask.notification.unsafeMutableAddressor()
{
  if ( qword_10002A668 != -1 )
    swift_once(&qword_10002A668, sub_100015FC4);
  return &static SystemEventMask.notification;
}