_MountCompleteURL
__int64 __fastcall MountCompleteURL(char *a1, int a2, int a3, int a4, __int64 a5)
{
  return MountURLWithAuthentication(a1, a2, a3, a4, a5, 0, 0, 0LL, 0LL, a5);
}