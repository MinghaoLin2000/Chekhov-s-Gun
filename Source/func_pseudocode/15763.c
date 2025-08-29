-[UARPUSBDFUAccessory stagedFW]
// local variable allocation has failed, the output may be wrong!
UARPVersion __cdecl -[UARPUSBDFUAccessory stagedFW](UARPUSBDFUAccessory *self, SEL a2)
{
  __int64 v2; // x1
  __int64 v3; // x0
  UARPVersion result; // 0:x0.16

  v2 = *(_QWORD *)&self->_stagedFW.release;
  v3 = *(_QWORD *)&self->_stagedFW.major;
  result.release = v2;
  result.build = HIDWORD(v2);
  result.major = v3;
  result.minor = HIDWORD(v3);
  return result;
}