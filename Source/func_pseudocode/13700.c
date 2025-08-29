_NSRangeFromString
// local variable allocation has failed, the output may be wrong!
NSRange __cdecl NSRangeFromString(NSString *aString)
{
  NSUInteger location; // x0
  NSUInteger length; // x1
  NSRange v3; // kr00_16
  NSRange result; // 0:x0.16

  v3 = _NSRangeFromString(aString);
  length = v3.length;
  location = v3.location;
  result.length = length;
  result.location = location;
  return result;
}