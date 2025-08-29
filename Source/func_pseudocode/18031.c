_UnmountServerURL
__int64 __fastcall UnmountServerURL(const char *a1)
{
  return unmount(a1, 0);
}