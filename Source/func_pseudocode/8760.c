$s34AppleMediaServicesUIDynamicService9JSAccountVwxx_0
__int64 __fastcall _s34AppleMediaServicesUIDynamicService9JSAccountVwxx_0(_QWORD *a1)
{
  __int64 v1; // x16

  v1 = *(_QWORD *)(a1[3] - 8LL);
  if ( (*(_BYTE *)(v1 + 82) & 2) != 0 )
    return swift_release(*a1);
  else
    return (*(__int64 (**)(void))(v1 + 8))();
}