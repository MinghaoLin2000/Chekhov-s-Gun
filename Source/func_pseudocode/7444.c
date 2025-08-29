_$sSo17OS_dispatch_queueC12EyeCandyCoreE15defaultPriorityABvgZ
id static OS_dispatch_queue.defaultPriority.getter()
{
  void *v0; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  if ( qword_10002A0F0 != -1 )
    swift_once(&qword_10002A0F0, sub_10000C84C);
  v0 = (void *)static OS_dispatch_queue.defaultPriority;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retain(v0);
}