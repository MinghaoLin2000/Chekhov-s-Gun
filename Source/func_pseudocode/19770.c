__Z16liteLockPrintersv
void liteLockPrinters(void)
{
  NSMutableDictionary *v0; // x0
  void *v1; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  pthread_mutex_lock(&stru_1000C0FD0);
  if ( !qword_1000C3EA0 )
  {
    v0 = objc_opt_new(&OBJC_CLASS___NSMutableDictionary);
    v1 = (void *)qword_1000C3EA0;
    qword_1000C3EA0 = (__int64)v0;
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v1);
  }
}