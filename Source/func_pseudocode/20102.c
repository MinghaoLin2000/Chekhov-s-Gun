__Z12getNamedAttrI10PKJobStateET_P5ipp_tP8NSString
__int64 __fastcall getNamedAttr<PKJobState>(void *a1, void *a2)
{
  id v3; // x19
  id v4; // x20
  unsigned __int8 v5; // w0
  __int64 v6; // x21

  v3 = objc_retain(a1);
  v4 = objc_retain(a2);
  v5 = sub_10003208C((int)v3, (int)v4, &stru_10009E3D8);
  v6 = validate_enum<PKJobState,unsigned char>(v5);
  objc_release(v4);
  objc_release(v3);
  return v6;
}