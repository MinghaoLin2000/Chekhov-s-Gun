_$sSo17OS_dispatch_queueC12EyeCandyCoreE15defaultPriorityABvau
__int64 *OS_dispatch_queue.defaultPriority.unsafeMutableAddressor()
{
  if ( qword_10002A0F0 != -1 )
    swift_once(&qword_10002A0F0, sub_10000C84C);
  return &static OS_dispatch_queue.defaultPriority;
}