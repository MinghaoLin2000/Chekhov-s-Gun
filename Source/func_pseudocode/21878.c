__ZNK15fileFormatUtils8Material8hasInputEN9serialize12MapInputNameE
bool __fastcall fileFormatUtils::Material::hasInput(__int64 a1, int a2)
{
  __int64 v2; // x0
  __int64 v3; // x9
  __int64 v4; // t1
  __int64 v5; // x8
  int v6; // w10
  bool v7; // cc
  __int64 *v8; // x10

  v4 = *(_QWORD *)(a1 + 8);
  v2 = a1 + 8;
  v3 = v4;
  if ( !v4 )
    goto LABEL_11;
  v5 = v2;
  do
  {
    v6 = *(_DWORD *)(v3 + 32);
    v7 = v6 < a2;
    if ( v6 >= a2 )
      v8 = (__int64 *)v3;
    else
      v8 = (__int64 *)(v3 + 8);
    if ( !v7 )
      v5 = v3;
    v3 = *v8;
  }
  while ( *v8 );
  if ( v5 == v2 || *(_DWORD *)(v5 + 32) > a2 )
LABEL_11:
    v5 = v2;
  return v5 != v2;
}