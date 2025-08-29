__ZN9serialize10Serializer4syncEPKcRNS_13InterpolationE
void __fastcall serialize::Serializer::sync(unsigned __int8 *a1, const char *a2, int *a3)
{
  int v3; // w8
  void *v4; // x0
  int64_t v5; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = *a1;
  v4 = (void *)*((_QWORD *)a1 + 1);
  if ( v3 )
  {
    v5 = *a3;
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    xpc_dictionary_set_int64(v4, a2, v5);
  }
  else
  {
    *a3 = xpc_dictionary_get_int64(v4, a2);
  }
}