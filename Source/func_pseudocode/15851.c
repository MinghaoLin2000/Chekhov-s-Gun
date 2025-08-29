_fUarpLayer3DownstreamEndpointRecvMessage
__int64 __fastcall fUarpLayer3DownstreamEndpointRecvMessage(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v3)(_QWORD, _QWORD, _QWORD); // x5

  v3 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 464);
  if ( v3 )
    return v3(*(_QWORD *)(a1 + 544), *(_QWORD *)(a2 + 40), *(_QWORD *)(a3 + 40));
  else
    return 14LL;
}