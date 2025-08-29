__ZN9serialize10Serializer4syncEPKcRNSt3__16vectorINS_4Vec3ENS3_9allocatorIS5_EEEE
void __fastcall serialize::Serializer::sync(__int64 a1, const char *a2, __int64 a3)
{
  void *v4; // x0
  const void *v5; // x2
  size_t v6; // x3
  size_t length; // [xsp+8h] [xbp-18h] BYREF
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( *(_BYTE *)a1 )
  {
    v4 = *(void **)(a1 + 8);
    v5 = *(const void **)a3;
    v6 = *(_QWORD *)(a3 + 8) - *(_QWORD *)a3;
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    xpc_dictionary_set_data(v4, a2, v5, v6);
  }
  else
  {
    length = 0LL;
    xpc_dictionary_get_data(*(xpc_object_t *)(a1 + 8), a2, &length);
    sub_10000801C(a3);
  }
}