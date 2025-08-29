_$ss6UInt64V16EyeCandyGraphicsEyAbC15SystemEventMaskVcfC
// local variable allocation has failed, the output may be wrong!
Swift::UInt64 __swiftcall UInt64.init(_:)(EyeCandyGraphics::SystemEventMask a1)
{
  Swift::UInt64 result; // x0

  *(_QWORD *)&a1.rawValue = a1.rawValue;
  LODWORD(result) = a1;
  return result;
}