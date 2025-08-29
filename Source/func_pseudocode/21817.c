__ZN9serialize10Serializer4syncEPKcRf
float __fastcall serialize::Serializer::sync(serialize::Serializer *this, const char *a2, float *a3)
{
  int v4; // w8
  void *v5; // x0
  double v6; // d0
  float result; // s0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = *(unsigned __int8 *)this;
  v5 = (void *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    v6 = *a3;
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    xpc_dictionary_set_double(v5, a2, v6);
  }
  else
  {
    result = xpc_dictionary_get_double(v5, a2);
    *a3 = result;
  }
  return result;
}