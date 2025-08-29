_piston_free_desciptor
void __fastcall piston_free_desciptor(_QWORD *a1)
{
  void *v2; // x0
  void *v3; // x0
  void *v4; // x0
  void *v5; // x0
  void *v6; // x0
  void *v7; // x0
  void *v8; // x0
  void *v9; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = (void *)a1[2];
  if ( v2 )
  {
    free(v2);
    a1[2] = 0LL;
  }
  v3 = (void *)a1[3];
  if ( v3 )
  {
    free(v3);
    a1[3] = 0LL;
  }
  v4 = (void *)a1[48];
  if ( v4 )
    free(v4);
  v5 = (void *)a1[49];
  if ( v5 )
    free(v5);
  v6 = (void *)a1[50];
  if ( v6 )
    free(v6);
  v7 = (void *)a1[51];
  if ( v7 )
    free(v7);
  v8 = (void *)a1[29];
  if ( v8 )
    free(v8);
  v9 = (void *)a1[30];
  if ( v9 )
    free(v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  free(a1);
}