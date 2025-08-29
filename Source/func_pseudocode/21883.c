__ZN9serialize4Prim7releaseEv
__int64 __fastcall serialize::Prim::release(serialize::Prim *this)
{
  __int64 *v2; // x20
  __int64 *v3; // x21
  __int64 v4; // t1
  __int64 result; // x0
  __int64 (__fastcall *v6)(serialize::Prim *); // x1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = (__int64 *)*((_QWORD *)this + 5);
  v3 = (__int64 *)*((_QWORD *)this + 6);
  if ( v2 == v3 )
    goto LABEL_4;
  do
  {
    v4 = *v2++;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  while ( v2 != v3 );
  if ( this )
  {
LABEL_4:
    v6 = *(__int64 (__fastcall **)(serialize::Prim *))(*(_QWORD *)this + 8LL);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return v6(this);
  }
  return result;
}