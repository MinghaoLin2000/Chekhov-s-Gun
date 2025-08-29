_urfDelete
void __fastcall urfDelete(_QWORD *a1)
{
  void *v2; // x0
  void *v3; // x0
  void *v4; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( a1 )
  {
    v2 = (void *)a1[7];
    if ( v2 )
      free(v2);
    v3 = (void *)a1[12];
    if ( v3 )
      free(v3);
    v4 = (void *)a1[15];
    if ( v4 )
      free(v4);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    free(a1);
  }
}