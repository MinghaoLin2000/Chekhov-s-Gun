_piston_init
__int64 piston_init()
{
  __int64 inited; // x19
  unsigned int v1; // w0

  pthread_mutex_lock(&stru_100018F90);
  if ( (byte_100018FF8 & 1) != 0 )
  {
    inited = 0LL;
  }
  else
  {
    v1 = time(0LL);
    srandom(v1);
    inited = piston_init_negotiation();
    if ( (_DWORD)inited )
    {
      if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
        sub_10000F124(inited);
    }
    else
    {
      byte_100018FF8 = 1;
    }
  }
  pthread_mutex_unlock(&stru_100018F90);
  return inited;
}