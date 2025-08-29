-[NSScanner tsu_scanCGFloat:]
bool __cdecl -[NSScanner tsu_scanCGFloat:](NSScanner *self, SEL a2, double *a3)
{
  bool result; // w0
  __int64 v5; // [xsp+8h] [xbp-18h] BYREF

  v5 = 0LL;
  result = -[NSScanner scanDouble:](self, "scanDouble:", &v5);
  *(_QWORD *)a3 = v5;
  return result;
}