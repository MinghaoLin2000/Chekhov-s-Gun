-[UARPUSBDFUAccessory activeFW]
// local variable allocation has failed, the output may be wrong!
UARPVersion __cdecl -[UARPUSBDFUAccessory activeFW](UARPUSBDFUAccessory *self, SEL a2)
{
  __int64 v2; // x0
  __int64 v3; // x1
  _QWORD v4[2]; // [xsp+0h] [xbp-10h] BYREF
  UARPVersion result; // 0:x0.16

  objc_copyStruct(v4, &self->_activeFW, 16LL, 1, 0);
  v2 = v4[0];
  v3 = v4[1];
  result.release = v3;
  result.build = HIDWORD(v3);
  result.major = v2;
  result.minor = HIDWORD(v2);
  return result;
}