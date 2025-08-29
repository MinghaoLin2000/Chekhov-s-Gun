_CFUUIDGetUUIDBytes
// local variable allocation has failed, the output may be wrong!
CFUUIDBytes __cdecl CFUUIDGetUUIDBytes(CFUUIDRef uuid)
{
  __int64 v1; // x0
  __int64 v2; // x1
  CFUUIDBytes v3; // kr00_16
  CFUUIDBytes result; // 0:x0.16

  v3 = _CFUUIDGetUUIDBytes(uuid);
  v2 = *(_QWORD *)&v3.byte8;
  v1 = *(_QWORD *)&v3.byte0;
  result.byte8 = v2;
  result.byte9 = BYTE1(v2);
  result.byte10 = BYTE2(v2);
  result.byte11 = BYTE3(v2);
  result.byte12 = BYTE4(v2);
  result.byte13 = BYTE5(v2);
  result.byte14 = BYTE6(v2);
  result.byte15 = HIBYTE(v2);
  result.byte0 = v1;
  result.byte1 = BYTE1(v1);
  result.byte2 = BYTE2(v1);
  result.byte3 = BYTE3(v1);
  result.byte4 = BYTE4(v1);
  result.byte5 = BYTE5(v1);
  result.byte6 = BYTE6(v1);
  result.byte7 = HIBYTE(v1);
  return result;
}