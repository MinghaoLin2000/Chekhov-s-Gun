_RunningInRecoveryOS
bool RunningInRecoveryOS()
{
  stat v1; // [xsp+0h] [xbp-90h] BYREF

  memset(&v1, 0, sizeof(v1));
  return stat("/etc/rc.cdrom", &v1) == 0;
}