-[AMLoaderServiceAction remoteActionResume]
void __cdecl -[AMLoaderServiceAction remoteActionResume](AMLoaderServiceAction *self, SEL a2)
{
  _QWORD v3[5]; // [xsp+8h] [xbp-38h] BYREF

  if ( -[AMLoaderServiceAction _supportsPauseResume](self, "_supportsPauseResume") )
  {
    v3[0] = _NSConcreteStackBlock;
    v3[1] = 3254779904LL;
    v3[2] = sub_10000BE44;
    v3[3] = &unk_10001C758;
    v3[4] = self;
    -[AMLoaderServiceAction _executeSynchronouslyWithLoadedActionOnMainThread:](
      self,
      "_executeSynchronouslyWithLoadedActionOnMainThread:",
      v3);
  }
  else if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
  {
    sub_100012264(self);
  }
}