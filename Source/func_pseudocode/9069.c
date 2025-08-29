-[TSPPackageWriter finalizeComponentAndDataSectionWithCompletionHandler:]
void __cdecl -[TSPPackageWriter finalizeComponentAndDataSectionWithCompletionHandler:](
        TSPPackageWriter *self,
        SEL a2,
        id a3)
{
  id v3; // x0
  void *v4; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retain(a3);
  v4 = v3;
  if ( v3 )
    (*((void (__fastcall **)(id, _QWORD))v3 + 2))(v3, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}