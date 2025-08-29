__ZN3TSP12SnappySourceC1EPU27objcproto16OS_dispatch_data8NSObject
_QWORD *__fastcall TSP::SnappySource::SnappySource(_QWORD *a1, id a2)
{
  dispatch_data_s *v3; // x0
  size_t size; // x0

  v3 = (dispatch_data_s *)objc_retain(a2);
  *a1 = off_1001D39B0;
  a1[1] = v3;
  size = dispatch_data_get_size(v3);
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[2] = size;
  return a1;
}