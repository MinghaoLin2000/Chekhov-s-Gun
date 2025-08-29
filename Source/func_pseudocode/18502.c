_$s19ControlCenterHelper04WiFiC0C16enableMonitoringypyF
__int64 __usercall WiFiHelper.enableMonitoring()@<X0>(__int64 *a1@<X8>)
{
  __int64 v2; // x21
  __int64 v3; // x22
  __int64 result; // x0

  v2 = type metadata accessor for WiFiHelper.ScanningAssertion(0LL);
  v3 = swift_allocObject(v2, 16LL, 7LL);
  if ( qword_1000939E0 != -1 )
    swift_once(&qword_1000939E0, sub_100016030);
  result = sub_100018928(sub_10001CB18, &unk_10008B698);
  a1[3] = v2;
  *a1 = v3;
  return result;
}